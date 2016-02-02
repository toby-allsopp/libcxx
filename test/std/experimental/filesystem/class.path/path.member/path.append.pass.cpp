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

// template <class Source>
//      path& operator=(Source const&);
// template <class Source>
//      path& assign(Source const&);
// template <class InputIterator>
//      path& assign(InputIterator first, InputIterator last);


#include <experimental/filesystem>
#include <type_traits>
#include <cassert>

#include "test_macros.h"
#include "test_iterators.h"
#include "count_new.hpp"
#include "filesystem_test_helper.hpp"
#include <iostream>

namespace fs = std::experimental::filesystem;

struct AppendOperatorTestcase {
  MultiStringType lhs;
  MultiStringType rhs;
  MultiStringType expect;
};

#define S(Str) MKSTR(Str)
const AppendOperatorTestcase Cases[] =
    {
        {S(""),     S(""),      S("")}
      , {S("p1"),   S("p2"),    S("p1/p2")}
      , {S("p1/"),  S("p2"),    S("p1/p2")}
      , {S("p1"),   S("/p2"),   S("p1/p2")}
      , {S("p1/"),  S("/p2"),   S("p1//p2")}
      , {S("p1"),   S("\\p2"),  S("p1\\p2")}
      , {S("p1"),   S(""),      S("p1")}
      , {S(""),     S("p2"),    S("p2")}
    };

const AppendOperatorTestcase LongLHSCases[] =
    {
      , {S("p1"),   S("p2"),    S("p1/p2")}
      , {S("p1/"),  S("p2"),    S("p1/p2")}
      , {S("p1"),   S("/p2"),   S("p1/p2")}
      , {S("p1/"),  S("/p2"),   S("p1//p2")}
      , {S("p1"),   S("\\p2"),  S("p1\\p2")}
      , {S("p1"),   S(""),      S("p1")}
      , {S(""),     S("p2"),    S("p2")}
    };
#undef S


void doAppendPathTest(AppendOperatorTestcase const& TC)
{
  using namespace fs;
  using Ptr = char const*;
  Ptr L = TC.lhs;
  Ptr R = TC.rhs;
  Ptr E = TC.expect;
  {
    path LHS(L);
    path RHS(R);
    path& Ref = (LHS /= RHS);
    assert(LHS == E);
    assert(&Ref == &LHS);
  }
}

template <class CharT>
void doAppendSourceTest(AppendOperatorTestcase const& TC)
{
  using namespace fs;
  using Ptr = CharT const*;
  using Str = std::basic_string<CharT>;
  using Iter = input_iterator<Ptr>;
  Ptr L = TC.lhs;
  Ptr R = TC.rhs;
  Ptr REnd = StrEnd(R);
  Ptr E = TC.expect;
  // basic_string
  {
    path LHS(L);
    Str RHS(R);
    path& Ref = (LHS /= RHS);
    assert(LHS == E);
    assert(&Ref == &LHS);
  }
  {
    path LHS(L);
    Str RHS(R);
    path& Ref = LHS.append(RHS);
    assert(LHS == E);
    assert(&Ref == &LHS);
  }
  // Char*
  {
    path LHS(L);
    Str RHS(R);
    path& Ref = (LHS /= RHS);
    assert(LHS == E);
    assert(&Ref == &LHS);
  }
  {
    path LHS(L);
    Ptr RHS(R);
    path& Ref = LHS.append(RHS);
    assert(LHS == E);
    assert(&Ref == &LHS);
  }
  {
    path LHS(L);
    Ptr RHS(R);
    path& Ref = LHS.append(RHS, StrEnd(RHS));
    assert(LHS == E);
    assert(&Ref == &LHS);
  }
  // iterators
  {
    path LHS(L);
    Iter RHS(R);
    path& Ref = (LHS /= RHS);
    assert(LHS == E);
    assert(&Ref == &LHS);
  }
  {
    path LHS(L);
    Iter RHS(R);
    path& Ref = LHS.append(RHS);
    assert(LHS == E);
    assert(&Ref == &LHS);
  }
  {
    path LHS(L);
    Iter RHS(R);
    path& Ref = LHS.append(RHS, IterEnd(RHS));
    assert(LHS == E);
    assert(&Ref == &LHS);
  }
}

int main()
{
  using namespace fs;
  for (auto const & TC : Cases) {
    {
      path LHS((const char*)TC.lhs);
      path RHS((const char*)TC.rhs);
      path& Ref = (LHS /= RHS);
      assert(LHS == (const char*)TC.expect);
      assert(&Ref == &LHS);
    }
    doAppendSourceTest<char>    (TC);
    doAppendSourceTest<wchar_t> (TC);
    doAppendSourceTest<char16_t>(TC);
    doAppendSourceTest<char32_t>(TC);
  }
}