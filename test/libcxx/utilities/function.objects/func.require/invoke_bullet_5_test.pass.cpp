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
//                              Bullets 5
////////////////////////////////////////////////////////////////////////////////

/// The core assertion that checks the outcome of __invoke for bullet 5.
template <class Functor, class Expect, class RawFunctor>
void bullet_five_assert(RawFunctor& fn)
{
    int const id = 42;
    // Use decltype to deduce the return type of __invoke. Calculate the
    // unqualified resulting type that can be used to store the result of __invoke.
    typedef TestDecltype(std::__invoke(ValueCast<Functor>(fn))) ResultType;
    typedef typename RawType<ResultType>::type RawResult;

    // Call __invoke and store the result. Assert that the result matches the
    // expected result by constructing an instance of the result type and
    // comparing it for equality.
    RawResult res = std::__invoke(ValueCast<Functor>(fn));
    typedef typename RawType<Expect>::type RawExpect;
    RawExpect expect(id);
    assert(res == expect);

    // Check that the return type deduced by TestDecltype...) matches the expected
    // return type.
    PrintAssert<std::is_same<ResultType, Expect> > p;
    static_assert((std::is_same<ResultType, Expect>::value), "");

    // Check that the return type calculated by __invoke_return matches the
    // expected return type exactly.
    typedef typename __invoke_return<Functor>::type InvokeReturnType;
    static_assert((std::is_same<InvokeReturnType, Expect>::value), "");
}

template <class Functor, class A1, class Expect, class RawFunctor>
void bullet_five_assert(RawFunctor& fn)
{
    int const id = 42;
    typedef typename RawType<A1>::type R1;
    R1 a1(1);

    typedef TestDecltype(std::__invoke(ValueCast<Functor>(fn), ValueCast<A1>(a1))) ResultType;
    typedef typename RawType<ResultType>::type RawResult;

    RawResult res = std::__invoke(ValueCast<Functor>(fn), ValueCast<A1>(a1));
    typedef typename RawType<Expect>::type RawExpect;
    RawExpect expected(id, GetValue(a1));
    assert(res == expected);

    static_assert((std::is_same<ResultType, Expect>::value), "");

    typedef typename __invoke_return<Functor, A1>::type InvokeReturnType;
    static_assert((std::is_same<InvokeReturnType, Expect>::value), "");
}

template <class Functor, class A1, class A2, class Expect, class RawFunctor>
void bullet_five_assert(RawFunctor& fn)
{
    int const id = 42;
    typedef typename RawType<A1>::type R1;
    typedef typename RawType<A2>::type R2;
    R1 a1(1);
    R2 a2(2);

    typedef TestDecltype(std::__invoke(ValueCast<Functor>(fn), ValueCast<A1>(a1), ValueCast<A2>(a2))) ResultType;
    typedef typename RawType<ResultType>::type RawResult;

    RawResult res = std::__invoke(ValueCast<Functor>(fn), ValueCast<A1>(a1), ValueCast<A2>(a2));
    typedef typename RawType<Expect>::type RawExpect;
    RawExpect expected(id, GetValue(a1), GetValue(a2));
    assert(res == expected);

    static_assert((std::is_same<ResultType, Expect>::value), "");

    typedef typename __invoke_return<Functor, A1, A2>::type InvokeReturnType;
    static_assert((std::is_same<InvokeReturnType, Expect>::value), "");
}

template <class Functor, class A1, class A2, class A3, class Expect, class RawFunctor>
void bullet_five_assert(RawFunctor& fn)
{
    typedef typename RawType<A1>::type R1;
    typedef typename RawType<A2>::type R2;
    typedef typename RawType<A3>::type R3;
    int const id = 42;
    R1 a1(1);
    R2 a2(2);
    R3 a3(3);

    typedef TestDecltype(std::__invoke(ValueCast<Functor>(fn), ValueCast<A1>(a1),
                                   ValueCast<A2>(a2), ValueCast<A3>(a3))) ResultType;
    typedef typename RawType<ResultType>::type RawResult;

    RawResult res = std::__invoke(ValueCast<Functor>(fn), ValueCast<A1>(a1),
                                  ValueCast<A2>(a2), ValueCast<A3>(a3));
    typedef typename RawType<Expect>::type RawExpect;
    RawExpect expected(id, GetValue(a1), GetValue(a2), GetValue(a3));
    assert(res == expected);

    static_assert((std::is_same<ResultType, Expect>::value), "");

    typedef typename __invoke_return<Functor, A1, A2, A3>::type
        InvokeReturnType;
    static_assert((std::is_same<InvokeReturnType, Expect>::value), "");
}

void generated_tests()
{
#include "generated/bullet5-cxx03.inl"
#if TEST_STD_VER >= 11
#include "generated/bullet5-cxx11.inl"
#endif
}

int main() {
    generated_tests();
}