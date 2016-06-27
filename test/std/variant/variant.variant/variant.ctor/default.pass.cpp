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
#include <cassert>

int main()
{
    {
        std::variant<int> v;
        assert(v.index() == 0);
        assert(std::get<0>(v) == 0);
    }
    {
        std::variant<int, long> v;
        assert(v.index() == 0);
        assert(std::get<0>(v) == 0);
    }
    {
        using V = std::variant<int, long>;
        constexpr V v;
        static_assert(v.index() == 0, "");
        static_assert(std::get<0>(v) == 0, "");
    }
    {
        using V = std::variant<int, long>;
        constexpr V v;
        static_assert(v.index() == 0, "");
        static_assert(std::get<0>(v) == 0, "");
    }
}
