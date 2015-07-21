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
// TESTING memory_resource * set_default_resource(memory_resource*) noexcept;
//
// Concerns:
//  A) 'set_default_resource()' returns the previous default resource.
//  B) 'set_default_resource(T*)' update the default resource to be 'T*' and
//      subsequent calls to 'get_default_resource()' return 'T*'.
//  C) 'set_default_resource(null)' updates the default resource to be
//     'new_delete_resource()'. and
//      subsequent calls to 'get_default_resource()' return 'T*'.
//  D) 'get_default_resource()' is marked as noexcept.
//
// Plan:
//  1) Check concerns A and B by calling 'get_default_resource()' multiple
//     times and checking that the returned pointer is non-null and the same as
//     new_delete_resource()'.
//
//  2) Check concerns A and B and C by setting a new default resource using
//     'set_default_resource(...)'. Then call 'get_default_resource()' multiple
//     times and assert that the value returned matches the value set.
//
//      Update the default resource again using 'set_default_resource(nullptr)'
//      and check that the value  returned by 'get_default_resource()' is the
//      same as 'new_delete_resource()'.
//
//   3) Check concern D by calling 'get_default_resource()' in a noexcept expression
//      and checking that the expression is noexcept.

#include <experimental/memory_resource>
#include <cassert>

#include "test_memory_resource.hpp"

using namespace std::experimental::pmr;

int main() {
    { // Test Part 1
        memory_resource* p = get_default_resource();
        assert(p != nullptr);
        assert(p == new_delete_resource());
        assert(p == get_default_resource());
    }
    { // Test Part 2
        TestResource R;
        memory_resource* expect = &R;
        memory_resource* old = set_default_resource(expect);
        assert(old != nullptr);
        assert(old == new_delete_resource());

        memory_resource* p = get_default_resource();
        assert(p != nullptr);
        assert(p == expect);
        assert(p == get_default_resource());

        old = set_default_resource(nullptr);
        assert(old == expect);
        p = get_default_resource();
        assert(p != nullptr);
        assert(p == new_delete_resource());
        assert(p == get_default_resource());
    }
    { // Test Part 3
        static_assert(
            noexcept(get_default_resource())
          , "get_default_resource() must be noexcept"
          );
    }
}
