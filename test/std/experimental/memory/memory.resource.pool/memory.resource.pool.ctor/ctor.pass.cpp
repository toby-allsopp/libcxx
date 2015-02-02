//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/memory_resource>

// unsynchronized_pool_resource(pool_options const &, memory_resource *)
//   synchronized_pool_resource(pool_options const &, memory_resource *)

#include <experimental/memory_resource>
#include <cassert>
#include "dummy_memory_resource.hpp"

using namespace std::experimental::pmr;

typedef dummy_resource D;

template <class Res>
void test()
{
    D d1(1);
    memory_resource * m1 = &d1;

    {
        pool_options opts;
        Res r(opts, m1);

        assert(r.upstream_resource());
        assert(*r.upstream_resource() == *m1);

        pool_options ret = r.options();
        assert(ret.max_blocks_per_chunk != 0);
        assert(ret.largest_required_pool_block != 0);
    }
    {
        pool_options opts;
        opts.max_blocks_per_chunk = 1;
        Res r(opts, m1);

        assert(r.upstream_resource());
        assert(*r.upstream_resource() == *m1);

        pool_options ret = r.options();
        assert(ret.max_blocks_per_chunk == 1);
        assert(ret.largest_required_pool_block != 0);
    }
}

int main()
{
    test<unsynchronized_pool_resource>();
    test<synchronized_pool_resource>();
}
