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
#include "../../dummy_resource.hpp"

#if _LIBCPP_STD_VER > 11

namespace ex = std::experimental::pmr;

int main()
{

    dummy_resource d;
    ex::memory_resource & mr1 = d;
    {
        static_assert(
            std::is_same<decltype(mr1.allocate(0, 0)), void*>::value
          , "Must be void *"
          );
    }
    {
        void * ret = mr1.allocate(0, 0);
        assert(!ret);
        assert(alloc_count == 1);
    }
}
#else /* _LIBCPP_STD_VER <= 11 */
int main() {}
#endif /* _LIBCPP_STD_VER > 11 */
