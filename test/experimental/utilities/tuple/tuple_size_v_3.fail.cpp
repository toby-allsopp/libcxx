//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/tuple>

// template <class T> constexpr size_t tuple_size_v = tuple_size<T>::value;

// Test with pointer

#include <experimental/tuple>

namespace ex = std::experimental;

int main()
{
#if _LIBCPP_STD_VER > 11
    auto x = ex::tuple_size_v<std::tuple<>*>;
#else
# error
#endif
}
