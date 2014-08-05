//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/memory_resource>

// unsynchronized_pool_resource()
//     : unsynchronized_pool_resource(pool_options(), get_default_resource())
// synchronized_pool_resource()
//     : synchronized_pool_resource(pool_options(), get_default_resource())


#include <experimental/memory_resource>
#include <cassert>

namespace ex = std::experimental::pmr;

template <class R>
void test()
{
    {
        R r;

        assert(r.upstream_resource());
        assert(*r.upstream_resource() == *ex::get_default_resource());

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