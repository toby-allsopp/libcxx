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

namespace { namespace parser
{
using namespace std;
using namespace std::experimental::filesystem;

using string_view_t = path::__string_view;
using string_view_pair = pair<string_view_t, string_view_t>;

struct PathParser {
  enum ParserState : unsigned char {
    // Zero is a special sentinel value used by default constructed iterators.
    PS_BeforeBegin = 1,
    PS_InRootName,
    PS_InRootDir,
    PS_InPaths,
    PS_InTrailingSep,
    PS_AfterEnd
  };
  const string_view_t Path;
  string_view_t Entry;
  ParserState State;

  using PosPtr = path::value_type const*;
private:
  PathParser(string_view_t P, ParserState State)
      : Path(P), State(State) {}

public:
  PathParser(string_view_t P, string_view_t E, unsigned char S)
      : Path(P), Entry(E), State(static_cast<ParserState>(S)) {
    assert(S != 0);
  }

  static PathParser CreateBegin(string_view_t P) {
    PathParser PP(P, PS_BeforeBegin);
    PP.increment();
    return PP;
  }

  static PathParser CreateEnd(string_view_t P) {
    PathParser PP(P, PS_AfterEnd);
    return PP;
  }

  PosPtr peek() const {
    auto End = &Path.back() + 1;
    auto TkEnd = getLastTokenEndPos();
    return TkEnd == End ? nullptr : TkEnd;
  }

