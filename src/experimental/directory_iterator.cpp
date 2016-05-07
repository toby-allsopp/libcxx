#include "experimental/filesystem"

#include <dirent.h>


_LIBCPP_BEGIN_NAMESPACE_EXPERIMENTAL_FILESYSTEM

namespace { namespace detail {

inline error_code capture_errno() {
    _LIBCPP_ASSERT(errno, "Expected errno to be non-zero");
    return error_code{errno, std::generic_category()};
}

inline bool set_error_or_throw(std::error_code& my_ec, std::error_code* user_ec,
                               const char* msg, const path& p)
{
    if (user_ec) {
        *user_ec = my_ec;
        return true;
    }
    throw filesystem_error(msg, p, my_ec);
}

typedef path::string_type string_type;

inline DIR *posix_opendir(const string_type& p, error_code& ec) {
    DIR *ret;
    ec.clear();
    if ((ret = ::opendir(p.c_str())) == nullptr)
        ec = capture_errno();
    return ret;
}

inline string_type posix_readdir_r(DIR *dir_stream, error_code *ec) {
    struct dirent dir_entry;
    struct dirent *dir_entry_ptr{nullptr};
    int ret;
    if ((ret = ::readdir_r(dir_stream,  &dir_entry,  &dir_entry_ptr)) != 0)
    {
        error_code m_ec = capture_errno();
        if (ec) {
            *ec = m_ec;
            return {};
        } else {
            throw filesystem_error("fs::posix_readdir_r", m_ec);
        }
    }
    if (ec) ec->clear();
    if (dir_entry_ptr == nullptr) return string_type{};
    return string_type{dir_entry.d_name};
}

inline void posix_closedir(DIR *dir_stream,  error_code *ec) {
    if (::closedir(dir_stream) == -1) {
        error_code m_ec = capture_errno();
        if (ec) {
            *ec = m_ec;
            return;
        } else {
            throw filesystem_error("fs::posix_closedir", m_ec);
        }
    }
    if (ec) ec->clear();
}

}}                                                       // namespace detail

using detail::set_error_or_throw;

class __dir_stream {
public:
    __dir_stream() noexcept = default;
    __dir_stream(const path& root, error_code& ec);

    __dir_stream(__dir_stream&&) noexcept;
    __dir_stream& operator=(__dir_stream&&) noexcept;

    // NO COPYING
    __dir_stream(const __dir_stream&) = delete;
    __dir_stream& operator=(const __dir_stream&) = delete;

    ~__dir_stream() noexcept;

    bool good() const noexcept
    { return __stream_ != nullptr; }

    path advance(error_code *ec=nullptr);

    void close(error_code *ec=nullptr);

private:
    DIR *__stream_{nullptr};
};

__dir_stream::__dir_stream(const path& p, error_code & ec) {
    __stream_ = detail::posix_opendir(p.native(),  ec);
}

__dir_stream::~__dir_stream() noexcept { 
    if (__stream_) {
        // we don't want to throw,  so eat the error if one exists
        error_code ec;
        this->close(&ec); 
    }
}

path __dir_stream::advance(error_code *ec) {
    path p{};
    if (__stream_ == nullptr) return path{};
    error_code m_ec;
    auto str = detail::posix_readdir_r(__stream_,  &m_ec);
    if (m_ec || str.empty()) close();
    if (ec && m_ec) *ec = m_ec;
    return path{str};
}

void __dir_stream::close(error_code *ec) {
    if (__stream_ == nullptr) return;
    // incase posix_closedir throws, set __stream_
    // to nullptr before the call
    DIR *tmp = __stream_;
    __stream_ = nullptr;
    detail::posix_closedir(tmp, ec);
}

// directory_iterator

directory_iterator::directory_iterator(const path& p, error_code *ec, directory_options opts)
  : __options_(opts)
{
    std::error_code m_ec;
    __stream_ = std::make_shared<__dir_stream>(p, m_ec);
    if (m_ec) {
        __make_end();
        const bool allow_eacess =
            bool(__options_ & directory_options::skip_permission_denied);
        const std::error_code eaccess_cond = std::make_error_code(std::errc::permission_denied);
        if (allow_eacess && m_ec == eaccess_cond)
            return;
        if (set_error_or_throw(m_ec, ec, "directory_iterator could not be "
                                         " constructed from path", p))
            return;
    }
    __root_path_ = p;
    // we "increment" the iterator to set it to the first value
    __increment(ec);
}

directory_iterator& directory_iterator::__increment(error_code *ec)
{
    if (!__stream_) return *this;
    path part;
    while (__stream_->good()) {
        part = __stream_->advance(ec);
        if (part != "." && part != "..")
            break;
    }

    if (!__stream_->good())
        __make_end();
    else
        __elem_.assign(__root_path_ / part);
    return *this;
}

void directory_iterator::__make_end() {
    __stream_.reset();
    __root_path_.clear();
    __elem_.assign(path{""});
}

// recursive_directory_iterator

recursive_directory_iterator::recursive_directory_iterator(const path& p, 
    directory_options opt, error_code *ec)
  : recursive_directory_iterator()
{
    __options_ = opt;
    auto curr_iter = directory_iterator{p, ec};
    if ((ec && *ec) || curr_iter == directory_iterator{})
        return;
    __stack_ptr_ = std::make_shared<stack<directory_iterator> >();
    __stack_ptr_->push(curr_iter);
    __entry_ = *curr_iter;
}

recursive_directory_iterator& 
recursive_directory_iterator::__increment(error_code *ec)
{
    if (!__stack_ptr_) return *this;
    if (__try_recursion(ec) || (ec && *ec))
        return *this;

    const directory_iterator end_it;
    while (__stack_ptr_->size() > 0) {
        __stack_ptr_->top().__increment(ec);
        if ((ec && *ec) || __stack_ptr_->top() != end_it)
            break;
        __stack_ptr_->pop();
    }

    if ((ec && *ec) || __stack_ptr_->size() == 0)
        __make_end();
    else {
        _LIBCPP_ASSERT(__stack_ptr_->top() != directory_iterator{}, "Popping empty stack");
        __entry_ = *__stack_ptr_->top();
    }

    __rec_ = true;
    return *this;
}

bool recursive_directory_iterator::__try_recursion(error_code *ec) {
    if (!__stack_ptr_ ||
        __stack_ptr_->size() == 0 ||
        __stack_ptr_->top() == directory_iterator{})
        return false;

    auto& curr_it = __stack_ptr_->top();

    using under_t = typename std::underlying_type<directory_options>::type;
    bool rec_sym = static_cast<under_t>(options()) &
          static_cast<under_t>(directory_options::follow_directory_symlink);

    if (recursion_pending() && is_directory(curr_it->status()) &&
        (!is_symlink(curr_it->symlink_status()) || rec_sym))
    {
        auto tmp = directory_iterator(curr_it->path(), ec);
        if ((ec && *ec) || tmp == directory_iterator{}) {
            return false;
        } else {
            __stack_ptr_->push(tmp);
            __entry_ = *tmp;
            return true;
        }
    }

    return false;
}

void recursive_directory_iterator::__make_end() {
    __stack_ptr_.reset();
    __entry_ = directory_entry{};
}

_LIBCPP_END_NAMESPACE_EXPERIMENTAL_FILESYSTEM
