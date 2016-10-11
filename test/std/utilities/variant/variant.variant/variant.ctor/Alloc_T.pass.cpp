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

// template <class Alloc, class T> variant(allocator_arg_t, Alloc const&, T&&);


#include <variant>
#include <type_traits>
#include <string>
#include <cassert>

#include "test_macros.h"
#include "test_convertible.hpp"
#include "uses_alloc_types.hpp"

struct Dummy {
  Dummy() = default;
};

struct ThrowsT {
  ThrowsT(int) noexcept(false) {}
};

struct NoThrowT {
  NoThrowT(int) noexcept(true) {}
};


void test_T_ctor_sfinae() {
    using Tag = std::allocator_arg_t const&;
    using A = std::allocator<void> const&;
    {
        using V = std::variant<int, int&&>;
        static_assert(!std::is_constructible<V, Tag, A, int>::value, "ambigious");
    }
    {
        using V = std::variant<int, int const&>;
        static_assert(!std::is_constructible<V, Tag, A, int>::value, "ambigious");
    }
    {
        using V = std::variant<long, unsigned>;
        static_assert(!std::is_constructible<V, Tag, A, int>::value, "ambigious");
    }
    {
        using V = std::variant<std::string, void*>;
        static_assert(!std::is_constructible<V, Tag, A, int>::value, "no matching constructor");
    }
}

void test_T_ctor_basic()
{
    using Tag = std::allocator_arg_t const&;
    using A = std::allocator<void> const&;
    const auto atag = std::allocator_arg;
    std::allocator<void> a;
    {
        using V = std::variant<int>;
        static_assert(test_convertible<V, Tag, A, int>(), "must be implicit");
        V v(atag, a,42);
        assert(v.index() == 0);
        assert(std::get<0>(v) == 42);
    }
    {
        using V = std::variant<int, long>;
        V v(atag, a,42l);
        static_assert(test_convertible<V, Tag, A, long>(), "must be implicit");
        assert(v.index() == 1);
        assert(std::get<1>(v) == 42);
    }
    {
        using V = std::variant<int const&, int&&, long>;
        static_assert(test_convertible<V, Tag, A, int&>(), "must be implicit");
        int x = 42;
        V v(atag, a,x);
        assert(v.index() == 0);
        assert(&std::get<0>(v) == &x);
    }
    {
        using V = std::variant<int const&, int&&, long>;
        static_assert(test_convertible<V, Tag, A, int>(), "must be implicit");
        int x = 42;
        V v(atag, a,std::move(x));
        assert(v.index() == 1);
        assert(&std::get<1>(v) == &x);
    }
}

void test_T_ctor_uses_alloc()
{
    using A = std::allocator<void>;
    using A2 = std::allocator<int>;
    using UA1 = UsesAllocatorV1<A, 1>;
    using UA2 = UsesAllocatorV2<A, 1>;
    using UA3 = UsesAllocatorV3<A, 1>;
    using NUA = NotUsesAllocator<A, 1>;
    const A a;
    const A2 a2;
    {
        using V = std::variant<int*, UA1, std::string>;
        V v(std::allocator_arg, a, 42);
        assert(v.index() == 1);
        assert(checkConstruct<int&&>(std::get<1>(v), UA_AllocArg));
    }
    {
        using V = std::variant<int*, UA1, std::string>;
        V v(std::allocator_arg, a2, 42);
        assert(v.index() == 1);
        assert(checkConstruct<int&&>(std::get<1>(v), UA_None));
    }
    {
        using V = std::variant<int*, UA2, std::string>;
        V v(std::allocator_arg, a, 42);
        assert(v.index() == 1);
        assert(checkConstruct<int&&>(std::get<1>(v), UA_AllocLast));
    }
    {
        using V = std::variant<int*, UA2, std::string>;
        V v(std::allocator_arg, a2, 42);
        assert(v.index() == 1);
        assert(checkConstruct<int&&>(std::get<1>(v), UA_None));
    }
    {
        using V = std::variant<int*, UA3, std::string>;
        V v(std::allocator_arg, a, 42);
        assert(v.index() == 1);
        assert(checkConstruct<int&&>(std::get<1>(v), UA_AllocArg));
    }
    {
        using V = std::variant<int*, UA3, std::string>;
        V v(std::allocator_arg, a2, 42);
        assert(v.index() == 1);
        assert(checkConstruct<int&&>(std::get<1>(v), UA_None));
    }
    {
        using V = std::variant<int*, NUA, std::string>;
        V v(std::allocator_arg, a, 42);
        assert(v.index() == 1);
        assert(checkConstruct<int&&>(std::get<1>(v), UA_None));
    }
    {
        using V = std::variant<int*, NUA, std::string>;
        V v(std::allocator_arg, a2, 42);
        assert(v.index() == 1);
        assert(checkConstruct<int&&>(std::get<1>(v), UA_None));
    }
}

int main()
{
    test_T_ctor_basic();
    test_T_ctor_uses_alloc();
    test_T_ctor_sfinae();
}
