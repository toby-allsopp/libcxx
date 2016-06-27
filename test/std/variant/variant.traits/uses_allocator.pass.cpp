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

// template <class... Types, class Alloc>
// struct uses_allocator<variant<Types...>, Alloc>;

#include <variant>
#include <memory>

int main()
{
    using T = std::variant<int, long>;
    static_assert(std::uses_allocator<T, std::allocator<void>>::value, "");
}
