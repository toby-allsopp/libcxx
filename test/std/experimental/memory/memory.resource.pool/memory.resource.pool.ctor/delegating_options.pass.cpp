//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/memory_resource>

// unsynchronized_pool_resource(pool_options opt)
//     : unsynchronized_pool_resource(opt, get_default_resource())
// synchronized_pool_resource(pool_options opt)
//     : synchronized_pool_resource(opt, get_default_resource())

#include <experimental/memory_resource>
#include <cassert>
#include "dummy_memory_resource.hpp"

namespace ex = std::experimental::pmr;
typedef dummy_resource D;

template <class R>
void test()
{
    ex::pool_options p;
    p.max_blocks_per_chunk = 1;
    p.largest_required_pool_block = 0;
    {
        R r(p);
        ex::pool_options ret = r.options();
        assert(ret.max_blocks_per_chunk == 1);
        assert(ret.largest_required_pool_block != 0);
        assert(r.upstream_resource());
        assert(*r.upstream_resource() == *ex::get_default_resource());
    }
}

int main()
{
    test<ex::unsynchronized_pool_resource>();
    test<ex::synchronized_pool_resource>();
}
