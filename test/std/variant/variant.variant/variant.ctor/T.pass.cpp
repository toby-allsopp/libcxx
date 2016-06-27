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

// template <class T> constexpr variant(T&&) noexcept(see below);


#include <variant>
#include <type_traits>
#include <string>
#include <cassert>

#include "test_macros.h"


void test_T_ctor_noexcept() {

}

void test_T_ctor_sfinae() {

}

void test_T_ctor_basic()
{
    {
        constexpr std::variant<int> v(42);
        static_assert(v.index() == 0);
        static_assert(std::get<0>(v) == 42);
    }
    {
        constexpr std::variant<int, long> v(42l);
        static_assert(v.index() == 1);
        static_assert(std::get<1>(v) == 42);
    }
    {
        int x = 42;
        std::variant<int const&, int&&, long> v(x);
        assert(v.index() == 0);
        assert(&std::get<0>(v) == &x);
    }
    {
        int x = 42;
        std::variant<int const&, int&&, long> v(std::move(x));
        assert(v.index() == 1);
        assert(&std::get<1>(v) == &x);
    }
}

int main()
{
    test_T_ctor_basic();
    test_T_ctor_noexcept();
    test_T_ctor_sfinae();
}
