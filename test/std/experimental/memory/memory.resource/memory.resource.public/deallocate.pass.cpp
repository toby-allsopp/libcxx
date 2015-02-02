//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/memory_resource>

// void * memory_resource::deallocate(void *, size_t, size_t)

#include <experimental/memory_resource>
#include <type_traits>
#include <cassert>
#include "dummy_memory_resource.hpp"

namespace ex = std::experimental::pmr;

int main()
{
    typedef dummy_resource D;
    dummy_resource d;
    ex::memory_resource & mr1 = d;
    {
        static_assert(
            std::is_same<decltype(mr1.deallocate(nullptr, 0, 0)), void>::value
          , "Must be void"
          );
    }
    {
        int s = 42;
        int a = 3;
        void * p = std::malloc(s);
        mr1.deallocate(p, s, a);
        assert(D::dealloc_count == 1);
        assert(D::last_pointer == p);
        assert(D::last_size == s);
        assert(D::last_align == a);
    }
}

