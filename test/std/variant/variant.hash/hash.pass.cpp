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

// template <class ..._Types> struct hash<variant<Types...>>;
// template <> struct hash<monostate>;

#include <variant>
#include <type_traits>
#include <cassert>

#include "test_macros.h"
#include "variant_test_helpers.hpp"

#ifndef TEST_HAS_NO_EXCEPTIONS
namespace std {
  template <>
  struct hash<::MakeEmptyT> {
    size_t operator()(::MakeEmptyT const&) const { assert(false); return 0; }
  };
}
#endif

void test_hash_variant()
{
    {
        using V = std::variant<int>;
        using H = std::hash<V>;
        const V v(42);
        V v2(100);
        const H h{};
        assert(h(v) == std::hash<int>{}(42));
        assert(h(v2) == std::hash<int>{}(100));
    }
    {
        using V = std::variant<int, long, const char*>;
        using H = std::hash<V>;
        const char* str = "hello";
        const V v1(42);
        V v2(100l);
        V v3(str);
        const H h{};
        assert(h(v1) == std::hash<int>{}(42));
        assert(h(v2) == std::hash<long>{}(100));
        assert(h(v3) == std::hash<const char*>{}(str));
    }
#ifndef TEST_HAS_NO_EXCEPTIONS
    {
        using V = std::variant<int, MakeEmptyT>;
        using H = std::hash<V>;
        V v; makeEmpty(v);
        V v2; makeEmpty(v2);
        const H h{};
        assert(h(v) == h(v2));
    }
#endif
}

void test_hash_monostate()
{
    using H = std::hash<std::monostate>;
    const H h{};
    std::monostate m1{};
    const std::monostate m2{};
    assert(h(m1) == h(m1));
    assert(h(m2) == h(m2));
    assert(h(m1) == h(m2));
}

int main()
{
    test_hash_variant();
    test_hash_monostate();
}
