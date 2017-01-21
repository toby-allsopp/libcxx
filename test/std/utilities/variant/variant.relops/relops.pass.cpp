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

// template <class ...Types>
// constexpr bool
// operator==(variant<Types...> const&, variant<Types...> const&) noexcept;
//
// template <class ...Types>
// constexpr bool
// operator!=(variant<Types...> const&, variant<Types...> const&) noexcept;
//
// template <class ...Types>
// constexpr bool
// operator<(variant<Types...> const&, variant<Types...> const&) noexcept;
//
// template <class ...Types>
// constexpr bool
// operator>(variant<Types...> const&, variant<Types...> const&) noexcept;
//
// template <class ...Types>
// constexpr bool
// operator<=(variant<Types...> const&, variant<Types...> const&) noexcept;
//
// template <class ...Types>
// constexpr bool
// operator>=(variant<Types...> const&, variant<Types...> const&) noexcept;

#include <cassert>
#include <type_traits>
#include <utility>
#include <variant>

#include "test_macros.h"
#include "variant_test_helpers.hpp"

#ifndef TEST_HAS_NO_EXCEPTIONS

inline bool operator==(const MakeEmptyT &, const MakeEmptyT &) {
  assert(false);
  return false;
}
inline bool operator!=(const MakeEmptyT &, const MakeEmptyT &) {
  assert(false);
  return false;
}
inline bool operator<(const MakeEmptyT &, const MakeEmptyT &) {
  assert(false);
  return false;
}
inline bool operator<=(const MakeEmptyT &, const MakeEmptyT &) {
  assert(false);
  return false;
}
inline bool operator>(const MakeEmptyT &, const MakeEmptyT &) {
  assert(false);
  return false;
}
inline bool operator>=(const MakeEmptyT &, const MakeEmptyT &) {
  assert(false);
  return false;
}

#endif // TEST_HAS_NO_EXCEPTIONS

void test_equality_throwing() {
#ifndef TEST_HAS_NO_EXCEPTIONS
  {
    using V = std::variant<int, MakeEmptyT>;
    V v1;
    V v2;
    makeEmpty(v2);
    assert(!(v1 == v2));
    assert(!(v2 == v1));
    assert(v1 != v2);
    assert(v2 != v1);
  }
  {
    using V = std::variant<int, MakeEmptyT>;
    V v1;
    makeEmpty(v1);
    V v2;
    assert(!(v1 == v2));
    assert(!(v2 == v1));
    assert(v1 != v2);
    assert(v2 != v1);
  }
  {
    using V = std::variant<int, MakeEmptyT>;
    V v1;
    makeEmpty(v1);
    V v2;
    makeEmpty(v2);
    assert(v1 == v2);
    assert(v2 == v1);
    assert(!(v1 != v2));
    assert(!(v2 != v1));
  }
#endif
}

template <class IntType, class LongType>
constexpr bool test_equality() {
  using V = std::variant<IntType, LongType>;
  constexpr bool IsRef = std::is_reference_v<IntType> &&
                        std::is_reference_v<LongType>;
  int i1 = 0;
  int i2 = 0;
  long l1 = 0;
  long l2 = 0; ((void)l2);
  { // same value, same objects
    i1 = 42;
    V v1(i1);
    V v2(i1);
    assert(v1 == v2);
    assert(v2 == v1);
    assert(!(v1 != v2));
    assert(!(v2 != v1));
  }
  { // same value, different objects
    i1 = i2 = 42;
    V v1(i1);
    V v2(i2);
    assert((v1 == v2) == !IsRef);
    assert((v2 == v1) == !IsRef);
    assert((v1 != v2) == IsRef);
    assert((v2 != v1) == IsRef);
  }
  {
    i1 = 42;
    i2 = 43;
    V v1(i1);
    V v2(i2);
    assert(!(v1 == v2));
    assert(!(v2 == v1));
    assert(v1 != v2);
    assert(v2 != v1);
  }
  {
    i1 = 42;
    l1 = 42;
    V v1(i1);
    V v2(std::forward<LongType>(l1));
    assert(!(v1 == v2));
    assert(!(v2 == v1));
    assert(v1 != v2);
    assert(v2 != v1);
  }
  {
    l1 = 42;
    V v1(std::forward<LongType>(l1));
    V v2(std::forward<LongType>(l1));
    assert(v1 == v2);
    assert(v2 == v1);
    assert(!(v1 != v2));
    assert(!(v2 != v1));
  }
  return true;
}

