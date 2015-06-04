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

#include "invoke_support.hpp"
#include "test_macros.h"

////////////////////////////////////////////////////////////////////////////////
//                          Bullets 1 and 2
////////////////////////////////////////////////////////////////////////////////

/// The core assertion method for bullets 1 and 2. Assert that the return type
/// of __invoke matches Expect and the returned value has the expected value.
template <class ClassType, class Expect, class RawFunc, class RawClass>
void bullet_one_and_two_assert(RawFunc& Ptr, RawClass& ref)
{
    int const id = 42;
    // Use decltype to deduce the return type of __invoke. Calculate the
    // unqualified resulting type that can be used to store the result of __invoke.
    typedef decltype(std::__invoke(Ptr, ValueCast<ClassType>(ref))) ResultType;
    typedef typename RawType<ResultType>::type RawResultType;

    // Call __invoke and store the result. Assert that the result matches the
    // expected result by constructing an instance of the result type and
    // comparing it for equality.
    RawResultType res = std::__invoke(Ptr, ValueCast<ClassType>(ref));
    typedef typename RawType<Expect>::type RawExpect;
    assert(res == RawExpect(id));

     // Check that the return type deduced by decltype(...) matches the expected
    // return type.
    static_assert((std::is_same<ResultType, Expect>::value), "");

    // Check that the return type calculated by __invoke_return matches the
    // expected return type exactly.
    typedef typename __invoke_return<RawFunc, ClassType>::type InvokeReturnType;
    static_assert((std::is_same<InvokeReturnType, Expect>::value), "");
}


template <class ClassType, class A1, class Expect, class RawFunc, class RawClass>
void bullet_one_and_two_assert(RawFunc& Ptr, RawClass& ref)
{
    const int id = 42;
    typedef typename RawType<A1>::type R1;
    R1 a1(1);

    typedef decltype(std::__invoke(Ptr, ValueCast<ClassType>(ref), ValueCast<A1>(a1))) ResultType;
    typedef typename RawType<ResultType>::type RawResultType;

    RawResultType res = std::__invoke(Ptr, ValueCast<ClassType>(ref), ValueCast<A1>(a1));
    typedef typename RawType<Expect>::type RawExpect;
    assert(res == RawExpect(id, GetValue(a1)));

    static_assert((std::is_same<ResultType, Expect>::value), "");

    typedef typename __invoke_return<RawFunc, ClassType, A1>::type InvokeReturnType;
    static_assert((std::is_same<InvokeReturnType, Expect>::value), "");
}

template <class ClassType, class A1, class A2, class Expect, class RawFunc, class RawClass>
void bullet_one_and_two_assert(RawFunc& Ptr, RawClass& ref)
{
    const int id = 42;
    typedef typename RawType<A1>::type R1;
    typedef typename RawType<A2>::type R2;
    R1 a1(1);
    R2 a2(2);

    typedef decltype(std::__invoke(Ptr, ValueCast<ClassType>(ref), ValueCast<A1>(a1),
                                   ValueCast<A2>(a2))) ResultType;
    typedef typename RawType<ResultType>::type RawResultType;

    RawResultType res = std::__invoke(Ptr, ValueCast<ClassType>(ref), ValueCast<A1>(a1),
                                      ValueCast<A2>(a2));
    typedef typename RawType<Expect>::type RawExpect;
    assert(res == RawExpect(id, GetValue(a1), GetValue(a2)));

    static_assert((std::is_same<ResultType, Expect>::value), "");

    typedef typename __invoke_return<RawFunc, ClassType, A1, A2>::type InvokeReturnType;
    static_assert((std::is_same<InvokeReturnType, Expect>::value), "");
}

void generated_tests() {
#include "generated/bullet12-cxx03.inl"
#if TEST_STD_VER >= 11
#include "generated/bullet12-cxx11.inl"
#endif
}

int main() {
    generated_tests();
}