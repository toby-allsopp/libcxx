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

// ~monotonic_buffer_resource();

#include <experimental/memory_resource>
#include <type_traits>
#include <cassert>

#include "test_memory_resource.hpp"

namespace ex = std::experimental::pmr;

int main() {
  using Res = TestResource;
  Res R1;
  AllocController &P = R1.getController();

  {
    ex::monotonic_buffer_resource res(&R1);
    res.allocate(1, 1);
    assert(P.alive == 1);
    assert(P.alloc_count == 1);
    assert(P.dealloc_count == 0);
    assert(P.last_alloc_size > 1);
    while (P.alive == 1)
      res.allocate(1);
  }
  assert(P.alive == 0);
  assert(P.alloc_count == 2);
  assert(P.dealloc_count == 2);
  P.reset();
  {
    const size_t S = 1024;
    alignas(std::max_align_t) char Buff[S];
    ex::monotonic_buffer_resource res(Buff, S, &R1);
    res.allocate(1024, alignof(std::max_align_t));
    assert(P.alloc_count == 0);
    assert(P.dealloc_count == 0);

    res.allocate(1);
    assert(P.alive == 1);
    assert(P.alloc_count == 1);
    assert(P.dealloc_count == 0);
  }
  assert(P.alive == 0);
  assert(P.alloc_count == 1);
  assert(P.dealloc_count == 1);
  P.reset();
}
