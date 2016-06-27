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

// template <class T> struct in_place_type_t{ explicit in_place_type_t() = default; };
// template <class T> constexpr in_place_type_t<T> in_place_type{};

#include <variant>

int main()
{
    using T = int const&;
    static_assert(std::is_same<const std::in_place_type_t<T>,
                  decltype(std::in_place_type<T>)>::value, "");
    constexpr std::in_place_type_t<T> inp = std::in_place_type<T>;
}
