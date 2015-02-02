//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/memory_resource>

// struct pool_options

#include <experimental/memory_resource>
#include <cassert>

namespace ex = std::experimental::pmr;

int main()
{
    {
        ex::pool_options p;
        assert(p.max_blocks_per_chunk == 0);
        assert(p.largest_required_pool_block == 0);
    }
    {
        ex::pool_options p{1, 2};
        assert(p.max_blocks_per_chunk == 1);
        assert(p.largest_required_pool_block == 2);
    }
}

