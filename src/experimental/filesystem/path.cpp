//===--------------------- filesystem/path.cpp ----------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
#include "experimental/filesystem"
#include "string_view"
#include "utility"
#include "cassert"
#include "iostream"

#define PRINT(x) std::cout << #x << " = " << x << std::endl

_LIBCPP_BEGIN_NAMESPACE_EXPERIMENTAL_FILESYSTEM

_LIBCPP_CONSTEXPR path::value_type path::preferred_separator;


using string_view_t = path::__string_view;
using string_type_t = path::string_type;

namespace { namespace parser
{

using value_type = path::value_type;
using string_view_pair = pair<string_view_t, string_view_t>;

struct PathParser {
  enum ParserState {
    PS_BeforeBegin,
    PS_InRootName,
    PS_InRootDir,
    PS_InPaths,
    PS_InTrailingSep,
    PS_AfterEnd
  };
  using StrPtr = const path::string_type*;
  const StrPtr Path;
  string_view_t Entry;
  ParserState State;

  using PosPtr = path::value_type const*;
private:
  PathParser(StrPtr P, ParserState State)
      : Path(P), State(State) {}

public:
  static PathParser CreateBegin(StrPtr P) {
    PathParser PP(P, PS_BeforeBegin);
    PP.increment();
    return PP;
  }

  static PathParser CreateEnd(StrPtr P) {
    PathParser PP(P, PS_AfterEnd);
    return PP;
  }

  PosPtr peek() const {
    auto End = &Path->back() + 1;
    auto TkEnd = getLastTokenEndPos();
    return TkEnd == End ? nullptr : TkEnd;
  }

  bool canIncrement() const {
    return !Path->empty() && State != PS_AfterEnd;
  }
  bool canDecrement() const {
    return !Path->empty() && State != PS_BeforeBegin && Entry.data() != Path->data();
  }

  void increment() {
    const PosPtr End = &Path->back() + 1;
    const PosPtr Start = getLastTokenEndPos();
    if (Start == End)
      return makeState(PS_AfterEnd);

    switch (State) {
    case PS_BeforeBegin: {
      PosPtr TkEnd = consumeSeperator(Start, End);
      if (TkEnd && TkEnd == Start + 2) {
        auto NameEnd = consumeName(TkEnd, End);
        if (NameEnd)
          TkEnd = NameEnd;
        return makeState(PS_InRootName, Start, TkEnd);
      }
      else if (TkEnd)
        return makeState(PS_InRootDir, Start, TkEnd);
      else {
        TkEnd = consumeName(Start, End);
        assert(TkEnd);
        return makeState(PS_InPaths, Start, TkEnd);
      }
      _LIBCPP_UNREACHABLE();
    }

    case PS_InRootName: {
      PosPtr TkPtr = consumeSeperator(Start, End);
      assert(TkPtr);
      return makeState(PS_InRootDir, Start, TkPtr);
    }

    case PS_InRootDir: {
      PosPtr TkPtr = consumeName(Start, End);
      assert(TkPtr);
      return makeState(PS_InPaths, Start, End);
    }

    case PS_InPaths: {
      PosPtr SepEnd = consumeSeperator(Start, End);
      assert(SepEnd);
      if (SepEnd != End) {
        PosPtr TkEnd = consumeName(SepEnd, End);
        if (TkEnd)
          return makeState(PS_InPaths, SepEnd, TkEnd);
      }
      return makeState(PS_InTrailingSep, Start, SepEnd);
    }

    case PS_InTrailingSep:
      return makeState(PS_AfterEnd);

    case PS_AfterEnd:
      _LIBCPP_UNREACHABLE();
    }
  }

