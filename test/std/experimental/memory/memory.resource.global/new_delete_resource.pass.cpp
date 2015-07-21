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
// TESTING memory_resource * new_delete_resource() noexcept
//
// Concerns:
//  A) 'new_delete_memory_resource()' returns a non-null pointer to a 'memory_resource' 'M'.
//  B) 'new_delete_memory_resource()' always returns the same pointer.
//  C) 'M.allocate(s, a)' calls '::operator new(s)' and returns that pointer.
//  D) 'M.deallocate(p, s, a)' calls '::operator delete(p)'.
//  E) 'M' only compares equal to itself. 'M.is_equal(Other)' will not invoke
//     'Other.is_equal(M)'.
//  F) 'new_delete_resource()' is marked as 'noexcept'.
//
// Plan:
//   1) Check concerns A, B and E by getting two pointers 'p1' and 'p2' from
//      calling 'new_deletee_memory_resource()' twice. Check that these pointers
//      have the same address and are not null.
//
//  2) Check concerns C and D by performing an allocation and deallocation with
//     'M'. Use 'globalMemCounter' to check that 'new' and 'delete' were invoked
//     by those operations with the correct arguments.
//
//  3) Check concern E by comparing 'M' to other 'memory_resource' objects
//     with different base classes. Check that 'M.is_equal(Other)' is always
//     false and it does not invoke 'Other.is_equal(M)'.
//
//  4) Check concern F by calling 'new_delete_resource()' in a noexcept expression
//     and check that the expression returns true.

#include <experimental/memory_resource>
#include <cassert>

#include "test_memory_resource.hpp"
#include "count_new.hpp"

using namespace std::experimental::pmr;

int main()
{
    { // Plan Part 1
        memory_resource* p1 = new_delete_resource();
        assert(p1 != nullptr);
        assert(p1->is_equal(*p1));

        memory_resource* p2 = new_delete_resource();
        assert(p2 != nullptr);
        assert(p1 == p2);
        assert(p1->is_equal(*p2));
        assert(p2->is_equal(*p1));
    }
    { // Plan part 2
        MemCounter& G = globalMemCounter;
        memory_resource& M = *new_delete_resource();
        void* p = M.allocate(1024);
        assert(p != nullptr);
        assert(G.checkOutstandingNewEq(1));
        assert(G.checkLastNewSizeEq(1024));

        M.deallocate(p, 1024);
        assert(G.checkOutstandingNewEq(0));
        assert(G.checkDeleteCalledEq(1));
    }
    { // Plan part 3
        memory_resource const& M = *new_delete_resource();
        TestResource R;
        auto& P = R.getProvider();
        memory_resource const& O = R;

        assert(M.is_equal(O) == false);
        assert(P.checkIsEqualCalledEq(0));
    }
    { // Plan Part 4
        static_assert(
            noexcept(new_delete_resource())
          , "new_delete_resource() must be noexcept"
          );
    }
}
