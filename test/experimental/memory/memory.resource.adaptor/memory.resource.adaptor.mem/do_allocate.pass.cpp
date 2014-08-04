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

// void * do_allocate(size_t size, size_t align)


#include <experimental/memory_resource>
#include <type_traits>
#include <memory>
#include <cassert>
#include "allocators.h"


namespace ex = std::experimental::pmr;

void check_alignment()
{
    typedef std::allocator<char> Alloc1;
    typedef ex::resource_adaptor<Alloc1> R1;
    {
        // Assumption required for testing
        static_assert(
            std::is_same<R1::allocator_type, Alloc1>::value
          , ""
          );
    }
    // Try allocating for a bunch of different sizes and alignments.
    // Ensure that we always get an aligned pointer.
    for (std::size_t s = 0; s < 5012; ++s)
    {
        std::size_t align_req = 1;
        while (align_req <= alignof(std::max_align_t))
        {
            Alloc1 const a;
            R1 r(a);
            ex::memory_resource & m1 = r;

            void * ret = m1.allocate(s, align_req);
            assert(((std::size_t)ret % align_req) == 0);
            void * ret_cp = ret;
            std::size_t space = 10000000;
            assert(ret == std::align(align_req, s, ret_cp, space));
            // reset
            align_req *= 2;
        }
    }
}

void check_align_called()
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

            // reset
            Alloc1::allocate_called = 0;
            align_req *= 2;
        }
    }
}

int main()
{
    check_alignment();
    check_align_called();
}
