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
	{
    const std::byte b1{03};
	static_assert(std::is_same<decltype(std::to_integer<short>(b1)), short>::value, "");
	static_assert(std::is_same<decltype(std::to_integer<int>(b1)), int>::value, "");
	static_assert(std::is_same<decltype(std::to_integer<long>(b1)), long>::value, "");
	static_assert(std::is_same<decltype(std::to_integer<unsigned short>(b1)), unsigned short>::value, "");
	static_assert(std::is_same<decltype(std::to_integer<unsigned int>(b1)), unsigned int>::value, "");
	static_assert(std::is_same<decltype(std::to_integer<unsigned long>(b1)), unsigned long>::value, "");
	}
	
    {
    const std::byte b1{03};
    const std::byte b2{06};
    const std::byte b3{12};

	assert ( (std::to_integer<int>(b1) ==  3));
	assert ( (std::to_integer<int>(b2) ==  6));
	assert ( (std::to_integer<int>(b3) == 12));
	
	assert ( (std::to_integer<unsigned long>(b1) ==  3UL));
	assert ( (std::to_integer<unsigned long>(b2) ==  6UL));
	assert ( (std::to_integer<unsigned long>(b3) == 12UL));
    }

    {
    const std::byte b1{03};
    const std::byte b2{06};
    const std::byte b3{12};

	static_assert ( (std::to_integer<int>(b1) ==  3), "");
	static_assert ( (std::to_integer<int>(b2) ==  6), "");
	static_assert ( (std::to_integer<int>(b3) == 12), "");
	
	static_assert ( (std::to_integer<unsigned long>(b1) ==  3UL), "");
	static_assert ( (std::to_integer<unsigned long>(b2) ==  6UL), "");
	static_assert ( (std::to_integer<unsigned long>(b3) == 12UL), "");
    }
}
