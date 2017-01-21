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

// <variant>

// template <class ...Types> class variant;

// ~variant();

#include <cassert>
#include <type_traits>
#include <variant>

#include "test_macros.h"
#include "variant_test_helpers.hpp"

struct NonTDtor {
  static int count;
  NonTDtor() = default;
  ~NonTDtor() { ++count; }
};
int NonTDtor::count = 0;
static_assert(!std::is_trivially_destructible<NonTDtor>::value, "");

struct NonTDtor1 {
  static int count;
  NonTDtor1() = default;
  ~NonTDtor1() { ++count; }
};
int NonTDtor1::count = 0;
static_assert(!std::is_trivially_destructible<NonTDtor1>::value, "");

struct TDtor {
  TDtor(const TDtor &) {} // non-trivial copy
  ~TDtor() = default;
};
static_assert(!std::is_trivially_copy_constructible<TDtor>::value, "");
static_assert(std::is_trivially_destructible<TDtor>::value, "");

int main() {
  {
    using V = std::variant<int, long, TDtor>;
    static_assert(std::is_trivially_destructible<V>::value, "");
  }
  {
    using V = std::variant<NonTDtor, int, NonTDtor1>;
    static_assert(!std::is_trivially_destructible<V>::value, "");
    {
      V v(std::in_place_index<0>);
      assert(NonTDtor::count == 0);
      assert(NonTDtor1::count == 0);
    }
    assert(NonTDtor::count == 1);
    assert(NonTDtor1::count == 0);
    NonTDtor::count = 0;
    { V v(std::in_place_index<1>); }
    assert(NonTDtor::count == 0);
    assert(NonTDtor1::count == 0);
    {
      V v(std::in_place_index<2>);
      assert(NonTDtor::count == 0);
      assert(NonTDtor1::count == 0);
    }
    assert(NonTDtor::count == 0);
    assert(NonTDtor1::count == 1);
  }
  assert(NonTDtor1::count == 1);
  assert(NonTDtor::count == 0);
  NonTDtor::count = 0;
#ifndef TEST_VARIANT_HAS_NO_REFERENCES
  {
    using V = std::variant<NonTDtor&, NonTDtor&&, NonTDtor const&>;
    static_assert(std::is_trivially_destructible_v<V>, "");
    NonTDtor elem;
    auto const& celem = elem;
    assert(NonTDtor::count == 0);
    { V v(elem); }
    assert(NonTDtor::count == 0);
    { V v(celem); }
    assert(NonTDtor::count == 0);
    { V v(std::move(elem)); }
    assert(NonTDtor::count == 0);
  }
  assert(NonTDtor::count == 1);
  NonTDtor::count = 0;
#endif
}
