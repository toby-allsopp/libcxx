//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/memory_resource>

// unsynchronized_pool_resource::release()
// synchronized_pool_resource::release()

#include <experimental/memory_resource>
#include <cassert>
#include "dummy_memory_resource.hpp"

using namespace std::experimental::pmr;

typedef dummy_resource D;

// Test that release gets called by checking that the memory gets freed.
template <class Res>
void test_release_allocate()
{
    D::clear();
    D d1(1);
    memory_resource * m1 = &d1;

    std::size_t req_size;
    std::size_t req_align;
    void * req_ptr;
    {
        pool_options opts;
        Res r(opts, m1);

        void * p = r.allocate(1, 1);
        assert(p);
        assert(D::alive == 1);
        assert(D::alloc_count == 1);
        assert(D::last_size > 1);
        assert(D::last_align > 1);
        assert(D::last_pointer);

        req_size = D::last_size;
        D::last_size = 0;

        req_align = D::last_align;
        D::last_align = 0;

        req_ptr = D::last_pointer;
        D::last_pointer = nullptr;

        r.release();
        assert(D::alive == 0);
        assert(D::dealloc_count == 1);
        assert(D::last_size == req_size);
        assert(D::last_align == req_align);
        assert(D::last_pointer == req_ptr);
    }
    assert(D::alive == 0);
    assert(D::dealloc_count == 1);
    assert(D::last_size == req_size);
    assert(D::last_align == req_align);
    assert(D::last_pointer == req_ptr);
}

template <class Res>
void test_release_no_allocate()
{
    D::clear();
    D d1(1);
    memory_resource * m1 = &d1;

    {
        pool_options opts;
        Res r(opts, m1);

        assert(D::alive == 0);
        assert(D::alloc_count == 0);

        r.release();

        assert(D::alive == 0);
        assert(D::dealloc_count == 0);
    }
    assert(D::alive == 0);
    assert(D::dealloc_count == 0);
}

int main()
{
    test_release_allocate<unsynchronized_pool_resource>();
    test_release_allocate<synchronized_pool_resource>();

    test_release_no_allocate<unsynchronized_pool_resource>();
    test_release_no_allocate<synchronized_pool_resource>();
}
