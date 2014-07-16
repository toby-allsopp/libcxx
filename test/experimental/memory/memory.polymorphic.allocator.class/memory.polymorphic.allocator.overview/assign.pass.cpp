//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/memory_resource>

// template <class T> class polymorphic_allocator

// polymorphic_allocator operator=(polymorphic_allocator const &) = delete

#include <experimental/memory_resource>
#include <type_traits>
#include <cassert>

#if _LIBCPP_STD_VER > 11

namespace ex = std::experimental::pmr;

int main()
{
    typedef ex::polymorphic_allocator<void> T;
    static_assert(std::is_copy_assignable<T>::value, "");
    static_assert(std::is_move_assignable<T>::value, "");
}
#else /* _LIBCPP_STD_VER <= 11 */
int main() {}
#endif /* _LIBCPP_STD_VER > 11 */
