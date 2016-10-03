//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// XFAIL: c++03, c++11, c++14

// constexpr byte operator|  (byte l, byte r) noexcept;
// constexpr byte& operator|=(byte& l, byte r) noexcept;
// constexpr byte operator&  (byte l, byte r) noexcept;
// constexpr byte& operator&=(byte& l, byte r) noexcept;
// constexpr byte operator~  (byte b) noexcept;
// constexpr byte operator^  (byte l, byte r) noexcept;
// constexpr byte& operator^=(byte& l, byte r) noexcept;

#include <cstddef>
#include <cassert>

int main()
{
    {
    const std::byte b1{03};
    const std::byte b2{06};
    const std::byte b3{10};

    assert( ((b1 | b2) == std::byte{07}));
    assert( ((b1 | b3) == std::byte{11}));
    assert( ((b2 | b3) == std::byte{14}));

    assert( ((b1 & b2) == std::byte{02}));
    assert( ((b1 & b3) == std::byte{02}));
    assert( ((b2 & b3) == std::byte{02}));

    assert( ((b1 ^ b2) == std::byte{05}));
    assert( ((b1 ^ b3) == std::byte{ 9}));
    assert( ((b2 ^ b3) == std::byte{12}));

	assert( (~b1 == std::byte{252}));
	assert( (~b2 == std::byte{249}));
	assert( (~b3 == std::byte{245}));

    std::byte b4;
    std::byte b5;

	b4 = b1;
    b5 = b2;
	b4 |= b2;
	assert( (b4 == std::byte{07}));
	b5 |= b3;
	assert( (b5 == std::byte{14}));
	
	b4 = b1;
    b5 = b2;
	b4 &= b2;
	assert( (b4 == std::byte{02}));
	b5 &= b3;
	assert( (b5 == std::byte{02}));

	b4 = b1;
    b5 = b2;
	b4 ^= b2;
	assert( (b4 == std::byte{05}));
	b5 ^= b3;
	assert( (b5 == std::byte{12}));
    }

    {
    constexpr const std::byte b1{03};
    constexpr const std::byte b2{06};
    constexpr const std::byte b3{10};

    static_assert( ((b1 | b2) == std::byte{07}), "");
    static_assert( ((b1 | b3) == std::byte{11}), "");
    static_assert( ((b2 | b3) == std::byte{14}), "");

    static_assert( ((b1 & b2) == std::byte{02}), "");
    static_assert( ((b1 & b3) == std::byte{02}), "");
    static_assert( ((b2 & b3) == std::byte{02}), "");

    static_assert( ((b1 ^ b2) == std::byte{05}), "");
    static_assert( ((b1 ^ b3) == std::byte{ 9}), "");
    static_assert( ((b2 ^ b3) == std::byte{12}), "");
    
	static_assert( (~b1 == std::byte{252}), "");
	static_assert( (~b2 == std::byte{249}), "");
	static_assert( (~b3 == std::byte{245}), "");
    }
}
