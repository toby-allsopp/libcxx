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

// class monotonic_buffer_resource

// void do_deallocate(void *p, size_t size, size_t align)

#include <experimental/memory_resource>
#include <type_traits>
#include <cassert>

#include "test_memory_resource.hpp"
#include "count_new.hpp"

namespace ex = std::experimental::pmr;

int main() {
  using Res = TestResource;
  Res R1;
  AllocController &P = R1.getController();
  {
    ex::monotonic_buffer_resource res(&R1);
    const size_t size = 2056;
    void *mem = res.allocate(size);
    assert(mem);
    assert(P.alive == 1);
    assert(P.alloc_count == 1);
    assert(P.dealloc_count == 0);
    assert(P.last_alloc_size > size);

    res.deallocate(mem, size);
    assert(P.alive == 1);
    assert(P.alloc_count == 1);
    assert(P.dealloc_count == 0);
  }
  assert(P.alive == 0);
  assert(P.alloc_count == 1);
  assert(P.dealloc_count == 1);
  assert(P.checkDeallocMatchesAlloc());
  P.reset();
}
