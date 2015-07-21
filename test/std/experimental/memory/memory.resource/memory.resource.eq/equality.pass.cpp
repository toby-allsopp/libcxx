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
// TESTING bool operator==(memory_resource const&, memory_resource const&) noexcept;
//         bool operator!=(memory_resource const&, memory_resource const&) noexcept;
//
// Concerns:
//   A) The equality operators are properly marked noexcept.
//   B) The equality operators do not call `is_equal` if '&LHS == &RHS'.
//   C) The equality operators call 'LHS.is_equal(RHS)' if '&LHS != &RHS'.
//
// Plan:
//  1) Check concern A by calling the equality operators within a noexcept
//     expression. Assert that the operators are marked noexcept.
//
//  2) Check concern B by calling the equality operators with the same object
//     on both sides. Assert that the objects are "equal" and that 'is_equal'
//     is never called.
//
//  3) Check concern C by calling the equality operators with different and
//     UNEQUAL objects on either side. Assert that 'is_equal' is called on the
//     LHS object and not the RHS object. Assert that the objects don't compare equal.
//
//  4) Check concern C by calling the equality operators with different and
//     EQUAL objects on either side. Assert that 'is_equal' is called on the
//     LHS object and not the RHS object. Assert that the objects compare equal.


#include <experimental/memory_resource>
#include <type_traits>
#include <cassert>

#include "test_memory_resource.hpp"

using std::experimental::pmr::memory_resource;

int main()
{
    // Plan Part 1
    {
        memory_resource const* r1 = nullptr;
        memory_resource const* r2 = nullptr;
        static_assert(
            noexcept(*r1 == *r2)
          , "operator==(...) must be noexcept"
          );
        static_assert(
            noexcept(*r1 != *r2)
          , "operator!=(...) must be noexcept"
          );
    }
    // Plan Part 2
    {
        TestResource1 R1(1);
        auto& P1 = R1.getProvider();
        memory_resource const& M1 = R1;
        memory_resource const& M2 = R1;

        assert(M1 == M2);
        assert((M1 != M2) == false);
        assert(P1.checkIsEqualCalledEq(0));
    }
    // Plan Part 3
    {
        TestResource1 R1(1);
        auto& P1 = R1.getProvider();
        memory_resource const& M1 = R1;

        TestResource1 R2(2);
        auto& P2 = R2.getProvider();
        memory_resource const& M2 = R2;

        assert((M1 == M2) == false);
        assert(P1.checkIsEqualCalledEq(1));
        assert(P2.checkIsEqualCalledEq(0));

        assert(M1 != M2);
        assert(P1.checkIsEqualCalledEq(2));
        assert(P2.checkIsEqualCalledEq(0));

        assert((M2 == M1) == false);
        assert(P1.checkIsEqualCalledEq(2));
        assert(P2.checkIsEqualCalledEq(1));

        assert(M2 != M1);
        assert(P1.checkIsEqualCalledEq(2));
        assert(P2.checkIsEqualCalledEq(2));
    }
    // Plan Part 4
    {
        TestResource1 R1(1);
        auto& P1 = R1.getProvider();
        memory_resource const& M1 = R1;

        TestResource1 R2(1);
        auto& P2 = R2.getProvider();
        memory_resource const& M2 = R2;

        assert(M1 == M2);
        assert(P1.checkIsEqualCalledEq(1));
        assert(P2.checkIsEqualCalledEq(0));

        assert((M1 != M2) == false);
        assert(P1.checkIsEqualCalledEq(2));
        assert(P2.checkIsEqualCalledEq(0));

        assert(M2 == M1);
        assert(P1.checkIsEqualCalledEq(2));
        assert(P2.checkIsEqualCalledEq(1));

        assert((M2 != M1) == false);
        assert(P1.checkIsEqualCalledEq(2));
        assert(P2.checkIsEqualCalledEq(2));
    }
}
