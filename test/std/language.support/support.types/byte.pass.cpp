//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// XFAIL: c++03, c++11, c++14

#include <cstddef>
#include <cassert>

// byte should:

//  1. be in namespace std.
//  2. have a sizeof 1
//  3. not be an integral type

int main()
{
    static_assert(sizeof(std::byte) == 1, "sizeof(std::byte) == 1");
    static_assert(!std::is_integral<std::byte>::value, "is_integral<std::byte>::value");
}
