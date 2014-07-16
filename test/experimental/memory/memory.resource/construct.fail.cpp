//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/memory_resource>

// Check that memory_resource is not constructible

#include <experimental/memory_resource>
#include <type_traits>
#include <cassert>

#if _LIBCPP_STD_VER > 11

namespace ex = std::experimental::pmr;

int main()
{
    ex::memory_resource m;
}
#else /* _LIBCPP_STD_VER <= 11 */
#error
#endif /* _LIBCPP_STD_VER > 11 */