template <class Var>
constexpr bool test_less(const Var &l, const Var &r, bool expect_less,
                         bool expect_greater) {
  return ((l < r) == expect_less) && (!(l >= r) == expect_less) &&
         ((l > r) == expect_greater) && (!(l <= r) == expect_greater);
}

void test_relational_throwing() {
#ifndef TEST_HAS_NO_EXCEPTIONS
  { // LHS.index() < RHS.index(), RHS is empty
    using V = std::variant<int, MakeEmptyT>;
    V v1;
    V v2;
    makeEmpty(v2);
    assert(test_less(v1, v2, false, true));
  }
  { // LHS.index() > RHS.index(), LHS is empty
    using V = std::variant<int, MakeEmptyT>;
    V v1;
    makeEmpty(v1);
    V v2;
    assert(test_less(v1, v2, true, false));
  }
  { // LHS.index() == RHS.index(), LHS and RHS are empty
    using V = std::variant<int, MakeEmptyT>;
    V v1;
    makeEmpty(v1);
    V v2;
    makeEmpty(v2);
    assert(test_less(v1, v2, false, false));
  }
#endif
}

template <class IntType, class LongType>
constexpr bool test_relational() {
  using V = std::variant<IntType, LongType>;
  int i1 = 0;
  int i2 = 0;
  long l1 = 0;
  long l2 = 0; ((void)l2);
  { // same index, same value, different objects
    i1 = i2 = 1;
    V v1(i1);
    V v2(i2);
    assert(test_less(v1, v2, false, false));
  }
  { // same index, value < other_value
    i1 = 0;
    i2 = 1;
    V v1(i1);
    V v2(i2);
    assert(test_less(v1, v2, true, false));
  }
  { // same index, value > other_value
    i1 = 1;
    i2 = 0;
    V v1(i1);
    V v2(i2);
    assert(test_less(v1, v2, false, true));
  }
  { // LHS.index() < RHS.index()
    using V = std::variant<int, long>;
    i1 = 0;
    l1 = 0;
    V v1(i1);
    V v2(std::move(l1));
    assert(test_less(v1, v2, true, false));
  }
  { // LHS.index() > RHS.index()
    l1 = 0;
    i1 = 0;
    V v1(std::move(l1));
    V v2(i1);
    assert(test_less(v1, v2, false, true));
  }
  return true;
}


template <class IntType, class LongType>
constexpr bool test_relational_ref() {
  using V = std::variant<IntType, LongType>;
  int iarr[2] = {};
  long larr[2] = {};
  int &i1 = iarr[0];
  int &i2 = iarr[1];
  assert(&i1 < &i2);
  long &l1 = larr[0];
  long &l2 = larr[1]; ((void)l2);
  { // same index, same value, same objects
    i1 = 1;
    V v1(i1);
    V v2(i1);
    assert(test_less(v1, v2, false, false));
  }
  { // same index, same value, different objects
    i1 = i2 = 1;
    V v1(i1);
    V v2(i2);
    assert(test_less(v1, v2, true, false));
  }
  { // same index, value > other_value, different objects.
    i1 = 1;
    i2 = 0;
    V v1(i1);
    V v2(i2);
    // compares i1 and i2 by address
    assert(test_less(v1, v2, true, false));
  }
  { // same index, value > other_value
    i2 = 0;
    i1 = 1;
    V v1(i2);
    V v2(i1);
    assert(test_less(v1, v2, false, true));
  }
  { // LHS.index() < RHS.index()
    i1 = 0;
    l1 = 0;
    V v1(i1);
    V v2(std::move(l1));
    assert(test_less(v1, v2, true, false));
  }
  { // LHS.index() > RHS.index()
    l1 = 0;
    i1 = 0;
    V v1(std::move(l1));
    V v2(i1);
    assert(test_less(v1, v2, false, true));
  }
  return true;
}

int main() {
  {
    static_assert(test_equality<int, long>(), "");
    test_equality_throwing();
  }
  {
    static_assert(test_relational<int, long>(), "");
    test_relational_throwing();
  }
#ifndef TEST_VARIANT_HAS_NO_REFERENCES
  {
    static_assert(test_equality<int&, long&&>(), "");
    static_assert(test_relational_ref<int&, long&&>(), "");
  }
#endif
}
