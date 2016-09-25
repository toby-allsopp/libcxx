// -*- C++ -*-
//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// UNSUPPORTED: c++98, c++03, c++11
// REQUIRES: fcoroutines

// RUN: %build -fcoroutines
// RUN: %run

// <experimental/coroutine>

// template <class Promise = void>
// struct coroutine_handle;

// constexpr coroutine_handle() noexcept
// constexpr coroutine_handle(nullptr_t) noexcept

#include <experimental/coroutines>
#include <type_traits>
#include <cassert>

namespace coro = std::experimental;

template <class C>
void do_test() {
  {
    constexpr C c;
    static_assert(std::is_nothrow_default_constructible<C>::value, "");
    assert(c.address() == nullptr);
  }
  {
    constexpr C c(nullptr);
    static_assert(std::is_nothrow_constructible<C, std::nullptr_t>::value, "");
    assert(c.address() == nullptr);
  }
}

int main()
{
  do_test<coro::coroutine_handle<>>();
  do_test<coro::coroutine_handle<int>>();
}