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

//------------------------------------------------------------------------------
// TESTING void * memory_resource::allocate(size_t, size_t = max_align)
//
// Concerns:
//  A) 'memory_resource' contains a member 'allocate' with the required
//     signature, including the default alignment parameter.
//  B) The return type of 'allocate' is 'void*'.
//  C) 'allocate' is not marked as 'noexcept'.
//  D) Invoking 'allocate' invokes 'do_allocate' with the same arguments.
//  E) If 'do_allocate' throws then 'allocate' propagates that exception.
//
// Plan:
//  1) Check concerns A and B by calling 'allocate' within a decltype expression
//     and check that the return type is 'void*'.
//
//  2) Check concerns A and C by calling 'allocate' within a noexcept expression
//     and check that the expression is not noexcept.
//
//  3) Check concern A and C by creating a pointer, 'res', of type
//     'memory_resource' which points to an instance of 'TestResource'.
//
//     3a) Allocate memory of size 's' and alignment 'a' using 'res.allocate(s, a)'
//         and store it into a pointer 'p'. Check that 'TestResource::do_allocate'
//         was called with 's' and 'a' and that it returned 'p'.
//
//     3c) Allocate memory of size 's' using 'res->allocate(s)' without
//         specifying alignment and store it into pointer 'p'. Check that
//         'TestResource::do_allocate' was called with 's' and
//         the max alignment and returned 'p'.
//
//  4) Check concern E by creating a 'memory_resource' pointer 'p1' which points
//     to an object of type 'AllocThrowsResource'. Call 'p1->allocate(...)' and
//     check that the expected exception is thrown through 'allocate'.


#include <experimental/memory_resource>
#include <type_traits>
#include <cassert>

#include "test_memory_resource.hpp"

using std::experimental::pmr::memory_resource;

int main()
{
    TestResource R(42);
    auto& P = R.getProvider();
    memory_resource& M = R;
    {
        static_assert(
            std::is_same<decltype(M.allocate(0, 0)), void*>::value
          , "Must be void*"
          );
        static_assert(
            std::is_same<decltype(M.allocate(0)), void*>::value
          , "Must be void*"
          );
    }
    {
        static_assert(
            ! noexcept(M.allocate(0, 0))
          , "Must not be noexcept."
          );
        static_assert(
            ! noexcept(M.allocate(0))
          , "Must not be noexcept."
          );
    }
    {
        int s = 42;
        int a = 64;
        void* p = M.allocate(s, a);
        assert(P.alloc_count == 1);
        assert(P.checkAlloc(p, s, a));

        s = 128;
        a = MaxAlignV;
        p = M.allocate(s);
        assert(P.alloc_count == 2);
        assert(P.checkAlloc(p, s, a));
    }
    {
        AllocThrowsResource R2;
        memory_resource& M2 = R2;
        try {
            M2.allocate(42);
            assert(false);
        } catch (TestException const&) {
            // do nothing.
        } catch (...) {
            assert(false);
        }
    }
}
