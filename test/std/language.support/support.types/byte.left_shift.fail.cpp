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

// template <class IntType>
//   constexpr byte operator<<(byte& b, IntType shift) noexcept;

int main()
{
    std::byte b{01};
    b << 2.0;  // shift value must be an integral type
}
