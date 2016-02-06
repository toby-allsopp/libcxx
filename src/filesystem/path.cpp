//===--------------------- filesystem/path.cpp ----------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
#ifdef NDEBUG
#error SHIT!
#endif
#include "experimental/filesystem"
#include "experimental/string_view"
#include "algorithm"
#include "utility"
#include "cassert"

_LIBCPP_BEGIN_NAMESPACE_EXPERIMENTAL_FILESYSTEM

_LIBCPP_CONSTEXPR path::value_type path::preferred_separator;
_LIBCPP_CONSTEXPR path::value_type path::__other_separator;


namespace { namespace parser
{

using string_type = string_view;
using value_type = path::value_type;

using string_view_pair = pair<string_view, string_view>;

// status reporting
constexpr size_t npos = static_cast<size_t>(-1);

inline bool good(size_t pos)
{ return pos != npos; }

// lexical elements
constexpr value_type preferred_separator = path::preferred_separator;
constexpr value_type const * preferred_separator_str = "/";
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

string_view_pair separate_filename(string_type const &);
string_view extract_raw(string_type const &, size_t);
string_view extract_preferred(string_type const &, size_t);

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
size_t root_name_end(const string_type& s)
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
size_t root_directory_end(const string_type& s)
{
    auto st = root_directory_start(s);
    if (!good(st)) return npos;
    size_t index = st;
    while (index + 1 < s.size() && s[index + 1] == preferred_separator)
    ++index;
    return index;
}

////////////////////////////////////////////////////////////////////////
string_view_pair separate_filename(string_type const & s)
{
    if (s == "." || s == ".." || s.empty()) return string_view_pair{s, ""};
    auto pos = s.find_last_of('.');
    if (pos == string_type::npos) return string_view_pair{s, string_view{}};
    return string_view_pair{s.substr(0, pos), s.substr(pos)};
}

///////////////////////////////////////////////////////////////////////
string_view extract_raw(const string_type& s, size_t pos)
{
    size_t end_i = end_of(s, pos);
    if (!good(end_i)) return string_view{};
    string_view sv(s);
    return sv.substr(pos, end_i - pos + 1);
}

////////////////////////////////////////////////////////////////////////
string_view extract_preferred(const string_type& s, size_t pos)
{
    string_view raw = extract_raw(s, pos);
    if (raw.empty()) return raw;
    if (is_trailing_separator(s, pos)) return string_view{dot};
    if (is_separator(s, pos) && !is_root_name(s, pos))
        return string_view(preferred_separator_str);
    return raw;
}

}} // namespace parser


////////////////////////////////////////////////////////////////////////////////
//                            __path_iterator
////////////////////////////////////////////////////////////////////////////////


bool valid_iterator_position(string_view const& __s, size_t __pos)  {
    if (__pos == parser::npos) return true; // end position is valid
    return (!parser::is_separator      (__s, __pos) ||
          parser::is_root_directory    (__s, __pos) ||
          parser::is_trailing_separator(__s, __pos) ||
          parser::is_root_name         (__s, __pos));
}

struct __path_iterator {
  const string_view __s_;
  size_t __pos_;

  explicit __path_iterator(string_view const& __s) : __s_(__s), __pos_(0) {}
  
  __path_iterator& operator++() {
    increment();
    return *this;
  }
  
  __path_iterator& operator--() {
      decrement();
      return *this;
  }
  
  string_view operator*() const {
    return parser::extract_preferred(__s_, __pos_);
  }

  void increment() {
    if (__pos_ == parser::npos) return;
    while (! set_position(parser::end_of(__s_, __pos_)+1))
        ;
    return;
  }

  void decrement() {
    if (__pos_ == 0) {
      set_position(0);
    }
    else if (__pos_ == parser::npos) {
      auto const str_size = __s_.size();
      set_position(parser::start_of(
          __s_, str_size != 0 ? str_size - 1 : str_size));
    } else {
      while (!set_position(parser::start_of(__s_, __pos_-1)))
        ;
    }
  }

  bool set_position(size_t pos) {
    if (pos >= __s_.size()) {
      __pos_ = parser::npos;
    } else {
      __pos_ = pos;
    }
    return valid_iterator_position(__s_, __pos_);
  }

  string_view get_elem() const {
      return parser::extract_preferred(__s_, __pos_);
  }
  bool is_end() const { return __pos_ == parser::npos; }
  inline bool operator==(__path_iterator const& __p) {
      return __pos_ == __p.__pos_;
  }
};

__path_iterator pbegin(path const& p) {
    return __path_iterator(p.native());
}

__path_iterator pend(path const& p) {
    __path_iterator __p(p.native());
    __p.__pos_ = parser::npos;
    return __p;
}

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
string_view path::__root_name() const
{
    return parser::is_root_name(__pn_, 0) 
      ? parser::extract_preferred(__pn_, 0)
      : string_view{};
}

////////////////////////////////////////////////////////////////////////////
string_view path::__root_directory() const
{
    auto start_i = parser::root_directory_start(__pn_);
    if(!parser::good(start_i)) {
        return {};
    }
    return parser::extract_preferred(__pn_, start_i);
}

////////////////////////////////////////////////////////////////////////////
string_view path::__relative_path() const
{
    if (empty()) {
        return {__pn_};
    }
    auto end_i = parser::root_directory_end(__pn_);
    if (not parser::good(end_i)) {
        end_i = parser::root_name_end(__pn_);
    }
    if (not parser::good(end_i)) {
        return {__pn_};
    }
    return string_view(__pn_).substr(end_i+1);
}

////////////////////////////////////////////////////////////////////////////
string_view path::__parent_path() const
{
    if (empty() || pbegin(*this) == --pend(*this)) {
        return {};
    }
    auto end_it = --(--pend(*this));
    auto end_i = parser::end_of(__pn_, end_it.__pos_);
    return string_view(__pn_).substr(0, end_i+1);
}

////////////////////////////////////////////////////////////////////////////
string_view path::__filename() const
{
    return empty() ? string_view{} : *--pend(*this);
}

////////////////////////////////////////////////////////////////////////////
string_view path::__stem() const
{
    return parser::separate_filename(__filename()).first;
}

////////////////////////////////////////////////////////////////////////////
string_view path::__extension() const
{
    return parser::separate_filename(__filename()).second;
}

int path::__compare(const value_type* __s) const {
    __path_iterator thisIter(string_view(this->native()));
    __path_iterator sIter(__s);
    while (!thisIter.is_end() && !sIter.is_end()) {
        int res = thisIter.get_elem().compare(sIter.get_elem());
        if (res != 0) return res;
        ++thisIter; ++sIter;
    }
    if (thisIter.is_end() && sIter.is_end())
        return 0;
    if (thisIter.is_end())
        return -1;
    return 1;
}

///////////////////////////////////////////////////////////////////////////////
size_t hash_value(const path& __p) _NOEXCEPT {
  __path_iterator thisIter(string_view(__p.native()));
  struct HashPairT {
    size_t first;
    size_t second;
  };
  HashPairT hp = {0, 0};
  std::hash<string_view> hasher;
  std::__scalar_hash<decltype(hp)> pair_hasher;
  while (!thisIter.is_end()) {
    hp.second = hasher(*thisIter);
    hp.first = pair_hasher(hp);
    ++thisIter;
  }
  return hp.first;
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
        __elem_ = path(parser::extract_preferred(__path_ptr_->native(), __pos_).to_string());
      }
      return valid_iterator_position(__path_ptr_->native(), __pos_);
}


_LIBCPP_END_NAMESPACE_EXPERIMENTAL_FILESYSTEM