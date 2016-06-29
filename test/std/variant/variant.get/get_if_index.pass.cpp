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

// template <size_t I, class... Types>
//  constexpr add_pointer_t<variant_alternative_t<I, variant<Types...>>>
//   get_if(variant<Types...>* v) noexcept;
// template <size_t I, class... Types>
//  constexpr add_pointer_t<const variant_alternative_t<I, variant<Types...>>>
//   get_if(const variant<Types...>* v) noexcept;

#include <variant>
#include <cassert>
#include "test_macros.h"

void test_const_get_if() {
    {
        using V = std::variant<int>;
        constexpr const V* v = nullptr;
        static_assert(std::get_if<0>(v) == nullptr, "");
    }
    {
        using V = std::variant<int, long>;
        constexpr V v(42);
        ASSERT_NOEXCEPT(std::get_if<0>(std::addressof(v)));
        ASSERT_SAME_TYPE(decltype(std::get_if<0>(std::addressof(v))), int const*);
        static_assert(*std::get_if<0>(std::addressof(v)) == 42, "");
        static_assert(std::get_if<1>(std::addressof(v)) == nullptr, "");
    }
    {
        using V = std::variant<int, long>;
        constexpr V v(42l);
        ASSERT_SAME_TYPE(decltype(std::get_if<1>(std::addressof(v))), long const*);
        static_assert(*std::get_if<1>(std::addressof(v)) == 42, "");
        static_assert(std::get_if<0>(std::addressof(v)) == nullptr, "");
    }
    {
        using V = std::variant<int&>;
        int x = 42;
        const V v(x);
        ASSERT_SAME_TYPE(decltype(std::get_if<0>(std::addressof(v))), int*);
        assert(std::get_if<0>(std::addressof(v)) == &x);
    }
    {
        using V = std::variant<int&&>;
        int x = 42;
        const V v(std::move(x));
        ASSERT_SAME_TYPE(decltype(std::get_if<0>(std::addressof(v))), int*);
        assert(std::get_if<0>(std::addressof(v)) == &x);
    }
    {
        using V = std::variant<const int&&>;
        int x = 42;
        const V v(std::move(x));
        ASSERT_SAME_TYPE(decltype(std::get_if<0>(std::addressof(v))), const int*);
        assert(std::get_if<0>(std::addressof(v)) == &x);
    }
}

void test_get_if()
{
    {
        using V = std::variant<int>;
        V* v = nullptr;
        assert(std::get_if<0>(v) == nullptr);
    }
    {
        using V = std::variant<int, long>;
        V v(42);
        ASSERT_NOEXCEPT(std::get_if<0>(std::addressof(v)));
        ASSERT_SAME_TYPE(decltype(std::get_if<0>(std::addressof(v))), int*);
        assert(*std::get_if<0>(std::addressof(v)) == 42);
        assert(std::get_if<1>(std::addressof(v)) == nullptr);
    }
    {
        using V = std::variant<int, long>;
        V v(42l);
        ASSERT_SAME_TYPE(decltype(std::get_if<1>(std::addressof(v))), long*);
        assert(*std::get_if<1>(std::addressof(v)) == 42);
        assert(std::get_if<0>(std::addressof(v)) == nullptr);
    }
    {
        using V = std::variant<int&>;
        int x = 42;
        V v(x);
        ASSERT_SAME_TYPE(decltype(std::get_if<0>(std::addressof(v))), int*);
        assert(std::get_if<0>(std::addressof(v)) == &x);
    }
    {
        using V = std::variant<const int&>;
        int x = 42;
        V v(x);
        ASSERT_SAME_TYPE(decltype(std::get_if<0>(std::addressof(v))), const int*);
        assert(std::get_if<0>(std::addressof(v)) == &x);
    }
    {
        using V = std::variant<int&&>;
        int x = 42;
        V v(std::move(x));
        ASSERT_SAME_TYPE(decltype(std::get_if<0>(std::addressof(v))), int*);
        assert(std::get_if<0>(std::addressof(v)) == &x);
    }
    {
        using V = std::variant<const int&&>;
        int x = 42;
        V v(std::move(x));
        ASSERT_SAME_TYPE(decltype(std::get_if<0>(std::addressof(v))), const int*);
        assert(std::get_if<0>(std::addressof(v)) == &x);
    }
}

int main()
{
    test_const_get_if();
    test_get_if();
}
