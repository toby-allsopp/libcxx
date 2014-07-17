//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/memory_resource>

// template <class Alloc> class resource_adaptor_imp;

// void do_allocate(size_t size, size_t align)
// void do_deallocate(void *, size_t size, size_t align)


#include <experimental/memory_resource>
#include <type_traits>
#include <memory>
#include <cassert>
#include "allocators.h"

#if _LIBCPP_STD_VER > 11

namespace ex = std::experimental::pmr;


int main()
{
    typedef A1<char> Alloc1;
    typedef ex::resource_adaptor<Alloc1> R1;
    {
        // Assumption required for testing
        static_assert(
            std::is_same<R1::allocator_type, Alloc1>::value
          , ""
          );
    }
    for (std::size_t s = 0; s < 512; ++s)
    {
        std::size_t align_req = 1;
        while (align_req <= alignof(std::max_align_t))
        {
            Alloc1 const a;
            R1 r(a);
            ex::memory_resource & m1 = r;

            std::size_t ret = (std::size_t)m1.allocate(s, align_req);

            // Check that we called the allocators allocate function.
            assert(Alloc1::allocate_called);

            // Check that we asked for at least s space.
            assert(ret >= s);

            // Check that we asked for an amount of space divisible
            // by the alignment requirement.
            assert((ret % align_req) == 0);

            m1.deallocate((void*)ret, s, align_req);

            std::pair<char*, std::size_t> expect((char*)ret, ret);
            assert(expect == Alloc1::deallocate_called);

            // reset
            Alloc1::allocate_called = false;
            Alloc1::deallocate_called = std::pair<char*, std::size_t>(0, 0);
            align_req *= 2;
        }
    }
}
#else /* _LIBCPP_STD_VER <= 11 */
int main() {}
#endif /* _LIBCPP_STD_VER > 11 */
