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

#include <variant>
#include <type_traits>
#include <cassert>

#include "test_macros.h"


#ifndef TEST_HAS_NO_EXCEPTIONS
struct MakeEmptyT {
  MakeEmptyT() = default;
  MakeEmptyT(MakeEmptyT&&) {
    throw 42;
  }
  MakeEmptyT& operator=(MakeEmptyT&&) {
      throw 42;
  }
};
inline bool operator==(MakeEmptyT const&, MakeEmptyT const&) { assert(false); }
inline bool operator!=(MakeEmptyT const&, MakeEmptyT const&) { assert(false); }
inline bool operator< (MakeEmptyT const&, MakeEmptyT const&) { assert(false); }
inline bool operator<=(MakeEmptyT const&, MakeEmptyT const&) { assert(false); }
inline bool operator>(MakeEmptyT const&, MakeEmptyT const&)  { assert(false); }
inline bool operator>=(MakeEmptyT const&, MakeEmptyT const&) { assert(false); }

template <class Variant>
void makeEmpty(Variant& v) {
    Variant v2(std::in_place_type<MakeEmptyT>);
    try {
        v = std::move(v2);
        assert(false);
    }  catch (...) {
        assert(v.valueless_by_exception());
    }
}
#endif // TEST_HAS_NO_EXCEPTIONS

void test_equality()
{
    {
        using V = std::variant<int, long>;
        constexpr V v1(42);
        constexpr V v2(42);
        static_assert(v1 == v2, "");
        static_assert(v2 == v1, "");
        static_assert(!(v1 != v2), "");
        static_assert(!(v2 != v1), "");
    }
    {
        using V = std::variant<int, long>;
        constexpr V v1(42);
        constexpr V v2(43);
        static_assert(!(v1 == v2), "");
        static_assert(!(v2 == v1), "");
        static_assert(v1 != v2, "");
        static_assert(v2 != v1, "");
    }
    {
        using V = std::variant<int, long>;
        constexpr V v1(42);
        constexpr V v2(42l);
        static_assert(!(v1 == v2), "");
        static_assert(!(v2 == v1), "");
        static_assert(v1 != v2, "");
        static_assert(v2 != v1, "");
    }
    {
        using V = std::variant<int, long>;
        constexpr V v1(42l);
        constexpr V v2(42l);
        static_assert(v1 == v2, "");
        static_assert(v2 == v1, "");
        static_assert(!(v1 != v2), "");
        static_assert(!(v2 != v1), "");
    }
#ifndef TEST_HAS_NO_EXCEPTIONS
    {
        using V = std::variant<int, MakeEmptyT>;
        V v1;
        V v2; makeEmpty(v2);
        assert(!(v1 == v2));
        assert(!(v2 == v1));
        assert(v1 != v2);
        assert(v2 != v1);
    }
    {
        using V = std::variant<int, MakeEmptyT>;
        V v1; makeEmpty(v1);
        V v2;
        assert(!(v1 == v2));
        assert(!(v2 == v1));
        assert(v1 != v2);
        assert(v2 != v1);
    }
    {
        using V = std::variant<int, MakeEmptyT>;
        V v1; makeEmpty(v1);
        V v2; makeEmpty(v2);
        assert(v1 == v2);
        assert(v2 == v1);
        assert(!(v1 != v2));
        assert(!(v2 != v1));
    }
#endif
}

template <class Var>
constexpr bool test_less(Var const& l, Var const& r, bool expect) {
    return ((l < r) == expect)
        && (!(l >= r) == expect);
}

void test_relational()
{
    { // v1.index() < v2.index()
        using V = std::variant<int, long>;
        constexpr V v1(42);
        constexpr V v2(42);
        static_assert(test_less(v1, v2, false), "");
    }
    {
        using V = std::variant<int, long>;
        constexpr V v1(42);
        constexpr V v2(43);
        static_assert(!(v1 == v2), "");
        static_assert(!(v2 == v1), "");
        static_assert(v1 != v2, "");
        static_assert(v2 != v1, "");
    }
    {
        using V = std::variant<int, long>;
        constexpr V v1(42);
        constexpr V v2(42l);
        static_assert(!(v1 == v2), "");
        static_assert(!(v2 == v1), "");
        static_assert(v1 != v2, "");
        static_assert(v2 != v1, "");
    }
    {
        using V = std::variant<int, long>;
        constexpr V v1(42l);
        constexpr V v2(42l);
        static_assert(v1 == v2, "");
        static_assert(v2 == v1, "");
        static_assert(!(v1 != v2), "");
        static_assert(!(v2 != v1), "");
    }
#ifndef TEST_HAS_NO_EXCEPTIONS
    {
        using V = std::variant<int, MakeEmptyT>;
        V v1;
        V v2; makeEmpty(v2);
        assert(!(v1 == v2));
        assert(!(v2 == v1));
        assert(v1 != v2);
        assert(v2 != v1);
    }
    {
        using V = std::variant<int, MakeEmptyT>;
        V v1; makeEmpty(v1);
        V v2;
        assert(!(v1 == v2));
        assert(!(v2 == v1));
        assert(v1 != v2);
        assert(v2 != v1);
    }
    {
        using V = std::variant<int, MakeEmptyT>;
        V v1; makeEmpty(v1);
        V v2; makeEmpty(v2);
        assert(v1 == v2);
        assert(v2 == v1);
        assert(!(v1 != v2));
        assert(!(v2 != v1));
    }
#endif
}

int main() {
    test_equality();
    test_relational();
}
