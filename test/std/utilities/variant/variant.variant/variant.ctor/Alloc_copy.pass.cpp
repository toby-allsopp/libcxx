// -*- C++ -*-
//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// UNSUPPORTED: c++98, c++03, c++11, c++14

// <variant>

// template <class ...Types> class variant;

// template <class Alloc>
// variant(allocator_arg_t, Alloc const&, variant const&);


#include <variant>
#include <type_traits>
#include <cassert>
#include <iostream>

#include "test_macros.h"
#include "uses_alloc_types.hpp"

struct NonT {
  NonT(int v) : value(v) {}
  NonT(NonT const& o) : value(o.value) {}
  int value;
};
static_assert(!std::is_trivially_copy_constructible<NonT>::value, "");


struct NoCopy {
  NoCopy(NoCopy const&) = delete;
};

struct MoveOnly {
  MoveOnly(MoveOnly const&) = delete;
  MoveOnly(MoveOnly&&) = default;
};

struct MoveOnlyNT {
  MoveOnlyNT(MoveOnlyNT const&) = delete;
  MoveOnlyNT(MoveOnlyNT&&) {}
};

void test_copy_ctor_sfinae() {
    {
        using V = std::variant<int, long>;
        static_assert(std::is_constructible<V, std::allocator_arg_t const&,
            std::allocator<void> const&, V const&>::value, "");
    }
    {
        using V = std::variant<int, NoCopy>;
        static_assert(!std::is_constructible<V, std::allocator_arg_t const&,
            std::allocator<void> const&, V const&>::value, "");
    }
    {
        using V = std::variant<int, MoveOnly>;
        static_assert(!std::is_constructible<V, std::allocator_arg_t const&,
            std::allocator<void> const&, V const&>::value, "");
    }
    {
        using V = std::variant<int, MoveOnlyNT>;
        static_assert(!std::is_constructible<V, std::allocator_arg_t const&,
            std::allocator<void> const&, V const&>::value, "");
    }
}

void test_copy_ctor_basic()
{
    {
        std::variant<int> v(std::in_place_index<0>, 42);
        std::variant<int> v2(std::allocator_arg, std::allocator<void>{}, v);
        assert(v2.index() == 0);
        assert(std::get<0>(v2) == 42);
    }
    {
        std::variant<int, long> v(std::in_place_index<1>, 42);
        std::variant<int, long> v2(std::allocator_arg, std::allocator<void>{}, v);
        assert(v2.index() == 1);
        assert(std::get<1>(v2) == 42);
    }
    {
        std::variant<NonT> v(std::in_place_index<0>, 42);
        assert(v.index() == 0);
        std::variant<NonT> v2(std::allocator_arg, std::allocator<void>{}, v);
        assert(v2.index() == 0);
        assert(std::get<0>(v2).value == 42);
    }
    {
        std::variant<int, NonT> v(std::in_place_index<1>, 42);
        assert(v.index() == 1);
        std::variant<int, NonT> v2(std::allocator_arg, std::allocator<void>{}, v);
        assert(v2.index() == 1);
        assert(std::get<1>(v2).value == 42);
    }
}


void test_copy_ctor_uses_alloc()
{
    using A = std::allocator<void>;
    using A2 = std::allocator<int>;
    using UA1 = UsesAllocatorV1<A, 1>;
    using UA2 = UsesAllocatorV2<A, 1>;
    using UA3 = UsesAllocatorV3<A, 1>;
    using NUA = NotUsesAllocator<A, 1>;
    using V = std::variant<UA1, UA2, UA3, NUA>;
    const A a;
    const A2 a2;
    {
        V v(std::in_place_index<0>);
        V v2(std::allocator_arg, a, v);
        assert(v2.index() == 0);
        assert(checkConstruct<UA1 const&>(std::get<0>(v2), UA_AllocArg));
    }
    {
        V v(std::in_place_index<0>);
        V v2(std::allocator_arg, a2, v);
        assert(v2.index() == 0);
        assert(checkConstruct<UA1 const&>(std::get<0>(v2), UA_None));
    }
    {
        V v(std::in_place_index<1>);
        V v2(std::allocator_arg, a, v);
        assert(v2.index() == 1);
        assert(checkConstruct<UA2 const&>(std::get<1>(v2), UA_AllocLast));
    }
    {
        V v(std::in_place_index<1>);
        V v2(std::allocator_arg, a2, v);
        assert(v2.index() == 1);
        assert(checkConstruct<UA2 const&>(std::get<1>(v2), UA_None));
    }
    {
        V v(std::in_place_index<2>);
        V v2(std::allocator_arg, a, v);
        assert(v2.index() == 2);
        assert(checkConstruct<UA3 const&>(std::get<2>(v2), UA_AllocArg));
    }
    {
        V v(std::in_place_index<2>);
        V v2(std::allocator_arg, a2, v);
        assert(v2.index() == 2);
        assert(checkConstruct<UA3 const&>(std::get<2>(v2), UA_None));
    }
    {
        V v(std::in_place_index<3>);
        V v3(std::allocator_arg, a, v);
        assert(v3.index() == 3);
        assert(checkConstruct<NUA const&>(std::get<3>(v3), UA_None));
    }
    {
        V v(std::in_place_index<3>);
        V v3(std::allocator_arg, a2, v);
        assert(v3.index() == 3);
        assert(checkConstruct<NUA const&>(std::get<3>(v3), UA_None));
    }
}

int main()
{
    test_copy_ctor_basic();
    test_copy_ctor_uses_alloc();
    test_copy_ctor_sfinae();
}
