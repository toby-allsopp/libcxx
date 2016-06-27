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

// template <class Alloc, size_t I, class Up, class ...Args>
// variant(allocator_arg_t, Alloc const&, in_place_index_t<I>, initializer_list<Up>, Args&&...);


#include <variant>
#include <type_traits>
#include <string>
#include <cassert>

#include "test_macros.h"
#include "test_convertible.hpp"
#include "uses_alloc_types.hpp"

struct InitList {
  std::size_t size;
  constexpr InitList(std::initializer_list<int> il) : size(il.size()){}
};

struct InitListArg {
  std::size_t size;
  int value;
  constexpr InitListArg(std::initializer_list<int> il, int v) : size(il.size()), value(v) {}
};

void test_ctor_sfinae() {
    using Tag = std::allocator_arg_t const&;
    using A = std::allocator<void> const&;
    using IL = std::initializer_list<int>;
    { // just init list
        using V = std::variant<InitList, InitListArg, int>;
        static_assert(std::is_constructible<V, Tag, A, std::in_place_index_t<0>, IL>::value, "");
        static_assert(test_convertible<V, Tag, A, std::in_place_index_t<0>, IL>(), "");
    }
    { // too many arguments
        using V = std::variant<InitList, InitListArg, int>;
        static_assert(!std::is_constructible<V, Tag, A, std::in_place_index_t<0>, IL, int>::value, "");
        static_assert(!test_convertible<V, Tag, A, std::in_place_index_t<0>, IL, int>(), "");
    }
    { // too few arguments
        using V = std::variant<InitList, InitListArg, int>;
        static_assert(!std::is_constructible<V, Tag, A, std::in_place_index_t<1>, IL>::value, "");
        static_assert(!test_convertible<V, Tag, A, std::in_place_index_t<1>, IL>(), "");
    }
    { // init list and arguments
        using V = std::variant<InitList, InitListArg, int>;
        static_assert(std::is_constructible<V, Tag, A, std::in_place_index_t<1>, IL, int>::value, "");
        static_assert(test_convertible<V, Tag, A, std::in_place_index_t<1>, IL, int>(), "");
    }
    { // not constructible from arguments
        using V = std::variant<InitList, InitListArg, int>;
        static_assert(!std::is_constructible<V, Tag, A, std::in_place_index_t<2>, IL>::value, "");
        static_assert(!test_convertible<V, Tag, A, std::in_place_index_t<2>, IL>(), "");
    }
    { // index out of range
        using V = std::variant<InitListArg, InitListArg, int>;
        static_assert(!std::is_constructible<V, Tag, A, std::in_place_index_t<4>, IL, int>::value, "");
        static_assert(!test_convertible<V, Tag, A, std::in_place_index_t<4>, IL, int>(), "");
    }
}

void test_ctor_basic()
{
    std::allocator_arg_t const atag{};
    std::allocator<void> a{};
    {
        std::variant<InitList, InitListArg> v(atag, a, std::in_place_index<0>, {1, 2, 3});
        assert(v.index() == 0);
        assert(std::get<0>(v).size == 3);
    }
    {
        std::variant<InitList, InitListArg> v(atag, a, std::in_place_index<1>, {1, 2, 3, 4}, 42);
        assert(v.index() == 1);
        assert(std::get<1>(v).size == 4);
        assert(std::get<1>(v).value == 42);
    }
}