  void increment() {
    const PosPtr End = &Path.back() + 1;
    const PosPtr Start = getLastTokenEndPos();
    if (Start == End)
      return makeState(PS_AfterEnd);

    switch (State) {
    case PS_BeforeBegin: {
      PosPtr TkEnd = consumeSeparator(Start, End);
      // If we consumed exactly two separators we have a root name.
      if (TkEnd && TkEnd == Start + 2) {
        // FIXME Do we need to consume a name or is '//' a root name on its own?
        // what about '//.', '//..', '//...'?
        auto NameEnd = consumeName(TkEnd, End);
        if (NameEnd)
          TkEnd = NameEnd;
        return makeState(PS_InRootName, Start, TkEnd);
      }
      else if (TkEnd)
        return makeState(PS_InRootDir, Start, TkEnd);
      else
        return makeState(PS_InPaths, Start, consumeName(Start, End));
    }

    case PS_InRootName:
      return makeState(PS_InRootDir, Start, consumeSeparator(Start, End));
    case PS_InRootDir:
      return makeState(PS_InPaths, Start, consumeName(Start, End));

    case PS_InPaths: {
      PosPtr SepEnd = consumeSeparator(Start, End);
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
    const PosPtr REnd = &Path.front() - 1;
    const PosPtr RStart = getLastTokenStartPos() - 1;
    assert(RStart != REnd);

    switch (State) {
    case PS_AfterEnd: {
      // Try to consume a trailing separator or root directory first.
      // Otherwi
      if (PosPtr SepEnd = consumeSeparator(RStart, REnd)) {
        if (SepEnd == REnd)
          return makeState((RStart == REnd + 2) ? PS_InRootName : PS_InRootDir,
                           Path.data(), RStart + 1);
        // Check if we're seeing the root directory separator
        auto PP = CreateBegin(Path);
        bool InRootDir = PP.State == PS_InRootName && &PP.Entry.back() == SepEnd;
        return makeState(InRootDir ? PS_InRootDir : PS_InTrailingSep,
                         SepEnd + 1, RStart + 1);
      } else {
        PosPtr TkStart = consumeName(RStart, REnd);
        assert(TkStart);
        if (TkStart == REnd + 2 && consumeSeparator(TkStart, REnd) == REnd)
          return makeState(PS_InRootName, Path.data(), RStart + 1);
        else
          return makeState(PS_InPaths, TkStart + 1, RStart + 1);
      }
    }
    case PS_InTrailingSep:
      return makeState(PS_InPaths, consumeName(RStart, REnd) + 1, RStart + 1);
    case PS_InPaths: {
      PosPtr SepEnd = consumeSeparator(RStart, REnd);
      assert(SepEnd);
      if (SepEnd == REnd)
        return makeState((RStart == REnd + 2) ? PS_InRootName : PS_InRootDir,
                         Path.data(), RStart + 1);
      PosPtr TkEnd = consumeName(SepEnd, REnd);
      assert(TkEnd);
      if (TkEnd == REnd + 2 && consumeSeparator(TkEnd, REnd) == REnd)
        return makeState(PS_InRootDir, SepEnd + 1, RStart + 1);
      return makeState(PS_InPaths, TkEnd + 1, SepEnd + 1);
    }
    case PS_InRootDir:
      return makeState(PS_InRootName, Path.data(), RStart + 1);
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

  bool good() const {
    return State != PS_BeforeBegin && State != PS_AfterEnd;
  }
private:
  void makeState(ParserState NewState, PosPtr Start, PosPtr End) {
    assert(NewState != PS_BeforeBegin && NewState != PS_AfterEnd);
    State = NewState;
    assert(Start < End);
    assert(Start >= &Path.front() && End <= &Path.back() + 1);
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
      return &Path.front();
    case PS_InRootName:
    case PS_InRootDir:
    case PS_InPaths:
      return &Entry.back() + 1;
    case PS_InTrailingSep:
    case PS_AfterEnd:
      return &Path.back() + 1;
    }
    _LIBCPP_UNREACHABLE();
  }

  PosPtr getLastTokenStartPos() const {
    switch (State) {
    case PS_BeforeBegin:
    case PS_InRootName:
      return &Path.front();
    case PS_InRootDir:
    case PS_InPaths:
    case PS_InTrailingSep:
      return &Entry.front();
    case PS_AfterEnd:
      return &Path.back() + 1;
    }
    _LIBCPP_UNREACHABLE();
  }

  PosPtr consumeSeparator(PosPtr P, PosPtr End) const {
    if (P == End || *P != '/')
      return nullptr;
    const int Inc = P < End ? 1 : -1;
    P += Inc;
    while (P != End && *P == '/')
      P += Inc;
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

string_view_pair separate_filename(string_view_t const & s) {
    if (s == "." || s == ".." || s.empty()) return string_view_pair{s, ""};
    auto pos = s.find_last_of('.');
    if (pos == string_view_t::npos) return string_view_pair{s, string_view{}};
    return string_view_pair{s.substr(0, pos), s.substr(pos)};
}

}} // namespace parser

_LIBCPP_BEGIN_NAMESPACE_EXPERIMENTAL_FILESYSTEM

using parser::string_view_t;
using parser::string_view_pair;
using parser::PathParser;

///////////////////////////////////////////////////////////////////////////////
//                            path definitions
///////////////////////////////////////////////////////////////////////////////

constexpr path::value_type path::preferred_separator;

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

string_view_t path::__root_name() const
{
    auto PP = PathParser::CreateBegin(__pn_);
    if (PP.State == PathParser::PS_InRootName)
      return PP.extract_preferred();
    return {};
}

string_view_t path::__root_directory() const
{
    auto PP = PathParser::CreateBegin(__pn_);
    if (PP.State == PathParser::PS_InRootName)
      PP.increment();
    if (PP.State == PathParser::PS_InRootDir)
      return PP.extract_preferred();
    return {};
}

string_view_t path::__root_path_raw() const
{
    auto PP = PathParser::CreateBegin(__pn_);
    if (PP.State == PathParser::PS_InRootName) {
      auto NextCh = PP.peek();
      if (NextCh && *NextCh == '/') {
        PP.increment();
        assert(PP.State == PathParser::PS_InRootDir);
        return {__pn_.data(), (size_t)(&PP.Entry.back() - __pn_.data()) + 1};
      }
      return PP.Entry;
    }
    if (PP.State == PathParser::PS_InRootDir)
      return PP.extract_preferred();
    return {};
}

string_view_t path::__relative_path() const
{
    auto PP = PathParser::CreateBegin(__pn_);
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
    if (empty())
      return {};
    auto PP = PathParser::CreateEnd(__pn_);
    PP.decrement();
    if (PP.Entry.data() == __pn_.data())
      return {};
    PP.decrement();
    size_t DataSize = size_t(&PP.Entry.back() - __pn_.data()) + 1;
    return {__pn_.data(), DataSize};
}

string_view_t path::__filename() const
{
    if (empty()) return {};
    auto PP = PathParser::CreateEnd(__pn_);
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
    auto PP = PathParser::CreateBegin(__pn_);
    auto PP2 = PathParser::CreateBegin(__s);

    while (PP.good() && PP2.good()) {
        int res = PP.extract_preferred().compare(PP2.extract_preferred());
        if (res != 0) return res;
        PP.increment(); PP2.increment();
    }
    if (PP.State == PP2.State && PP.State == PathParser::PS_AfterEnd)
        return 0;
    if (PP.State == PathParser::PS_AfterEnd)
        return -1;
    return 1;
}

////////////////////////////////////////////////////////////////////////////
// path.nonmembers
size_t hash_value(const path& __p) _NOEXCEPT {
  auto PP = PathParser::CreateBegin(__p.native());
  struct HashPairT {
    size_t first;
    size_t second;
  };
  HashPairT hp = {0, 0};
  std::hash<string_view> hasher;
  std::__scalar_hash<decltype(hp)> pair_hasher;
  while (PP.good()) {
    hp.second = hasher(PP.extract_preferred());
    hp.first = pair_hasher(hp);
    PP.increment();
  }
  return hp.first;
}

////////////////////////////////////////////////////////////////////////////
// path.itr
path::iterator path::begin() const
{
    auto PP = PathParser::CreateBegin(__pn_);
    iterator it;
    it.__path_ptr_ = this;
    it.__state_ = PP.State;
    it.__entry_ = PP.Entry;
    it.__elem_.__assign_view(PP.extract_preferred());
    return it;
}

path::iterator path::end() const
{
    iterator it{};
    it.__state_ = PathParser::PS_AfterEnd;
    it.__path_ptr_ = this;
    return it;
}

path::iterator& path::iterator::__increment() {
  PathParser PP(__path_ptr_->native(), __entry_, __state_);
  PP.increment();
  __state_ = PP.State;
  __entry_ = PP.Entry;
  __elem_.__assign_view(PP.extract_preferred());
  return *this;
}

path::iterator& path::iterator::__decrement() {
  PathParser PP(__path_ptr_->native(), __entry_, __state_);
  PP.decrement();
  __state_ = PP.State;
  __entry_ = PP.Entry;
  __elem_.__assign_view(PP.extract_preferred());
  return *this;
}

_LIBCPP_END_NAMESPACE_EXPERIMENTAL_FILESYSTEM
