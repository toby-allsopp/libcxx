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

// explicit monotonic_buffer_resource(size_t initial_size);

#include <experimental/memory_resource>
#include <type_traits>
#include <cassert>

#include "test_memory_resource.hpp"
#include "count_new.hpp"

namespace ex = std::experimental::pmr;

int main() {
  using Res = TestResource;
  {
    static_assert(
        !std::is_convertible<size_t, ex::monotonic_buffer_resource>::value, "");
    static_assert(
        std::is_constructible<ex::monotonic_buffer_resource, size_t>::value,
        "");
  }
  {
    Res R1;
    auto &C = R1.getController();
    auto *default_res = ex::get_default_resource();
    assert(default_res == ex::new_delete_resource());

    ex::monotonic_buffer_resource res(42);
    assert(res.upstream_resource() == default_res);
    void *mem = res.allocate(1, 1);
    assert(globalMemCounter.checkOutstandingNewEq(1));
    assert(globalMemCounter.checkLastNewSizeGreaterEq(42));
    const size_t default_init_size = globalMemCounter.last_new_size;

    const size_t custom_init_size = default_init_size + 42;
    ex::set_default_resource(&R1);
    ex::monotonic_buffer_resource res1(custom_init_size);
    assert(res1.upstream_resource() == &R1);
    assert(res1.upstream_resource() != default_res);
    {
      DisableAllocationGuard g;
      mem = res1.allocate(1, 0);
      assert(C.last_alloc_size >= default_init_size);
      assert(C.alive == 1);
    }
  }
}
