//===--------------------- filesystem/path.cpp ----------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#include "experimental/filesystem"
#include "algorithm"
#include "utility"


_LIBCPP_BEGIN_NAMESPACE_EXPERIMENTAL_FILESYSTEM

_LIBCPP_CONSTEXPR path::value_type path::preferred_separator;
_LIBCPP_CONSTEXPR path::value_type path::__other_separator;

path& path::make_preferred() {
    _VSTD::replace(
        __pn_.begin(), __pn_.end(),
        __other_separator, preferred_separator
    );
    return *this;
}

namespace { namespace parser
{

using string_type = path::string_type;
using value_type = path::value_type;

using string_pair = pair<string_type, string_type>;

// status reporting
constexpr size_t npos = static_cast<size_t>(-1);

inline bool good(size_t pos)
{ return pos != npos; }

// lexical elements
constexpr value_type preferred_separator = path::preferred_separator;
constexpr value_type const * dot = ".";
// TODO(UNUSED)
//constexpr value_type const* double_dot = "..";


// forward //
bool is_separator(string_type const &, size_t);
bool is_root_name(const string_type&, size_t);
bool is_root_directory(string_type const &, size_t);
bool is_trailing_separator(string_type const &, size_t);

size_t start_of(string_type const &, size_t);
size_t end_of(string_type const &, size_t);

size_t root_name_start(const string_type& s);
size_t root_name_end(const string_type&);

size_t root_directory_start(string_type const &);
size_t root_directory_end(string_type const &);

string_pair separate_filename(string_type const &);
string_type extract_raw(string_type const &, size_t);
string_type extract_preferred(string_type const &, size_t);

////////////////////////////////////////////////////////////////////////
bool is_separator(const string_type& s, size_t pos)
{
    return (pos < s.size() && s[pos] == preferred_separator);
}

////////////////////////////////////////////////////////////////////////
bool is_root_name(const string_type& s, size_t pos)
{
        return good(pos) && pos == 0 ? root_name_start(s) == pos : false;
}

////////////////////////////////////////////////////////////////////////
bool is_root_directory(const string_type& s, size_t pos)
{
    return good(pos) ? root_directory_start(s) == pos : false;
}

////////////////////////////////////////////////////////////////////////
bool is_trailing_separator(const string_type& s, size_t pos)
{
    return (pos < s.size() && is_separator(s, pos) && 
            end_of(s, pos) == s.size()-1 &&
            !is_root_directory(s, pos) && !is_root_name(s, pos));
}

////////////////////////////////////////////////////////////////////////
size_t start_of(const string_type& s, size_t pos)
{
    if (pos >= s.size()) return npos;
    bool in_sep = (s[pos] == preferred_separator);
    while (pos - 1 < s.size() && 
        (s[pos-1] == preferred_separator) == in_sep)
    { --pos; }
    if (pos == 2 && !in_sep && s[0] == preferred_separator &&
        s[1] == preferred_separator)
    { return 0; }
    return pos;
}

////////////////////////////////////////////////////////////////////////
size_t end_of(const string_type& s, size_t pos)
{
    if (pos >= s.size()) return npos;
    // special case for root name
    if (pos == 0 && is_root_name(s, pos)) return root_name_end(s);
    bool in_sep = (s[pos] == preferred_separator);
    while (pos + 1 < s.size() && (s[pos+1] == preferred_separator) == in_sep)
    { ++pos; }
    return pos;
}

////////////////////////////////////////////////////////////////////////
size_t root_name_start(const string_type& s)
{
    return good(root_name_end(s)) ? 0 : npos;
}

////////////////////////////////////////////////////////////////////////
size_t root_name_end(const string& s)
{
    if (s.size() < 2 || s[0] != preferred_separator
        || s[1] != preferred_separator) { 
        return npos; 
    }
    if (s.size() == 2) {
        return 1;
    }
    size_t index = 2; // current position
    if (s[index] == preferred_separator) {
        return npos;
    }
    while (index + 1 < s.size() && s[index+1] != preferred_separator) {
        ++index;
    }
    return index;
}

////////////////////////////////////////////////////////////////////////
size_t root_directory_start(const string_type& s)
{
    auto e = root_name_end(s);
    if (!good(e))
    return is_separator(s, 0) ? 0 : npos;
    return is_separator(s, e + 1) ? e + 1 : npos; 
}

////////////////////////////////////////////////////////////////////////
size_t root_directory_end(const string& s)
{
    auto st = root_directory_start(s);
    if (!good(st)) return npos;
    size_t index = st;
    while (index + 1 < s.size() && s[index + 1] == preferred_separator)
    ++index;
    return index;
}

////////////////////////////////////////////////////////////////////////
string_pair separate_filename(string_type const & s)
{
    if (s == "." || s == ".." || s.empty()) return string_pair{s, ""};
    auto pos = s.find_last_of('.');
    if (pos == string_type::npos) return string_pair{s, string_type{}};
    return string_pair{s.substr(0, pos), s.substr(pos)};
}

///////////////////////////////////////////////////////////////////////
string_type extract_raw(const string_type& s, size_t pos)
{
    size_t end_i = end_of(s, pos);
    if (!good(end_i)) return string_type{};
    return s.substr(pos, end_i - pos + 1);
}

////////////////////////////////////////////////////////////////////////
string_type extract_preferred(const string_type& s, size_t pos)
{
    string_type raw = extract_raw(s, pos);
    if (raw.empty()) return raw;
    if (is_trailing_separator(s, pos)) return string_type{dot};
    if (is_separator(s, pos) && !is_root_name(s, pos))
    return string_type{} += preferred_separator;
    return raw;
}

}} // namespace parser