  void decrement() {
    const PosPtr REnd = &Path->front() - 1;
    const PosPtr RStart = getLastTokenStartPos() - 1;
    assert(RStart != REnd);

    switch (State) {
    case PS_AfterEnd: {
      PosPtr TkStart = nullptr;
      PosPtr SepEnd = consumeSeperator(RStart, REnd);
      if (SepEnd) {
        if (SepEnd == REnd)
          return makeState((RStart == REnd + 2) ? PS_InRootName : PS_InRootDir,
                           Path->data(), RStart + 1);
        return makeState(PS_InTrailingSep, SepEnd + 1, RStart + 1);
      } else {
        TkStart = consumeName(RStart, REnd);
        assert(TkStart);
        if (RStart - TkStart == 1 && *TkStart == '.')
          return makeState(PS_InTrailingSep, TkStart + 1, RStart + 1);
        else if (TkStart == REnd + 2 && consumeSeperator(TkStart, REnd) == REnd)
          return makeState(PS_InRootName, Path->data(), RStart + 1);
        else
          return makeState(PS_InPaths, TkStart + 1, RStart + 1);
      }
      _LIBCPP_UNREACHABLE();
    }
    case PS_InTrailingSep: {
      PosPtr TkEnd = consumeName(RStart, REnd);
      assert(TkEnd);
      return makeState(PS_InPaths, TkEnd + 1, RStart + 1);
    }
    case PS_InPaths: {
      PosPtr SepEnd = consumeSeperator(RStart, REnd);
      assert(SepEnd);
      if (SepEnd == REnd)
        return makeState((RStart == REnd + 2) ? PS_InRootName : PS_InRootDir,
                         Path->data(), RStart + 1);
      PosPtr TkEnd = consumeName(SepEnd, REnd);
      assert(TkEnd);
      return makeState(PS_InPaths, TkEnd + 1, SepEnd + 1);
    }
    case PS_InRootDir:
      return makeState(PS_InRootName, Path->data(), RStart + 1);
    case PS_InRootName:
    case PS_BeforeBegin:
      _LIBCPP_UNREACHABLE();
    }
  }

  string_view_t extract_preferred() const {
    switch (State) {
    case PS_BeforeBegin:
    case PS_AfterEnd:
      return "";
    case PS_InRootDir:
      return "/";
    case PS_InTrailingSep:
      return ".";
    case PS_InRootName:
    case PS_InPaths:
      return Entry;
    }
    _LIBCPP_UNREACHABLE();
  }

private:
  void makeState(ParserState NewState, PosPtr Start, PosPtr End) {
    assert(NewState != PS_BeforeBegin && NewState != PS_AfterEnd);
    State = NewState;
    assert(Start < End);
    assert(Start >= &Path->front() && End <= &Path->back() + 1);
    Entry = string_view_t(Start, End - Start);
  }
  void makeState(ParserState NewState) {
    assert(NewState == PS_BeforeBegin || NewState == PS_AfterEnd);
    State = NewState;
    Entry = {};
  }

  PosPtr getLastTokenEndPos() const {
    switch (State) {
    case PS_BeforeBegin:
      return &Path->front();
    case PS_InRootName:
    case PS_InRootDir:
    case PS_InPaths:
      return &Entry.back() + 1;
    case PS_InTrailingSep:
    case PS_AfterEnd:
      return &Path->back() + 1;
    }
  }

  PosPtr getLastTokenStartPos() const {
    switch (State) {
    case PS_BeforeBegin:
    case PS_InRootName:
      return &Path->front();
    case PS_InRootDir:
    case PS_InPaths:
    case PS_InTrailingSep:
      return &Entry.front();
    case PS_AfterEnd:
      return &Path->back() + 1;
    }
  }

  PosPtr consumeSeperator(PosPtr P, PosPtr End) const {
    if (P == End || *P != '/')
      return nullptr;
    const int Inc = P < End ? 1 : -1;
    P += Inc;
    while (P != End && *P == '/')
      P += Inc;
    return P;
  }

  PosPtr consumeDotOrDotDot(PosPtr P, PosPtr End) const {
    const int Inc = P < End ? 1 : -1;
    int Consumed = 0;
    while (P != End && Consumed < 2 && *P == '.') {
      P += Inc;
      Consumed += 1;
    }
    if (Consumed == 0 || (P != End && *P != '/'))
      return nullptr;
    return P;
  }

