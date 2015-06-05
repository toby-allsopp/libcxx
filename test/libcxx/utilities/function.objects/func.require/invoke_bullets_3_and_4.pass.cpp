//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//


/// NOTE: See invoke_support.hpp for a description of this test.
///
///============================================================================
///                           TEST PLAN
///----------------------------------------------------------------------------
///                       (Bullets 3 and 4)
/// Overview:
///     TODO
///----------------------------------------------------------------------------
/// Concerns:
///     TODO
///----------------------------------------------------------------------------
/// Plan:
///     TODO
#include <functional>
#include <type_traits>
#include <cassert>

#include "test_macros.h"
#include "invoke_support.hpp"

////////////////////////////////////////////////////////////////////////////////
//                          Bullets 3 and 4
////////////////////////////////////////////////////////////////////////////////

/// The core assertion that checks the outcome of __invoke for bullets 3 and 4.
template <class ClassType, class Expect, class MemObj, class Return, class RawClass>
void bullet_three_and_four_assert(Return MemObj::*Ptr, RawClass& ref)
{
    // Use decltype to deduce the return type of __invoke. Calculate the
    // unqualified resulting type that can be used to store the result of __invoke.
    typedef TestDecltype(std::__invoke(Ptr, ValueCast<ClassType>(ref))) ResultType;
    typedef typename RawType<ResultType>::type RawResult;

    // Call __invoke and store the result. Assert that the result matches the
    // expected result by constructing an instance of the result type and
    // comparing it for equality.
    RawResult res = std::__invoke(Ptr, ValueCast<ClassType>(ref));
    typedef typename RawType<Expect>::type RawExpect;
    assert(res == RawExpect(42));

    // Check that the return type deduced by decltype(...) matches the expected
    // return type.
    static_assert((std::is_same<ResultType, Expect>::value), "");

    // Check that the return type calculated by __invoke_return matches the
    // expected return type exactly.
    typedef typename __invoke_return<Return MemObj::*, ClassType>::type InvokeReturnType;
    static_assert((std::is_same<InvokeReturnType, Expect>::value), "");
}


void generated_tests() {
#include "generated/bullet34-cxx03.inl"
#if TEST_STD_VER >= 11
#include "generated/bullet34-cxx11.inl"
#endif
}

int main()
{
    generated_tests();
}
