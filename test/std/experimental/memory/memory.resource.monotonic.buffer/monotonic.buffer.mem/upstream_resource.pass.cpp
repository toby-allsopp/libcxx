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

// memory_resource *upstream_resource() const;

#include <experimental/memory_resource>
#include <type_traits>
#include <cassert>

#include "test_memory_resource.hpp"

namespace ex = std::experimental::pmr;

int main() {
  using Res = TestResource;
  Res R1;
  {
    ex::monotonic_buffer_resource res;
    assert(res.upstream_resource() == ex::get_default_resource());
    assert(ex::get_default_resource() == ex::new_delete_resource());

    Res R;
    ex::set_default_resource(&R);
    ex::monotonic_buffer_resource res2;
    assert(res2.upstream_resource() == &R);

    ex::set_default_resource(ex::new_delete_resource());
  }
  {
    Res R;
    const ex::monotonic_buffer_resource res(&R);
    assert(res.upstream_resource() == &R);
  }
}
