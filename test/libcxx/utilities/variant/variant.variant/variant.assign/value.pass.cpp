// -*- C++ -*-
//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// UNSUPPORTED: c++98, c++03, c++11, c++14

// The following compilers don't generate constexpr special members correctly.
// XFAIL: clang-3.5, clang-3.6, clang-3.7, clang-3.8
// XFAIL: apple-clang-6, apple-clang-7, apple-clang-8

// <variant>

// template <class ...Types> class variant;

//  template <class Arg>
// variant& operator=(Arg&&) noexcept(see below);

#include <type_traits>
#include <variant>
#include <cassert>

#include "test_macros.h"

void test_assign_extension_reference()
{
  using V = std::variant<long&, int&&, int const&>;
  int x = 42;
  int const cx = 101;
  int const cx2 = -99;
  long y = -1;
  V v(cx);
  v = cx2;
  assert(&std::get<2>(v) == &cx2);
  v = std::move(x);
  assert(&std::get<1>(v) == &x);
  v = y;
  assert(&std::get<0>(v) == &y);
}

int main() {
  test_assign_extension_reference();
}
