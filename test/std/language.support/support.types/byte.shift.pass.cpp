//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// XFAIL: c++03, c++11, c++14

// template <class IntType>
//   constexpr byte& operator<<=(byte& b, IntType shift) noexcept;
// template <class IntType>
//   constexpr byte operator<<(byte b, IntType shift) noexcept;
// template <class IntType>
//   constexpr byte& operator>>=(byte& b, IntType shift) noexcept;
// template <class IntType>
//   constexpr byte operator>>(byte b, IntType shift) noexcept;

#include <cstddef>
#include <cassert>

int main()
{
    {
    const std::byte b1{03};
    const std::byte b2{06};
    const std::byte b3{12};

    assert( (b1 != b2));
    assert( (b1 != b3));
    assert( (b2 != b3));

    const std::byte b4 = b2 << 1;
    const std::byte b5 = b1 << 2;
    assert( (b4 == b3));
    assert( (b5 == b3));

    std::byte b6 = b4 >> 1;
    std::byte b7 = b5 >> 2;
    assert( (b6 == b2));
    assert( (b7 == b1));
    
    b6 <<= 1;
    b7 <<= 2;
    assert( (b6 == b3));
    assert( (b7 == b3));

    b6 >>= 1;
    b7 >>= 2;
    assert( (b6 == b2));
    assert( (b7 == b1));    
    }

    {
    constexpr const std::byte b1{03};
    constexpr const std::byte b2{06};
    constexpr const std::byte b3{12};

    static_assert( (b1 != b2), "");
    static_assert( (b1 != b3), "");
    static_assert( (b2 != b3), "");

    constexpr const std::byte b4 = b2 << 1;
    constexpr const std::byte b5 = b1 << 2;
    static_assert( (b4 == b3), "");
    static_assert( (b5 == b3), "");

    constexpr std::byte b6 = b4 >> 1;
    constexpr std::byte b7 = b5 >> 2;
    static_assert( (b6 == b2), "");
    static_assert( (b7 == b1), "");
    
//     b6 <<= 1;
//     b7 <<= 2;
//     static_assert( (b6 == b3), "");
//     static_assert( (b7 == b3), "");
// 
//     b6 >>= 1;
//     b7 >>= 2;
//     static_assert( (b6 == b2), "");
//     static_assert( (b7 == b1), "");    
    }
}
