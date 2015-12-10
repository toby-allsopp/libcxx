//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// UNSUPPORTED: c++98, c++03

// <tuple>

// template <class... Types> class tuple;

// template <class TupleLike>
//   tuple(TupleLike&&);
// template <class Alloc, class TupleLike>
//   tuple(std::allocator_arg_t, Alloc const&, TupleLike&&);

// Check that the tuple-like copy/move ctors are properly disabled when the
// UTypes... constructor should be selected. See PR22806.

#include <tuple>
#include <memory>
#include <cassert>

#include "tracked_value.h"

int main()
{
    { // rvalue reference
        TrackedValue v;
        std::tuple<TrackedValue> t1(v);
        // This selects the wrong constructor and constructs std::tuple<Tracked>&&
        // from a temporary.
        std::tuple<std::tuple<TrackedValue>&&> t2(std::move(t1));
        // This moves from the reference constructed from the temporary.
        std::tuple<std::tuple<TrackedValue>>  t3(std::move(t2));
    }
    { // const lvalue reference
        TrackedValue v;
        std::tuple<TrackedValue> t1(v);
        std::tuple<std::tuple<TrackedValue> const &> t2(t1);
        std::tuple<std::tuple<TrackedValue>>  t3(t2);
    }
    { // lvalue reference
        TrackedValue v;
        std::tuple<TrackedValue> t1(v);
        std::tuple<std::tuple<TrackedValue> &> t2(t1);
        std::tuple<std::tuple<TrackedValue>>  t3(t2);
    }
    { // rvalue reference via allocator ctor
        TrackedValue v;
        std::tuple<TrackedValue> t1(v);
        std::allocator<void> a;
        std::tuple<std::tuple<TrackedValue>&&> t2(std::allocator_arg, a, std::move(t1));
        std::tuple<std::tuple<TrackedValue>>  t3(std::move(t2));
    }
    { // const lvalue reference via allocator ctor
        TrackedValue v;
        std::tuple<TrackedValue> t1(v);
        std::allocator<void> a;
        std::tuple<std::tuple<TrackedValue> const &> t2(std::allocator_arg, a, t1);
        std::tuple<std::tuple<TrackedValue>>  t3(t2);
    }
    { // lvalue reference via allocator ctor
        TrackedValue v;
        std::tuple<TrackedValue> t1(v);
        std::allocator<void> a;
        std::tuple<std::tuple<TrackedValue> &> t2(std::allocator_arg, a, t1);
        std::tuple<std::tuple<TrackedValue>>  t3(t2);
    }
}