////////////////////////////////////////////////////////////////////////////////
//                            path definitions
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
path & path::replace_extension(path const & replacement)
{
    path p = extension();
    if (not p.empty()) {
      __pn_.erase(__pn_.size() - p.native().size());
    }
    if (!replacement.empty()) {
        if (replacement.native()[0] != '.') {
            __pn_ += ".";
        }
        __pn_.append(replacement.__pn_);
    }
    return *this;
}

////////////////////////////////////////////////////////////////////////////
path path::root_name() const
{
    return parser::is_root_name(__pn_, 0) 
      ? path{parser::extract_preferred(__pn_, 0)}
      : path{};
}

////////////////////////////////////////////////////////////////////////////
path path::root_path() const
{
    return root_name() / root_directory();
}

////////////////////////////////////////////////////////////////////////////
path path::root_directory() const
{
    auto start_i = parser::root_directory_start(__pn_);
    if(!parser::good(start_i)) {
        return path{};
    }
    return path{parser::extract_preferred(__pn_, start_i)};
}

////////////////////////////////////////////////////////////////////////////
path path::relative_path() const
{
    if (empty()) {
        return *this;
    }
    auto end_i = parser::root_directory_end(__pn_);
    if (not parser::good(end_i)) {
        end_i = parser::root_name_end(__pn_);
    }
    if (not parser::good(end_i)) {
        return path{__pn_};
    }
    return path{__pn_.substr(end_i+1)};
}

////////////////////////////////////////////////////////////////////////////
path path::parent_path() const
{
    if (empty() || begin() == --end()) {
        return path{};
    }
    auto end_it = --(--end());
    auto end_i = parser::end_of(__pn_, end_it.__pos_);
    return path{__pn_.substr(0, end_i+1)};
}

////////////////////////////////////////////////////////////////////////////
path path::filename() const
{
    return empty() ? path{} : *--end();
}

////////////////////////////////////////////////////////////////////////////
path path::stem() const
{
    return path{parser::separate_filename(filename().native()).first};
}

////////////////////////////////////////////////////////////////////////////
path path::extension() const
{
    return path{parser::separate_filename(filename().native()).second};
}

////////////////////////////////////////////////////////////////////////////
path::iterator path::begin() const
{
    iterator it;
    it.__path_ptr_ = this;
    it.__set_position(0);
    return it;
}

////////////////////////////////////////////////////////////////////////////
path::iterator path::end() const
{
    iterator it{};
    it.__path_ptr_ = this;
    it.__set_position(parser::npos);
    return it;
}

path::iterator& path::iterator::__increment() {
    if (__pos_ == parser::npos) return *this;
    while (! __set_position(parser::end_of(__path_ptr_->native(), __pos_)+1))
        ;
    return *this;
}

path::iterator& path::iterator::__decrement() {
    if (__pos_ == 0) {
        __set_position(0);
    }
    else if (__pos_ == parser::npos) {
        auto const& path_str = __path_ptr_->native();
        auto const path_str_size = path_str.size();
        __set_position(parser::start_of(
            path_str
          , path_str_size != 0 ? path_str_size - 1 : path_str_size
          ));
    } else {
        while (!__set_position(parser::start_of(__path_ptr_->native(), __pos_-1)))
        {
        }
    }
    return *this;
}

bool path::iterator::__set_position(size_t pos) {
    // if past-end. set to end position
    if (pos >= __path_ptr_->native().size()) {
        __pos_ = parser::npos;
        __elem_.clear();
      }
      else {
        __pos_ = pos;
        __elem_ = path(parser::extract_preferred(__path_ptr_->native(), __pos_));
      }
      return __valid_iterator_position();
}

bool path::iterator::__valid_iterator_position() const {
    if (__pos_ == parser::npos) return true; // end position is valid
    return (!parser::is_separator      (__path_ptr_->native(), __pos_) ||
          parser::is_root_directory    (__path_ptr_->native(), __pos_) ||
          parser::is_trailing_separator(__path_ptr_->native(), __pos_) ||
          parser::is_root_name         (__path_ptr_->native(), __pos_));
}

_LIBCPP_END_NAMESPACE_EXPERIMENTAL_FILESYSTEM