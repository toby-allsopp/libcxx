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

// monotonic_buffer_resource(monotonic_buffer_resource const&) = delete;
// monotonic_buffer_resource& operator=(monotonic_buffer_resource const&) = delete;

#include <experimental/memory_resource>
#include <type_traits>
#include <cassert>

#include "test_memory_resource.hpp"

namespace ex = std::experimental::pmr;

int main() {
  using MBR = ex::monotonic_buffer_resource;
  static_assert(!std::is_copy_constructible<MBR>::value, "");
  static_assert(!std::is_move_constructible<MBR>::value, "");
  static_assert(!std::is_copy_assignable<MBR>::value, "");
  static_assert(!std::is_move_assignable<MBR>::value, "");
}
