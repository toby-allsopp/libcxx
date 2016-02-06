//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// UNSUPPORTED: c++98, c++03

// <experimental/filesystem>

// class path

// 8.4.9 path decomposition [path.decompose]
//------------------------------------------
// path root_name() const;
// path root_directory() const;
// path root_path() const;
// path relative_path() const;
// path parent_path() const;
// path filename() const;
// path stem() const;
// path extension() const;
//-------------------------------
// 8.4.10 path query [path.query]
//-------------------------------
// bool empty() const noexcept;
// bool has_root_path() const;
// bool has_root_name() const;
// bool has_root_directory() const;
// bool has_relative_path() const;
// bool has_parent_path() const;
// bool has_filename() const;
// bool has_stem() const;
// bool has_extension() const;
// bool is_absolute() const;
// bool is_relative() const;
//-------------------------------
// 8.5 path iterators [path.itr]
//-------------------------------
// iterator begin() const;
// iterator end() const;

#include <experimental/filesystem>
#include <type_traits>
#include <vector>
#include <cassert>

#include "test_macros.h"
#include "test_iterators.h"
#include "count_new.hpp"
#include "filesystem_test_helper.hpp"

namespace fs = std::experimental::filesystem;

struct PathCompareTest {
  const char* LHS;
  const char* RHS;
  int expect;
};

#define LONGA "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"
#define LONGB "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"
#define LONGC "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"
#define LONGD "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD"
const PathCompareTest CompareTestCases[] =
{
    {"", "",  0},
    {"a", "", 1},
    {"", "a", -1},
    {"a/b/c", "a/b/c", 0},
    {"b/a/c", "a/b/c", 1},
    {"a/b/c", "b/a/c", -1},
    {"a/b", "a/b/c", -1},
    {"a/b/c", "a/b", 1},
    {"a/.././b", "a///..//.////b", 0},
    {"//foo//bar///baz////", "//foo/bar/baz/", 0}, // duplicate separators
    {"///foo/bar", "/foo/bar", 0}, // "///" is not a root directory
    {"/foo/bar/", "/foo/bar", 1}, // trailing separator
    {"//" LONGA "////" LONGB "/" LONGC "///" LONGD, "//" LONGA "/" LONGB "/" LONGC "/" LONGD, 0},
    { LONGA "/" LONGB "/" LONGC, LONGA "/" LONGB "/" LONGB, 1}

};
#undef LONGA
#undef LONGB
#undef LONGC
#undef LONGD

int main()
{
  using namespace fs;
  for (auto const & TC : CompareTestCases) {
    const path p1(TC.LHS);
    const path p2(TC.RHS);
    const std::string R(TC.RHS);
    const int E = TC.expect;
    {
      DisableAllocationGuard g; // none of these operations should allocate
      int ret1 = p1.compare(p2);
      int ret2 = p1.compare(R);
      int ret3 = p1.compare(TC.RHS);
      assert(ret1 == ret2 && ret1 == ret3);
      int normalized_ret = ret1 < 0 ? -1 : (ret1 > 0 ? 1 : 0);
      assert(normalized_ret == E);
    }
    {
      DisableAllocationGuard g; // none of these operations should allocate
      assert((p1 == p2) == (E == 0));
      assert((p1 != p2) == (E != 0));
      assert((p1 <  p2) == (E <  0));
      assert((p1 <= p2) == (E <= 0));
      assert((p1 >  p2) == (E >  0));
      assert((p1 >= p2) == (E >= 0));
    }
  }
}