  PosPtr consumeName(PosPtr P, PosPtr End) const {
    if (P == End || *P == '/')
      return nullptr;
    const int Inc = P < End ? 1 : -1;
    P += Inc;
    while (P != End && *P != '/')
      P += Inc;
    return P;
  }
};

// status reporting
constexpr size_t npos = static_cast<size_t>(-1);

inline bool good(size_t pos) { return pos != npos; }

// lexical elements
constexpr value_type preferred_separator = path::preferred_separator;
constexpr value_type const * preferred_separator_str = "/";
constexpr value_type const * dot = ".";

// forward //
bool is_separator(string_view_t const &, size_t);
bool is_root_name(const string_view_t&, size_t);
bool is_root_directory(string_view_t const &, size_t);
bool is_trailing_separator(string_view_t const &, size_t);

size_t start_of(string_view_t const &, size_t);
size_t end_of(string_view_t const &, size_t);

size_t root_name_start(const string_view_t& s);
size_t root_name_end(const string_view_t&);

size_t root_directory_start(string_view_t const &);
size_t root_directory_end(string_view_t const &);

string_view_pair separate_filename(string_view_t const &);
string_view extract_raw(string_view_t const &, size_t);
string_view extract_preferred(string_view_t const &, size_t);

inline bool is_separator(const string_view_t& s, size_t pos) {
    return (pos < s.size() && s[pos] == preferred_separator);
}

inline bool is_root_name(const string_view_t& s, size_t pos) {
  return good(pos) && pos == 0 ? root_name_start(s) == pos : false;
}

inline bool is_root_directory(const string_view_t& s, size_t pos) {
    return good(pos) ? root_directory_start(s) == pos : false;
}

inline bool is_trailing_separator(const string_view_t& s, size_t pos) {
    return (pos < s.size() && is_separator(s, pos) &&
            end_of(s, pos) == s.size()-1 &&
            !is_root_directory(s, pos) && !is_root_name(s, pos));
}

size_t start_of(const string_view_t& s, size_t pos) {
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

size_t end_of(const string_view_t& s, size_t pos) {
    if (pos >= s.size()) return npos;
    // special case for root name
    if (pos == 0 && is_root_name(s, pos)) return root_name_end(s);
    bool in_sep = (s[pos] == preferred_separator);
    while (pos + 1 < s.size() && (s[pos+1] == preferred_separator) == in_sep)
    { ++pos; }
    return pos;
}

inline size_t root_name_start(const string_view_t& s) {
    return good(root_name_end(s)) ? 0 : npos;
}

size_t root_name_end(const string_view_t& s) {
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

size_t root_directory_start(const string_view_t& s) {
    size_t e = root_name_end(s);
    if (!good(e))
    return is_separator(s, 0) ? 0 : npos;
    return is_separator(s, e + 1) ? e + 1 : npos;
}

size_t root_directory_end(const string_view_t& s) {
    size_t st = root_directory_start(s);
    if (!good(st)) return npos;
    size_t index = st;
    while (index + 1 < s.size() && s[index + 1] == preferred_separator)
      { ++index; }
    return index;
}

string_view_pair separate_filename(string_view_t const & s) {
    if (s == "." || s == ".." || s.empty()) return string_view_pair{s, ""};
    auto pos = s.find_last_of('.');
    if (pos == string_view_t::npos) return string_view_pair{s, string_view{}};
    return string_view_pair{s.substr(0, pos), s.substr(pos)};
}

inline string_view extract_raw(const string_view_t& s, size_t pos) {
    size_t end_i = end_of(s, pos);
    if (!good(end_i)) return string_view{};
    return string_view(s).substr(pos, end_i - pos + 1);
}

string_view extract_preferred(const string_view_t& s, size_t pos) {
    string_view raw = extract_raw(s, pos);
    if (raw.empty())
        return raw;
    if (is_trailing_separator(s, pos))
        return string_view{dot};
    if (is_separator(s, pos) && !is_root_name(s, pos))
        return string_view(preferred_separator_str);
    return raw;
}

}} // namespace parser


////////////////////////////////////////////////////////////////////////////////
//                            path_view_iterator
////////////////////////////////////////////////////////////////////////////////
namespace {

struct path_view_iterator {
  const string_view __s_;
  size_t __pos_;

  explicit path_view_iterator(string_view const& __s) : __s_(__s), __pos_(__s_.empty() ? parser::npos : 0) {}
  explicit path_view_iterator(string_view const& __s, size_t __p) : __s_(__s), __pos_(__p) {}

  string_view operator*() const {
    return parser::extract_preferred(__s_, __pos_);
  }

  path_view_iterator& operator++() {
    increment();
    return *this;
  }

  path_view_iterator& operator--() {
    decrement();
    return *this;
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
    return valid_iterator_position();
  }

  bool valid_iterator_position() const {
    if (__pos_ == parser::npos) return true; // end position is valid
    return (!parser::is_separator      (__s_, __pos_) ||
          parser::is_root_directory    (__s_, __pos_) ||
          parser::is_trailing_separator(__s_, __pos_) ||
          parser::is_root_name         (__s_, __pos_));
  }

  bool is_end() const { return __pos_ == parser::npos; }

