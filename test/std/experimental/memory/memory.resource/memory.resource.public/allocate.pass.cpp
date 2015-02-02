//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/memory_resource>

// void * memory_resource::allocate(size_t, size_t)

#include <experimental/memory_resource>
#include <type_traits>
#include <cassert>
#include "dummy_memory_resource.hpp"

#if _LIBCPP_STD_VER > 11

namespace ex = std::experimental::pmr;

int main()
{
    typedef dummy_resource D;
    dummy_resource d;
    ex::memory_resource & mr1 = d;
    {
        static_assert(
            std::is_same<decltype(mr1.allocate(0, 0)), void*>::value
          , "Must be void *"
          );
    }
    {
        std::size_t s = 42;
        std::size_t a = 1024;
        void * ret = mr1.allocate(s, a);
        assert(D::alloc_count == 1);
        assert(D::last_size == s);
        assert(D::last_align == a);
        assert(D::last_pointer == ret);
    }
}
#else /* _LIBCPP_STD_VER <= 11 */
int main() {}
#endif /* _LIBCPP_STD_VER > 11 */
