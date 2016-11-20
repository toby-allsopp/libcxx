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

// template <class T, class ...Args> void emplace(Args&&... args);



#include <variant>
#include <type_traits>
#include <string>
#include <cassert>

#include "test_macros.h"
#include "test_convertible.hpp"

template <class Var, class T, class ...Args>
constexpr auto test_emplace_exists_imp(int) -> decltype(std::declval<Var>().template emplace<T>(std::declval<Args>()...), true)
{ return true; }

template <class, class, class...>
constexpr auto test_emplace_exists_imp(long) -> bool { return false; }

template <class ...Args>
constexpr bool emplace_exists() { return test_emplace_exists_imp<Args...>(0); }

void test_emplace_sfinae() {
    using V = std::variant<int, int&, int const&, int&&,
                           long, long,
                           void>;
    static_assert(emplace_exists<V, int>(), "");
    static_assert(emplace_exists<V, int, int>(), "");
    static_assert(emplace_exists<V, int, long long>(), "");
    static_assert(!emplace_exists<V, int, int, int>(), "too many args");
    static_assert(emplace_exists<V, int &, int&>(), "");
    static_assert(!emplace_exists<V, int &>(), "cannot default construct ref");
    static_assert(!emplace_exists<V, int &, int const&>(), "cannot bind ref");
    static_assert(!emplace_exists<V, int &, int&&>(), "cannot bind ref");
    static_assert(emplace_exists<V, int const&, int&>(), "");
    static_assert(emplace_exists<V, int const&, const int&>(), "");
    static_assert(emplace_exists<V, int const&, int&&>(), "");
    static_assert(!emplace_exists<V, int const&, void*>(), "not constructible from void*");
    static_assert(emplace_exists<V, int&&, int>(), "");
    static_assert(!emplace_exists<V, int&&, int&>(), "cannot bind ref");
    static_assert(!emplace_exists<V, int&&, int const&>(), "cannot bind ref");
    static_assert(!emplace_exists<V, int&&, int const&&>(), "cannot bind ref");
    static_assert(!emplace_exists<V, long, long>(), "ambiguous");
    static_assert(!emplace_exists<V, void>(), "cannot construct void");
}

void test_basic() {
    {
        using V = std::variant<int>;
        V v(42);
        v.emplace<int>();
        assert(std::get<0>(v) == 0);
        v.emplace<int>(42);
        assert(std::get<0>(v) == 42);
    }
    {
        using V = std::variant<int, long, int const&, int &&, void, std::string>;
        const int x = 100;
        int y = 42;
        int z = 43;
        V v(std::in_place_index<0>, -1);
        // default emplace a value
        v.emplace<long>();
        assert(std::get<long>(v) == 0);
        // emplace a reference
        v.emplace<int const&>(x);
        assert(&std::get<int const&>(v) == &x);
        // emplace an rvalue reference
        v.emplace<int&&>(std::move(y));
        assert(&std::get<int&&>(v) == &y);
        // re-emplace a new reference over the active member
        v.emplace<int&&>(std::move(z));
        assert(&std::get<int&&>(v) == &z);
        // emplace with multiple args
        v.emplace<std::string>(3, 'a');
        assert(std::get<std::string>(v) == "aaa");
    }
}


int main()
{
    test_basic();
    test_emplace_sfinae();
}
