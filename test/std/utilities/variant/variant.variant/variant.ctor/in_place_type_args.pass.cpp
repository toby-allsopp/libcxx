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

// template <class Tp, class ...Args>
// constexpr explicit variant(in_place_type_t<Tp>, Args&&...);

#include <cassert>
#include <type_traits>
#include <variant>

#include "test_convertible.hpp"
#include "test_macros.h"
#include "variant_test_helpers.hpp"

void test_ctor_sfinae() {
  {
    using V = std::variant<int>;
    static_assert(
        std::is_constructible<V, std::in_place_type_t<int>, int>::value, "");
    static_assert(!test_convertible<V, std::in_place_type_t<int>, int>(), "");
  }
  {
    using V = std::variant<int, long, long long>;
    static_assert(
        std::is_constructible<V, std::in_place_type_t<long>, int>::value, "");
    static_assert(!test_convertible<V, std::in_place_type_t<long>, int>(), "");
  }
  {
    using V = std::variant<int, long, int *>;
    static_assert(
        std::is_constructible<V, std::in_place_type_t<int *>, int *>::value,
        "");
    static_assert(!test_convertible<V, std::in_place_type_t<int *>, int *>(),
                  "");
  }
  { // duplicate type
    using V = std::variant<int, long, int>;
    static_assert(
        !std::is_constructible<V, std::in_place_type_t<int>, int>::value, "");
    static_assert(!test_convertible<V, std::in_place_type_t<int>, int>(), "");
  }
  { // args not convertible to type
    using V = std::variant<int, long, int *>;
    static_assert(
        !std::is_constructible<V, std::in_place_type_t<int>, int *>::value, "");
    static_assert(!test_convertible<V, std::in_place_type_t<int>, int *>(), "");
  }
  { // type not in variant
    using V = std::variant<int, long, int *>;
    static_assert(
        !std::is_constructible<V, std::in_place_type_t<long long>, int>::value,
        "");
    static_assert(!test_convertible<V, std::in_place_type_t<long long>, int>(),
                  "");
  }
}

void test_ctor_basic() {
  {
    constexpr std::variant<int> v(std::in_place_type<int>, 42);
    static_assert(v.index() == 0, "");
    static_assert(std::get<0>(v) == 42, "");
  }
  {
    constexpr std::variant<int, long> v(std::in_place_type<long>, 42);
    static_assert(v.index() == 1, "");
    static_assert(std::get<1>(v) == 42, "");
  }
  {
    constexpr std::variant<int, const int, long> v(
        std::in_place_type<const int>, 42);
    static_assert(v.index() == 1, "");
    static_assert(std::get<1>(v) == 42, "");
  }
  {
    using V = std::variant<const int, volatile int, int>;
    int x = 42;
    V v(std::in_place_type<const int>, x);
    assert(v.index() == 0);
    assert(std::get<0>(v) == x);
  }
  {
    using V = std::variant<const int, volatile int, int>;
    int x = 42;
    V v(std::in_place_type<volatile int>, x);
    assert(v.index() == 1);
    assert(std::get<1>(v) == x);
  }
  {
    using V = std::variant<const int, volatile int, int>;
    int x = 42;
    V v(std::in_place_type<int>, x);
    assert(v.index() == 2);
    assert(std::get<2>(v) == x);
  }
}

struct MultiArgs {
  MultiArgs() = default;
  template <class First, class ...Rest>
  MultiArgs(First&&, Rest&&...) {}
};

void test_ctor_references() {
#ifndef TEST_VARIANT_HAS_NO_REFERENCES
  using V = std::variant<int&, int const&, MultiArgs&&, MultiArgs>;
  {
    static_assert(std::is_constructible_v<V, std::in_place_type_t<int&>, int&>, "");
    static_assert(std::is_constructible_v<V, std::in_place_type_t<const int&>, int&>, "");
  }
  int x = 42;
  const int y = 101;
  MultiArgs m;
  {
    V v(std::in_place_type<int&>, x);
    assert(&std::get<0>(v) == &x);
  }
  {
    V v(std::in_place_type<int const&>, y);
    assert(&std::get<1>(v) == &y);
  }
  {
    V v(std::in_place_type<int const&>, x);
    assert(&std::get<1>(v) == &x);
  }
  {
    V v(std::in_place_type<MultiArgs&&>, std::move(m));
    assert(&std::get<2>(v) == &m);
  }
  {
    // FIXME disallow this.
    static_assert(std::is_constructible_v<V, std::in_place_type_t<MultiArgs&&>, int&>, "");
  }
  {
    static_assert(!std::is_constructible_v<V, std::in_place_type_t<int&>, int&, int&>, "");
    static_assert(!std::is_constructible_v<V, std::in_place_type_t<const int&>, int&, int&>, "");
    static_assert(!std::is_constructible_v<V, std::in_place_type_t<MultiArgs&&>, int&, int&>, "");
    static_assert(std::is_constructible_v<V, std::in_place_type_t<MultiArgs>, int&, int&>, "");
  }
  {
    static_assert(!std::is_constructible_v<V, std::in_place_type_t<int&>, int&&>, "");
  }
#endif
}


int main() {
  test_ctor_basic();
  test_ctor_sfinae();
  test_ctor_references();
}
