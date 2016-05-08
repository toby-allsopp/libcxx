#include "experimental/filesystem"
#include <dirent.h>
#include <errno.h>

_LIBCPP_BEGIN_NAMESPACE_EXPERIMENTAL_FILESYSTEM

namespace { namespace detail {

inline error_code capture_errno() {
    _LIBCPP_ASSERT(errno, "Expected errno to be non-zero");
    return error_code{errno, std::generic_category()};
}

template <class ...Args>
inline bool capture_error_or_throw(std::error_code* user_ec,
                                   const char* msg, Args&&... args)
{
    std::error_code my_ec = capture_errno();
    if (user_ec) {
        *user_ec = my_ec;
        return true;
    }
    throw filesystem_error(msg, std::forward<Args>(args)..., my_ec);
}

template <class ...Args>
inline bool set_error_or_throw(std::error_code& my_ec,
                               std::error_code* user_ec,
                               const char* msg, Args&&... args)
{
    if (user_ec) {
        *user_ec = my_ec;
        return true;
    }
    throw filesystem_error(msg, std::forward<Args>(args)..., my_ec);
}

typedef path::string_type string_type;

inline DIR *posix_opendir(const string_type& p, error_code& ec) {
    DIR *ret;
    ec.clear();
    if ((ret = ::opendir(p.c_str())) == nullptr)
        ec = capture_errno();
    return ret;
}

inline string_type posix_readdir_r(DIR *dir_stream, error_code& ec) {
    struct dirent dir_entry;
    struct dirent *dir_entry_ptr{nullptr};
    int ret;
    if ((ret = ::readdir_r(dir_stream,  &dir_entry,  &dir_entry_ptr)) != 0)
    {
        ec = capture_errno();
        return {};
    }
    ec.clear();
    return dir_entry_ptr ? dir_entry.d_name : string_type{};
}

inline std::error_code posix_closedir(DIR *dir_stream) {
    if (::closedir(dir_stream) == -1) {
        return capture_errno();
    }
    return {};
}

}}                                                       // namespace detail

using detail::set_error_or_throw;
using detail::capture_error_or_throw;

class __dir_stream {
public:
    __dir_stream() = delete;
    __dir_stream(const __dir_stream&) = delete;
    __dir_stream& operator=(const __dir_stream&) = delete;

    __dir_stream(const path& root, error_code& ec)
        : __stream_(detail::posix_opendir(root.native(),  ec)),
          __root_(root)
    {}

    ~__dir_stream() noexcept
      { if (__stream_) close(); }

    bool good() const noexcept { return __stream_ != nullptr; }

    bool advance(error_code &ec) {
        while (true) {
            auto str = detail::posix_readdir_r(__stream_,  ec);
            if (str == "." || str == "..") {
                continue;
            } else if (ec || str.empty()) {
                close();
                //__entry_ = {};
                return false;
            } else {
                __entry_.assign(__root_ / str);
                return true;
            }
        }
    }
private:
    std::error_code close() noexcept {
        std::error_code ec = detail::posix_closedir(__stream_);
        __stream_ = nullptr;
        return ec;
    }

    DIR * __stream_{nullptr};
public:
    path __root_;
    directory_entry __entry_;
};

// directory_iterator

directory_iterator::directory_iterator(const path& p, error_code *ec,
                                       directory_options opts)
{
    std::error_code m_ec;
    __imp_ = make_shared<__dir_stream>(p, m_ec);
    if (m_ec) {
        __imp_.reset();

        const bool allow_eacess =
            bool(opts & directory_options::skip_permission_denied);
        const std::error_code eaccess_cond =
            std::make_error_code(std::errc::permission_denied);

        if (allow_eacess && m_ec == eaccess_cond)
            return;

        set_error_or_throw(m_ec, ec, "directory_iterator could not be "
                                        " constructed from path", p);
        return;
    }
    __increment(ec);
}

directory_iterator& directory_iterator::__increment(error_code *ec)
{
    _LIBCPP_ASSERT(__stream_, "Attempting to increment an invalid iterator");
    std::error_code m_ec;

    if (!__imp_->advance(m_ec)) {
        __imp_.reset();
        if (m_ec)
            set_error_or_throw(m_ec, ec, "directory_iterator::operator++()");
    } else {
        if (ec) ec->clear();
    }
    return *this;

}

directory_entry const& directory_iterator::__deref() const {
    return __imp_->__entry_;
}

// recursive_directory_iterator

recursive_directory_iterator::recursive_directory_iterator(const path& p, 
    directory_options opt, error_code *ec)
{
    directory_iterator new_it(p, ec, opt);
    if ((ec && *ec) || new_it == directory_iterator{}) {
        return;
    }
    __rec_ = true;
    __imp_ = _VSTD::make_shared<__shared_imp>();
    __imp_->__options_ = opt;
    __imp_->__stack_.push(_VSTD::move(new_it));
}

recursive_directory_iterator& 
recursive_directory_iterator::__increment(error_code *ec)
{
    std::error_code m_ec;
    const directory_iterator end_it;
    auto& stack = __imp_->__stack_;

    if (recursion_pending()) {
        if (__try_recursion(m_ec))
            return *this;
        else if (m_ec)
            goto handle_failure;
    }
    __rec_ = true;

    while (stack.size() > 0) {
        stack.top().__increment(&m_ec);
        if (m_ec) goto handle_failure;
        if (stack.top() != end_it) break;
        stack.pop();
    }
    if (stack.size() == 0)
        __imp_.reset();
    return *this;

handle_failure:
    __imp_.reset();
    set_error_or_throw(
        m_ec, ec, "recursive_directory_iterator::operator++() failed");
    return *this;
}

bool recursive_directory_iterator::__try_recursion(error_code &ec) {

    bool rec_sym =
        bool(options() & directory_options::follow_directory_symlink);
    auto& curr_it = __imp_->__stack_.top();

    if (is_directory(curr_it->status()) &&
        (!is_symlink(curr_it->symlink_status()) || rec_sym))
    {
        directory_iterator new_it(curr_it->path(), &ec, __imp_->__options_);
        if (!ec && new_it != directory_iterator{}) {
            __imp_->__stack_.push(_VSTD::move(new_it));
            return true;
        }
    }
    return false;
}


_LIBCPP_END_NAMESPACE_EXPERIMENTAL_FILESYSTEM
