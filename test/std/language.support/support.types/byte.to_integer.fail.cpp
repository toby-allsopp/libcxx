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

// template <class IntegerType>
//   constexpr IntegerType to_integer(byte b) noexcept;

int main()
{
    std::byte b{01};
    std::to_integer<float>(b); // template parameter must be an integral type
}
