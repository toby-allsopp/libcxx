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

// variant(variant&&) noexcept(see below);


#include <variant>
#include <type_traits>
#include <string>
#include <cassert>

#include "test_macros.h"

struct ThrowsMove {
  ThrowsMove(ThrowsMove&&) noexcept(false) {}
};

struct NoCopy {
  NoCopy(NoCopy const&) = delete;
};


struct MoveOnly {
  MoveOnly(MoveOnly const&) = delete;
  MoveOnly(MoveOnly&&) = default;
};


struct MoveOnlyNT {
  MoveOnlyNT(MoveOnlyNT const&) = delete;
  MoveOnlyNT(MoveOnlyNT&&) {}
};

void test_move_noexcept() {
    {
        using V = std::variant<int, long>;
        static_assert(std::is_nothrow_move_constructible<V>::value, "");
    }
    {
        using V = std::variant<int, MoveOnly>;
        static_assert(std::is_nothrow_move_constructible<V>::value, "");
    }
    {
        using V = std::variant<int, MoveOnlyNT>;
        static_assert(!std::is_nothrow_move_constructible<V>::value, "");
    }
    {
        using V = std::variant<int, ThrowsMove>;
        static_assert(!std::is_nothrow_move_constructible<V>::value, "");
    }
}

void test_move_ctor_sfinae() {
    {
        using V = std::variant<int, long>;
        static_assert(std::is_move_constructible<V>::value, "");
    }
    {
        using V = std::variant<int, MoveOnly>;
        static_assert(std::is_move_constructible<V>::value, "");
    }
    {
        using V = std::variant<int, MoveOnlyNT>;
        static_assert(std::is_move_constructible<V>::value, "");
    }
    {
        using V = std::variant<int, NoCopy>;
        static_assert(!std::is_move_constructible<V>::value, "");
    }
}

void test_move_ctor_basic()
{
    {
        std::variant<int> v(std::in_place_index<0>, 42);
        std::variant<int> v2 = std::move(v);
        assert(v2.index() == 0);
        assert(std::get<0>(v2) == 42);
    }
    {
        std::variant<int, long> v(std::in_place_index<1>, 42);
        std::variant<int, long> v2 = std::move(v);
        assert(v2.index() == 1);
        assert(std::get<1>(v2) == 42);
    }
    {
        std::variant<std::string> v(std::in_place_index<0>, "hello");
        assert(v.index() == 0);
        std::variant<std::string> v2(std::move(v));
        assert(v2.index() == 0);
        assert(std::get<0>(v2) == "hello");
    }
    {
        std::variant<int, std::string> v(std::in_place_index<1>, "hello");
        assert(v.index() == 1);
        std::variant<int, std::string> v2(std::move(v));
        assert(v2.index() == 1);
        assert(std::get<1>(v2) == "hello");
    }
}

int main()
{
    test_move_ctor_basic();
    test_move_noexcept();
    test_move_ctor_sfinae();
}
