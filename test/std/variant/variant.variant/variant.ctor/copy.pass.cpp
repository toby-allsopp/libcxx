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

// constexpr variant() noexcept(see below);


#include <variant>
#include <type_traits>
#include <cassert>

#include "test_macros.h"

struct NonT {
  NonT(int v) : value(v) {}
  NonT(NonT const& o) : value(o.value) {}
  int value;
};
static_assert(!std::is_trivially_copy_constructible<NonT>::value, "");

void test_default_ctor_basic()
{
    {
        std::variant<int> v(std::in_place_index<0>, 42);
        std::variant<int> v2 = v;
        assert(v2.index() == 0);
        assert(std::get<0>(v2) == 42);
    }
    {
        std::variant<int, long> v(std::in_place_index<1>, 42);
        std::variant<int, long> v2 = v;
        assert(v2.index() == 1);
        assert(std::get<1>(v2) == 42);
    }
    {
        std::variant<NonT> v(std::in_place_index<0>, 42);
        assert(v.index() == 0);
        std::variant<NonT> v2(v);
        assert(v2.index() == 0);
        assert(std::get<0>(v2).value == 42);
    }
    {
        std::variant<int, NonT> v(std::in_place_index<1>, 42);
        assert(v.index() == 1);
        std::variant<int, NonT> v2(v);
        assert(v2.index() == 1);
        assert(std::get<1>(v2).value == 42);
    }
}

int main()
{
    test_default_ctor_basic();
}
