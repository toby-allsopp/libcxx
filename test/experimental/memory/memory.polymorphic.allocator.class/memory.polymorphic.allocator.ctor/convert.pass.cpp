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

// polymorphic_allocator<T>::polymorphic_allocator(memory_resource *)

#include <experimental/memory_resource>
#include <type_traits>
#include <cassert>

#if _LIBCPP_STD_VER > 11

namespace ex = std::experimental::pmr;

int main()
{
    {
        typedef ex::polymorphic_allocator<void> A;
        static_assert(
            std::is_convertible<decltype(nullptr), A>::value
          , "Must be convertible"
          );
        static_assert(
            std::is_convertible<ex::memory_resource *, A>::value
          , "Must be convertible"
          );
    }
    {
        typedef ex::polymorphic_allocator<void> A;
        A const a(nullptr);
        assert(a.resource() == nullptr);
    }
    {
        typedef ex::polymorphic_allocator<void> A;
        A const a((ex::memory_resource *)42);
        assert(a.resource() == (ex::memory_resource *)42);
    }
}
#else /* _LIBCPP_STD_VER <= 11 */
int main() {}
#endif /* _LIBCPP_STD_VER > 11 */
