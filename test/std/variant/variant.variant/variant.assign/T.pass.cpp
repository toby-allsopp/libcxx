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

// template <class T>
// variant& operator=(T&&) noexcept(see below);

#include <variant>
#include <type_traits>
#include <string>
#include <cassert>

#include "test_macros.h"

struct Dummy {
  Dummy() = default;
};

struct ThrowsCtorT {
  ThrowsCtorT(int) noexcept(false) {}
  ThrowsCtorT& operator=(int) noexcept { return *this; }
};

struct ThrowsAssignT {
  ThrowsAssignT(int) noexcept {}
  ThrowsAssignT& operator=(int) noexcept(false) { return *this; }
};

struct NoThrowT {
  NoThrowT(int) noexcept {}
  NoThrowT& operator=(int) noexcept { return *this; }
};

void test_T_assignment_noexcept() {
    {
        using V = std::variant<Dummy, NoThrowT>;
        static_assert(std::is_nothrow_assignable<V, int>::value, "");
    }
    {
        using V = std::variant<Dummy, ThrowsCtorT>;
        static_assert(!std::is_nothrow_assignable<V, int>::value, "");
    }
    {
        using V = std::variant<Dummy, ThrowsAssignT>;
        static_assert(!std::is_nothrow_assignable<V, int>::value, "");
    }
}

void test_T_assignment_sfinae() {
    {
        using V = std::variant<int, int&&>;
        static_assert(!std::is_assignable<V, int>::value, "ambiguous");
    }
    {
        using V = std::variant<int, int const&>;
        static_assert(!std::is_assignable<V, int>::value, "ambiguous");
    }
    {
        using V = std::variant<long, unsigned>;
        static_assert(!std::is_assignable<V, int>::value, "ambiguous");
    }
    {
        using V = std::variant<std::string, std::string>;
        static_assert(!std::is_assignable<V, const char*>::value, "ambiguous");
    }
    {
        using V = std::variant<std::string, void*>;
        static_assert(!std::is_assignable<V, int>::value, "no matching operator=");
    }
}

void test_T_assignment_basic()
{
    {
        std::variant<int> v(43);
        v = 42;
        assert(v.index() == 0);
        assert(std::get<0>(v) == 42);
    }
    {
        std::variant<int, long> v(43l);
        v = 42;
        assert(v.index() == 0);
        assert(std::get<0>(v) == 42);
        v = 43l;
        assert(v.index() == 1);
        assert(std::get<1>(v) == 43);
    }
    {
        using V = std::variant<int &, int&&, long>;
        int x = 42;
        V v(43l);
        v = x;
        assert(v.index() == 0);
        assert(&std::get<0>(v) == &x);
        v = std::move(x);
        assert(v.index() == 1);
        assert(&std::get<1>(v) == &x);
        // 'long' is selected by FUN(int const&) since 'int const&' cannot bind
        // to 'int&'.
        int const& cx = x;
        v = cx;
        assert(v.index() == 2);
        assert(std::get<2>(v) == 42);
    }
}

int main()
{
    test_T_assignment_basic();
    test_T_assignment_noexcept();
    test_T_assignment_sfinae();
}