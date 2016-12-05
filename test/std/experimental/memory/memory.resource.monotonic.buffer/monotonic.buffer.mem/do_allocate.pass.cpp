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

// void *do_allocate(size_t size, size_t align)

#include <experimental/memory_resource>
#include <type_traits>
#include <cassert>

#include "test_memory_resource.hpp"
#include "count_new.hpp"

namespace ex = std::experimental::pmr;

void test_contiguous_allocation() {
  using Res = TestResource;
  Res R1;
  AllocController &P = R1.getController();

  {
    const int initial_size = 2056;
    ex::monotonic_buffer_resource res(initial_size, &R1);
    void *last_ptr = res.allocate(1, 1);
    int last_size = 1;
    int rem_size = initial_size - 1;
    for (int i=1; rem_size - i >= 0; ++i) {
      void *new_ptr = res.allocate(i, 1);
      assert(new_ptr == (static_cast<char*>(last_ptr) + last_size));
      last_ptr = new_ptr;
      last_size = i;
      rem_size -= i;
      if (i == 64)
        i = 0;
    }
    assert(P.alive == 1);
    void *new_ptr = res.allocate(65, 1);
    assert(P.alive >= 2);
    assert(new_ptr != (static_cast<char*>(last_ptr) + 1));
  }
  assert(P.alive == 0);
  P.reset();
}


void test_correct_alignment() {
  using Res = TestResource;
  Res R1;
  AllocController &P = R1.getController();

  {
    ex::monotonic_buffer_resource res(&R1);
    for (int i=0; i < 3; ++i) {
      for (size_t align=1; align <= alignof(std::max_align_t); align *= 2) {
        void *ptr = res.allocate(1, align);
        assert(ptr);
        assert(reinterpret_cast<uintptr_t>(ptr) % align == 0);
      }
    }
  }
  assert(P.alive == 0);
  P.reset();
}

int main() {
  test_contiguous_allocation();
  test_correct_alignment();
}