void test_no_args_ctor_uses_alloc()
{
    using IL = std::initializer_list<int>;
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
        V v(std::allocator_arg, a, std::in_place_index<0>, {1, 2, 3});
        assert(v.index() == 0);
        assert(checkConstruct<IL&&>(std::get<0>(v), UA_AllocArg));
    }
    {
        V v(std::allocator_arg, a2, std::in_place_index<0>, {1, 2, 3});
        assert(v.index() == 0);
        assert(checkConstruct<IL&&>(std::get<0>(v), UA_None));
    }
    {
        V v(std::allocator_arg, a, std::in_place_index<1>, {1, 2, 3});
        assert(v.index() == 1);
        assert(checkConstruct<IL&&>(std::get<1>(v), UA_AllocLast));
    }
    {
        V v(std::allocator_arg, a2, std::in_place_index<1>, {1, 2, 3});
        assert(v.index() == 1);
        assert(checkConstruct<IL&&>(std::get<1>(v), UA_None));
    }
    {
        V v(std::allocator_arg, a, std::in_place_index<2>, {1, 2, 3});
        assert(v.index() == 2);
        assert(checkConstruct<IL&&>(std::get<2>(v), UA_AllocArg));
    }
    {
        V v(std::allocator_arg, a2, std::in_place_index<2>, {1, 2, 3});
        assert(v.index() == 2);
        assert(checkConstruct<IL&&>(std::get<2>(v), UA_None));
    }
    {
        V v3(std::allocator_arg, a, std::in_place_index<3>, {1, 2, 3});
        assert(v3.index() == 3);
        assert(checkConstruct<IL &&>(std::get<3>(v3), UA_None));
    }
    {
        V v3(std::allocator_arg, a2, std::in_place_index<3>, {1, 2, 3});
        assert(v3.index() == 3);
        assert(checkConstruct<IL &&>(std::get<3>(v3), UA_None));
    }
}


void test_additional_args_ctor_uses_alloc()
{
    using IL = std::initializer_list<int>;
    using A = std::allocator<void>;
    using A2 = std::allocator<int>;
    using UA1 = UsesAllocatorV1<A, 3>;
    using UA2 = UsesAllocatorV2<A, 3>;
    using UA3 = UsesAllocatorV3<A, 3>;
    using NUA = NotUsesAllocator<A, 3>;
    using V = std::variant<UA1, UA2, UA3, NUA>;
    const A a;
    const A2 a2;
    const int x = 42;
    {
        V v(std::allocator_arg, a, std::in_place_index<0>, {1, 2, 3}, 42, x);
        assert((v.index() == 0));
        assert((checkConstruct<IL&&, int&&, int const&>(std::get<0>(v), UA_AllocArg)));
    }
    {
        V v(std::allocator_arg, a2, std::in_place_index<0>, {1, 2, 3}, 42, x);
        assert((v.index() == 0));
        assert((checkConstruct<IL&&, int&&, int const&>(std::get<0>(v), UA_None)));
    }
    {
        V v(std::allocator_arg, a, std::in_place_index<1>, {1, 2, 3}, 42, x);
        assert((v.index() == 1));
        assert((checkConstruct<IL&&, int&&, int const&>(std::get<1>(v), UA_AllocLast)));
    }
    {
        V v(std::allocator_arg, a2, std::in_place_index<1>, {1, 2, 3}, 42, x);
        assert((v.index() == 1));
        assert((checkConstruct<IL&&, int&&, int const&>(std::get<1>(v), UA_None)));
    }
    {
        V v(std::allocator_arg, a, std::in_place_index<2>, {1, 2, 3}, 42, x);
        assert((v.index() == 2));
        assert((checkConstruct<IL&&, int&&, int const&>(std::get<2>(v), UA_AllocArg)));
    }
    {
        V v(std::allocator_arg, a2, std::in_place_index<2>, {1, 2, 3}, 42, x);
        assert((v.index() == 2));
        assert((checkConstruct<IL&&, int&&, int const&>(std::get<2>(v), UA_None)));
    }
    {
        V v3(std::allocator_arg, a, std::in_place_index<3>, {1, 2, 3}, 42, x);
        assert((v3.index() == 3));
        assert((checkConstruct<IL&&, int&&, int const&>(std::get<3>(v3), UA_None)));
    }
    {
        V v3(std::allocator_arg, a2, std::in_place_index<3>, {1, 2, 3}, 42, x);
        assert((v3.index() == 3));
        assert((checkConstruct<IL&&, int&&, int const&>(std::get<3>(v3), UA_None)));
    }
}


int main()
{
    test_ctor_basic();
    test_no_args_ctor_uses_alloc();
    test_additional_args_ctor_uses_alloc();
    test_ctor_sfinae();
}
