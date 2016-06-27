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

// template <class Alloc, class Tp, class ...Args>
// variant(allocator_arg_t, Alloc const&, in_place_type_t<Tp>, Args&&...);

#include <variant>
#include <type_traits>
#include <string>
#include <cassert>

#include "test_macros.h"
#include "test_convertible.hpp"
#include "uses_alloc_types.hpp"

void test_ctor_sfinae() {
    using Tag = std::allocator_arg_t const;
    using A = std::allocator<void> const&;
    {
        using V = std::variant<int>;
        static_assert(std::is_constructible<V, Tag, A, std::in_place_type_t<int>, int>::value, "");
        static_assert(test_convertible<V, Tag, A, std::in_place_type_t<int>, int>(), "");
    }
    {
        using V = std::variant<int, long, long long>;
        static_assert(std::is_constructible<V, Tag, A, std::in_place_type_t<long>, int>::value, "");
        static_assert(test_convertible<V, Tag, A, std::in_place_type_t<long>, int>(), "");
    }
    {
        using V = std::variant<int, long, int*>;
        static_assert(std::is_constructible<V, Tag, A, std::in_place_type_t<int*>, int*>::value, "");
        static_assert(test_convertible<V, Tag, A, std::in_place_type_t<int*>, int*>(), "");
    }
    { // duplicate type
        using V = std::variant<int, long, int>;
        static_assert(!std::is_constructible<V, Tag, A, std::in_place_type_t<int>, int>::value, "");
        static_assert(!test_convertible<V, Tag, A, std::in_place_type_t<int>, int>(), "");
    }
    { // args not convertible to type
        using V = std::variant<int, long, int*>;
        static_assert(!std::is_constructible<V, Tag, A, std::in_place_type_t<int>, int*>::value, "");
        static_assert(!test_convertible<V, Tag, A, std::in_place_type_t<int>, int*>(), "");
    }
    { // type not in variant
        using V = std::variant<int, long, int*>;
        static_assert(!std::is_constructible<V, Tag, A, std::in_place_type_t<long long>, int>::value, "");
        static_assert(!test_convertible<V, Tag, A, std::in_place_type_t<long long>, int>(), "");
    }
}

void test_ctor_basic()
{
    using Tag = std::allocator_arg_t const;
    using A = std::allocator<void> const&;
    Tag atag{};
    std::allocator<void> a{};
    {
        std::variant<int> v(atag, a, std::in_place_type<int>, 42);
        assert(v.index() == 0);
        assert(std::get<0>(v) == 42);
    }
    {
        std::variant<int, long> v(atag, a, std::in_place_type<long>, 42);
        assert(v.index() == 1);
        assert(std::get<1>(v) == 42);
    }
    {
        std::variant<int, const int, long> v(atag, a, std::in_place_type<const int>, 42);
        assert(v.index() == 1);
        assert(std::get<1>(v) == 42);
    }
    {
        using V = std::variant<const int, volatile int, int>;
        int x = 42;
        V v(atag, a, std::in_place_type<const int>, x);
        assert(v.index() == 0);
        assert(std::get<0>(v) == x);
    }
    {
        using V = std::variant<const int, volatile int, int>;
        int x = 42;
        V v(atag, a, std::in_place_type<volatile int>, x);
        assert(v.index() == 1);
        assert(std::get<1>(v) == x);
    }
    {
        using V = std::variant<const int, volatile int, int>;
        int x = 42;
        V v(atag, a, std::in_place_type<int>, x);
        assert(v.index() == 2);
        assert(std::get<2>(v) == x);
    }
}


void test_ctor_uses_alloc()
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
        V v(std::allocator_arg, a, std::in_place_type<UA1>, 42);
        assert(v.index() == 0);
        assert(checkConstruct<int&&>(std::get<0>(v), UA_AllocArg));
    }
    {
        V v(std::allocator_arg, a2, std::in_place_type<UA1>, 42);
        assert(v.index() == 0);
        assert(checkConstruct<int&&>(std::get<0>(v), UA_None));
    }
    {
        V v(std::allocator_arg, a, std::in_place_type<UA2>, 42);
        assert(v.index() == 1);
        assert(checkConstruct<int&&>(std::get<1>(v), UA_AllocLast));
    }
    {
        V v(std::allocator_arg, a2, std::in_place_type<UA2>, 42);
        assert(v.index() == 1);
        assert(checkConstruct<int&&>(std::get<1>(v), UA_None));
    }
    {
        V v(std::allocator_arg, a, std::in_place_type<UA3>, 42);
        assert(v.index() == 2);
        assert(checkConstruct<int&&>(std::get<2>(v), UA_AllocArg));
    }
    {
        V v(std::allocator_arg, a2, std::in_place_type<UA3>, 42);
        assert(v.index() == 2);
        assert(checkConstruct<int&&>(std::get<2>(v), UA_None));
    }
    {
        V v3(std::allocator_arg, a, std::in_place_type<NUA>, 42);
        assert(v3.index() == 3);
        assert(checkConstruct<int &&>(std::get<3>(v3), UA_None));
    }
    {
        V v3(std::allocator_arg, a2, std::in_place_type<NUA>, 42);
        assert(v3.index() == 3);
        assert(checkConstruct<int &&>(std::get<3>(v3), UA_None));
    }
}

int main()
{
    test_ctor_basic();
    test_ctor_uses_alloc();
    test_ctor_sfinae();
}
