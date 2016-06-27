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

// template <size_t I> struct in_place_index_t{ explicit in_place_index_t() = default; };
// template <size_t I> constexpr in_place_index_t<I> in_place_index{};

#include <variant>

int main()
{
    constexpr std::size_t I = 42;
    static_assert(std::is_same<const std::in_place_index_t<I>,
                  decltype(std::in_place_index<I>)>::value, "");
    constexpr std::in_place_index_t<I> inp = std::in_place_index<I>;
}
