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

// byte should be comparable to a literal integer

int main()
{
    {
    std::byte b1{01};
    std::byte b2{02};
    std::byte b2a{02};
    assert(!(b1 == b2));
    assert( (b1 != b2));
    assert( (b1 <  b2));
    assert( (b1 <= b2));
    assert(!(b1 >  b2));
    assert(!(b1 >= b2));

    assert(!(b2 == b1));
    assert( (b2 != b1));
    assert(!(b2 <  b1));
    assert(!(b2 <= b1));
    assert( (b2 >  b1));
    assert( (b2 >= b1));

    assert( (b2 == b2a));
    assert(!(b2 != b2a));
    assert(!(b2 <  b2a));
    assert( (b2 <= b2a));
    assert(!(b2 >  b2a));
    assert( (b2 >= b2a));
    }
    {
    constexpr std::byte b1{01};
    constexpr std::byte b2{02};
    constexpr std::byte b2a{02};
    static_assert(!(b1 == b2), "");
    static_assert( (b1 != b2), "");
    static_assert( (b1 <  b2), "");
    static_assert( (b1 <= b2), "");
    static_assert(!(b1 >  b2), "");
    static_assert(!(b1 >= b2), "");

    static_assert(!(b2 == b1), "");
    static_assert( (b2 != b1), "");
    static_assert(!(b2 <  b1), "");
    static_assert(!(b2 <= b1), "");
    static_assert( (b2 >  b1), "");
    static_assert( (b2 >= b1), "");

    static_assert( (b2 == b2a), "");
    static_assert(!(b2 != b2a), "");
    static_assert(!(b2 <  b2a), "");
    static_assert( (b2 <= b2a), "");
    static_assert(!(b2 >  b2a), "");
    static_assert( (b2 >= b2a), "");
    }
}
