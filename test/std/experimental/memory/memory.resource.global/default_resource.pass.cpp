//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/memory_resource>

// UNSUPPORTED: c++98, c++03

//-----------------------------------------------------------------------------
// TESTING memory_resource * get_default_resource() noexcept;
//         memory_resource * set_default_resource(memory_resource*) noexcept;
//
// Concerns:
//  A) 'get_default_resource()' returns a non-null memory_resource pointer.
//  B) 'get_default_resource()' returns the value set by the last call to
//     'set_default_resource(...)' and 'new_delete_resource()' if no call
//     to 'set_default_resource(...)' has occurred.
//  C) 'set_default_resource(...)' returns the previous value of the default
//     resource.
//  D) 'set_default_resource(T* p)' for a non-null 'p' sets the default resource
//     to be 'p'.
//  E) 'set_default_resource(null)' sets the default resource to
//     'new_delete_resource()'.
//  F) 'get_default_resource' and 'set_default_resource' are noexcept.
//
// Plan:
//  1) Check concerns A and B in the following manner.
//
//     1a) Create a pointer 'p' from the return value of 'get_default_resource()'.
//         Check that 'p' is not null and is the same as 'new_delete_resource()'.
//     1b) Call 'get_default_resource()' again and check that it returns a pointer
//         that is equal to 'p'
//
//  2) Check concerns A, B, C and D in the following manner:
//
//     2a) Create a TestResource 't' that derives from memory resource.
//     2b) Call 'set_default_resource(&t)' and check that the returned
//         value is the same as 'new_delete_resource()'.
//     2c) Create a pointer 'p' from the return valeu of 'get_default_resource()'
//         Check that 'p == &t'.
//     2d) Call 'get_default_resource()' again and check that the same value
//         is returned.
//
//  3) Check concerns A, B, C and E in the following manner:
//
//     3a) Call 'set_default_resource(nullptr)' and check that the returned
//         value is the same as 't' from 2a.
//     3b) Create a pointer 'p' from the return value of 'get_default_resource()'
//         and check that 'p' is the same as 'new_delete_resource()'.
//     3c) Call 'get_default_resource()' again and check that the same value
//         is returned.
//
//  4) Check concern F by calling 'get_default_resource()' and
//     'set_default_resource()' in a noexcept expression and assert
//      that the expression is noexcept.

#include <experimental/memory_resource>
#include <cassert>

#include "test_memory_resource.hpp"

using namespace std::experimental::pmr;

int main() {
    TestResource R;
    { // Test Part 1
        memory_resource* p = get_default_resource();
        assert(p != nullptr);
        assert(p == new_delete_resource());
        assert(p == get_default_resource());
    }
    { // Test Part 2
        memory_resource *expect = &R;
        memory_resource *old = set_default_resource(expect);
        assert(old != nullptr);
        assert(old == new_delete_resource());

        memory_resource *p = get_default_resource();
        assert(p != nullptr);
        assert(p == expect);
        assert(p == get_default_resource());
    }
    { // Test Part 3
        memory_resource* old = set_default_resource(nullptr);
        assert(old == &R);
        memory_resource* p = get_default_resource();
        assert(p != nullptr);
        assert(p == new_delete_resource());
        assert(p == get_default_resource());
    }
    { // Test Part 4
        static_assert(
            noexcept(get_default_resource())
          , "get_default_resource() must be noexcept"
          );
        static_assert(
            noexcept(set_default_resource(nullptr))
          , "set_default_resource() must be noexcept"
          );
    }
}
