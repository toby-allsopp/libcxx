//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// UNSUPPORTED: c++98, c++03

// <experimental/memory_resource>

// monotonic_buffer_resource(monotonic_buffer_resource*);
// monotonic_buffer_resource(size_t initial_size, monotonic_buffer_resource*);

#include <experimental/memory_resource>
#include <cassert>

#include "test_memory_resource.hpp"

namespace ex = std::experimental::pmr;

int main() {
  using Res = TestResource;
  Res R1, R2;
  AllocController &P1 = R1.getController();
  AllocController &P2 = R2.getController();
  {
    ex::monotonic_buffer_resource res(&R1);
    ex::monotonic_buffer_resource res2(&R2);
    assert(res.upstream_resource() == &R1);
    assert(res2.upstream_resource() == &R2);
    assert(P1.alive == 0);
    assert(P2.alive == 0);
  }
  {
    ex::monotonic_buffer_resource res(42, &R1);

    assert(res.upstream_resource() == &R1);

    assert(P1.alive == 0);
    assert(P2.alive == 0);
    void* mem1 = res.allocate(1, 1);
    assert(P1.last_alloc_size >= 42);
    const size_t default_alloc_size = P1.last_alloc_size;
    assert(P1.alive == 1);
    res.deallocate(mem1, 1, 1);

    const size_t init_size = default_alloc_size + 42;
    ex::monotonic_buffer_resource res2(init_size, &R2);
    assert(res2.upstream_resource() == &R2);
    void* mem2 = res2.allocate(1, 1);
    assert(P2.last_alloc_size >= init_size);
    assert(P2.alive == 1);
    res2.deallocate(mem2, 1, 1);
  }
}
