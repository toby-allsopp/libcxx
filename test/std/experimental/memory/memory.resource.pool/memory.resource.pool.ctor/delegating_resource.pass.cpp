//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/memory_resource>

// unsynchronized_pool_resource(memory_resource * res)
//     : unsynchronized_pool_resource(pool_options(), res)
// synchronized_pool_resource(memory_resource * res)
//     : synchronized_pool_resource(pool_options(), res)

#include <experimental/memory_resource>
#include <cassert>
#include "../../dummy_resource.hpp"

namespace ex = std::experimental::pmr;

template <class R>
void test()
{
    typedef dummy_resource D;

    D d(42);
    ex::memory_resource * m = &d;

    D const d2(100);
    ex::memory_resource const * m2 = &d2;
    {
        R r(m);

        assert(r.upstream_resource());
        assert(*r.upstream_resource() == *m);
        assert(!(*r.upstream_resource() == *m2));

        ex::pool_options ret = r.options();
        assert(ret.max_blocks_per_chunk != 0);
        assert(ret.largest_required_pool_block != 0);
    }
}

int main()
{
    test<ex::unsynchronized_pool_resource>();
    test<ex::synchronized_pool_resource>();
}
