//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/memory_resource>

// Check that memory_resource is not constructible because it is a abstract
// class.

#include <experimental/memory_resource>

namespace ex = std::experimental::pmr;

int main()
{
    ex::memory_resource m; // expected-error {{variable type 'ex::memory_resource' is an abstract class}}
    // expected-note@experimental/memory_resource:* {{unimplemented pure virtual method 'do_allocate' in 'memory_resource'}}
    // expected-note@experimental/memory_resource:* {{unimplemented pure virtual method 'do_deallocate' in 'memory_resource'}}
    // expected-note@experimental/memory_resource:* {{unimplemented pure virtual method 'do_is_equal' in 'memory_resource'}}
}
