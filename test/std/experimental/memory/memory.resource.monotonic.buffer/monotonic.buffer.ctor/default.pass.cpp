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

// monotonic_buffer_resource();

#include <experimental/memory_resource>
#include <cassert>

#include "test_memory_resource.hpp"

namespace ex = std::experimental::pmr;

int main() {
  using Res = TestResource;
  {
    Res R1;
    auto *default_res = ex::get_default_resource();
    assert(default_res == ex::new_delete_resource());

    ex::monotonic_buffer_resource res;
    assert(res.upstream_resource() == default_res);

    ex::set_default_resource(&R1);
    ex::monotonic_buffer_resource res1;
    assert(res1.upstream_resource() == &R1);
    assert(res1.upstream_resource() != default_res);
    assert(res.upstream_resource() != &R1);
  }
}
