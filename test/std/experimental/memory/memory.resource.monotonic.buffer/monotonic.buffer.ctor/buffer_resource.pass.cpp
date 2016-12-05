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

// monotonic_buffer_resource(void *buffer, size_t buffer_size, monotonic_buffer_resource*);

#include <experimental/memory_resource>
#include <cassert>

#include "test_memory_resource.hpp"

namespace ex = std::experimental::pmr;

int main() {
  using Res = TestResource;
  auto in_range = [](void *p, char *b, char *e) {
    uintptr_t pint = reinterpret_cast<uintptr_t>(p);
    uintptr_t bint = reinterpret_cast<uintptr_t>(b);
    uintptr_t eint = reinterpret_cast<uintptr_t>(e);
    return pint >= bint && pint < eint;
  };
  {
    Res R1, R2;
    AllocController &P1 = R1.getController();
    AllocController &P2 = R2.getController();
    char Buff1[42];
    char Buff2[512];

    ex::monotonic_buffer_resource res(Buff1, 42, &R1);
    ex::monotonic_buffer_resource res2(Buff2, 512, &R2);
    assert(res.upstream_resource() == &R1);
    assert(res2.upstream_resource() == &R2);
    assert(P1.alive == 0);
    assert(P2.alive == 0);
  }
  {
    const size_t Size = 64;
    alignas(std::max_align_t) char Buff[Size];
    char *End = Buff + Size;
    Res R;
    auto &P = R.getController();
    ex::monotonic_buffer_resource res(Buff, Size, &R);
    assert(res.upstream_resource() == &R);
    assert(P.alive == 0);
    void *mem1 = res.allocate(Size - 4, 1);
    assert(in_range(mem1, Buff, End));
    assert(P.alive == 0);
    mem1 = res.allocate(4, 1);
    assert(in_range(mem1, Buff, End));
    assert(P.alive == 0);
    mem1 = res.allocate(1, 1);
    assert(P.alive == 1);
    assert(!in_range(mem1, Buff, End));
  }
  {
    const size_t Size = 512;
    alignas(std::max_align_t) char Buff[Size];
    char *End = Buff + Size;
    Res R;
    auto &P = R.getController();
    ex::monotonic_buffer_resource res(Buff, Size, &R);
    assert(res.upstream_resource() == &R);
    assert(P.alive == 0);
    void *mem1 = res.allocate(Size + 1, 8);
    assert(!in_range(mem1, Buff, End));
    assert(P.alive == 1);
    assert(P.last_alloc_size >= Size + 1);
    assert(P.last_alloc_align >= 8);
  }
}
