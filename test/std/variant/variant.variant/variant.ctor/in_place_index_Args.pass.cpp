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

// template <size_t I, class ...Args>
// constexpr explicit variant(in_place_index_t<I>, Args&&...);


#include <variant>
#include <type_traits>
#include <string>
#include <cassert>

#include "test_macros.h"
#include "test_convertible.hpp"

void test_ctor_sfinae() {
    {
        using V = std::variant<int>;
        static_assert(std::is_constructible<V, std::in_place_index_t<0>, int>::value, "");
        static_assert(!test_convertible<V, std::in_place_index_t<0>, int>(), "");
    }
    {
        using V = std::variant<int, long, long long>;
        static_assert(std::is_constructible<V, std::in_place_index_t<1>, int>::value, "");
        static_assert(!test_convertible<V, std::in_place_index_t<1>, int>(), "");
    }
    {
        using V = std::variant<int, long, int*>;
        static_assert(std::is_constructible<V, std::in_place_index_t<2>, int*>::value, "");
        static_assert(!test_convertible<V, std::in_place_index_t<2>, int*>(), "");
    }
    { // args not convertible to type
        using V = std::variant<int, long, int*>;
        static_assert(!std::is_constructible<V, std::in_place_index_t<0>, int*>::value, "");
        static_assert(!test_convertible<V, std::in_place_index_t<0>, int*>(), "");
    }
    { // index not in variant
        using V = std::variant<int, long, int*>;
        static_assert(!std::is_constructible<V, std::in_place_index_t<3>, int>::value, "");
        static_assert(!test_convertible<V, std::in_place_index_t<3>, int>(), "");
    }
}

void test_ctor_basic()
{
    {
        constexpr std::variant<int> v(std::in_place<0>, 42);
        static_assert(v.index() == 0, "");
        static_assert(std::get<0>(v) == 42, "");
    }
    {
        constexpr std::variant<int, long, long> v(std::in_place<1>, 42);
        static_assert(v.index() == 1, "");
        static_assert(std::get<1>(v) == 42, "");
    }
    {
        constexpr std::variant<int, const int, long> v(std::in_place<1>, 42);
        static_assert(v.index() == 1, "");
        static_assert(std::get<1>(v) == 42, "");
    }
    {
        using V = std::variant<const int, volatile int, int>;
        int x = 42;
        V v(std::in_place<0>, x);
        assert(v.index() == 0);
        assert(std::get<0>(v) == x);
    }
    {
        using V = std::variant<const int, volatile int, int>;
        int x = 42;
        V v(std::in_place<1>, x);
        assert(v.index() == 1);
        assert(std::get<1>(v) == x);
    }
    {
        using V = std::variant<const int, volatile int, int>;
        int x = 42;
        V v(std::in_place<2>, x);
        assert(v.index() == 2);
        assert(std::get<2>(v) == x);
    }
}

int main()
{
    test_ctor_basic();
    test_ctor_sfinae();
}