  inline bool operator==(path_view_iterator const& __p) {
      return __pos_ == __p.__pos_;
  }
};

path_view_iterator pbegin(path const& p) {
    return path_view_iterator(p.native());
}

path_view_iterator pend(path const& p) {
    path_view_iterator __p(p.native());
    __p.__pos_ = parser::npos;
    return __p;
}

} // end namespace
///////////////////////////////////////////////////////////////////////////////
//                            path definitions
///////////////////////////////////////////////////////////////////////////////

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

///////////////////////////////////////////////////////////////////////////////
// path.decompose

using parser::PathParser;

string_view_t path::__root_name() const
{
    auto PP = PathParser::CreateBegin(&__pn_);
    if (PP.State == PathParser::PS_InRootName)
      return PP.extract_preferred();
    return {};
}

string_view_t path::__root_directory() const
{
    auto PP = PathParser::CreateBegin(&__pn_);
    if (PP.State == PathParser::PS_InRootName)
      PP.increment();
    if (PP.State == PathParser::PS_InRootDir)
      return PP.extract_preferred();
    return {};
}

string_view_t path::__root_path_raw() const
{
    auto PP = PathParser::CreateBegin(&__pn_);
    if (PP.State == PathParser::PS_InRootName) {
      auto NextCh = PP.peek();
      if (NextCh && *NextCh == '/')
        return {__pn_.data(), (size_t)(NextCh - __pn_.data())};
      return PP.Entry;
    }
    if (PP.State == PathParser::PS_InRootDir)
      return PP.extract_preferred();
    return {};
}

string_view_t path::__relative_path() const
{
    auto PP = PathParser::CreateBegin(&__pn_);
    while (PP.State <= PathParser::PS_InRootDir)
      PP.increment();
    if (PP.State == PathParser::PS_AfterEnd)
      return {};
    auto Data = PP.Entry.data();
    assert(Data);
    const size_t DataSize = __pn_.size() - static_cast<size_t>(Data - __pn_.data());
    return {Data, DataSize};
}

string_view_t path::__parent_path() const
{
    PRINT(__pn_);
    if (empty())
      return {};
    auto PP = PathParser::CreateEnd(&__pn_);
    PP.decrement();
    PRINT(PP.Entry);
    if (PP.Entry.data() == __pn_.data())
      return {};
    PP.decrement();
    assert(PP.State != PathParser::PS_BeforeBegin);
    PRINT(PP.Entry);
    size_t DataSize = size_t(&PP.Entry.back() - __pn_.data()) + 1;
    string_view_t SV{__pn_.data(), DataSize};
    PRINT(SV);
    return SV;
}

string_view_t path::__filename() const
{
    if (empty()) return {};
    auto PP = PathParser::CreateEnd(&__pn_);
    PP.decrement();
    return PP.extract_preferred();
}

string_view_t path::__stem() const
{
    return parser::separate_filename(__filename()).first;
}

string_view_t path::__extension() const
{
    return parser::separate_filename(__filename()).second;
}

////////////////////////////////////////////////////////////////////////////
// path.comparisons
int path::__compare(string_view_t __s) const {
    path_view_iterator thisIter(this->native());
    path_view_iterator sIter(__s);
    while (!thisIter.is_end() && !sIter.is_end()) {
        int res = (*thisIter).compare(*sIter);
        if (res != 0) return res;
        ++thisIter; ++sIter;
    }
    if (thisIter.is_end() && sIter.is_end())
        return 0;
    if (thisIter.is_end())
        return -1;
    return 1;
}

////////////////////////////////////////////////////////////////////////////
// path.nonmembers
size_t hash_value(const path& __p) _NOEXCEPT {
  path_view_iterator thisIter(__p.native());
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
// path.itr
path::iterator path::begin() const
{
    path_view_iterator pit = pbegin(*this);
    iterator it;
    it.__path_ptr_ = this;
    it.__pos_ = pit.__pos_;
    it.__elem_.__assign_view(*pit);
    return it;
}

path::iterator path::end() const
{
    iterator it{};
    it.__path_ptr_ = this;
    it.__pos_ = parser::npos;
    return it;
}

path::iterator& path::iterator::__increment() {
  path_view_iterator it(__path_ptr_->native(), __pos_);
  it.increment();
  __pos_ = it.__pos_;
  __elem_.__assign_view(*it);
  return *this;
}

path::iterator& path::iterator::__decrement() {
  path_view_iterator it(__path_ptr_->native(), __pos_);
  it.decrement();
  __pos_ = it.__pos_;
  __elem_.__assign_view(*it);
  return *this;
}

_LIBCPP_END_NAMESPACE_EXPERIMENTAL_FILESYSTEM
