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
// TESTING virtual bool is_equal(memory_resource const &) const noexcept
//
// Concerns:
//   A) 'memory_resource' provides a function 'is_equal' with the required
//      signature.
//   B) 'is_equal' is noexcept.
//   C) 'do_is_equal' is called using the same arguments passed to 'is_equal'
//      and the resulting value is returned.
//   D) 'do_is_equal' is called on the LHS object and not the RHS object.
//
// Plan:
//  1) Check A and B by calling 'is_equal' within a noexcept expression and
//     asserting that the expression is noexcept.
//
//  2) For two different types 'T1' and 'T2' that derive from 'memory_resource'
//     create objects of those types 't1' and 't2'. Create 'memory_resource'
//     pointers, 'p1' and 'p2' from 't1' and 't2'.
//
//     2a) Check that 'p1.is_equal(p2)' returns false and calls only 'p1.do_is_equal(p2)'.
//         Check that 'p2.is_equal(p1)' returns false and calls only 'p2.do_is_equal(p1)'.
//
//  3) For a type 'T' that derives from 'memory_resource' create objects 't1'
//     and 't2' with different values so that they will not compare equal.
//     Create 'memory_resource' pointers 'p1' and 'p2' from 't1' and 't2'.
//
//     3a) Check that 'p1.is_equal(p2)' returns false and calls only 'p1.do_is_equal(p2)'.
//         Check that 'p2.is_equal(p1)' returns false and calls only 'p2.do_is_equal(p1)'.
//
//  4) For a type 'T' that derives from 'memory_resource' create objects 't1'
//     and 't2' with the same values so that they will compare equal.
//     Create 'memory_resource' pointers 'p1' and 'p2' from 't1' and 't2'.
//
//     4a) Check that 'p1.is_equal(p2)' returns true and calls only 'p1.do_is_equal(p2)'.
//         Check that 'p2.is_equal(p1)' returns true and calls only 'p2.do_is_equal(p1)'.


#include <experimental/memory_resource>
#include <type_traits>
#include <cassert>
#include "test_memory_resource.hpp"

using std::experimental::pmr::memory_resource;

int main()
{
    {
        memory_resource const* r1 = nullptr;
        memory_resource const* r2 = nullptr;
        static_assert(
            noexcept(r1->is_equal(*r2))
          , "is_equal must be noexcept"
          );
    }
    {
        TestResource1 R1(1);
        auto& P1 = R1.getProvider();
        memory_resource const& M1 = R1;

        TestResource2 R2(1);
        auto& P2 = R2.getProvider();
        memory_resource const& M2 = R2;

        assert(M1.is_equal(M2) == false);
        assert(P1.checkIsEqualCalledEq(1));
        assert(P2.checkIsEqualCalledEq(0));

        assert(M2.is_equal(M1) == false);
        assert(P2.checkIsEqualCalledEq(1));
        assert(P1.checkIsEqualCalledEq(1));
    }
    {
        TestResource1 R1(1);
        auto& P1 = R1.getProvider();
        memory_resource const& M1 = R1;

        TestResource1 R2(2);
        auto& P2 = R2.getProvider();
        memory_resource const& M2 = R2;

        assert(M1.is_equal(M2) == false);
        assert(P1.checkIsEqualCalledEq(1));
        assert(P2.checkIsEqualCalledEq(0));

        assert(M2.is_equal(M1) == false);
        assert(P2.checkIsEqualCalledEq(1));
        assert(P1.checkIsEqualCalledEq(1));
    }
    {
        TestResource1 R1(1);
        auto& P1 = R1.getProvider();
        memory_resource const& M1 = R1;

        TestResource1 R2(1);
        auto& P2 = R2.getProvider();
        memory_resource const& M2 = R2;

        assert(M1.is_equal(M2) == true);
        assert(P1.checkIsEqualCalledEq(1));
        assert(P2.checkIsEqualCalledEq(0));

        assert(M2.is_equal(M1) == true);
        assert(P2.checkIsEqualCalledEq(1));
        assert(P1.checkIsEqualCalledEq(1));
    }
}
