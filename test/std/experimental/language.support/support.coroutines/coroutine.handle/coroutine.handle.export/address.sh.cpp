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
// REQUIRES: fcoroutines-ts

// RUN: %build -fcoroutines-ts
// RUN: %run

// <experimental/coroutine>

// template <class Promise = void>
// struct coroutine_handle;

// void* address() const noexcept

#include <experimental/coroutines>
#include <type_traits>
#include <cassert>

namespace coro = std::experimental;

template <class C>
void do_test() {
  {
    const C c = {}; ((void)c);
    static_assert(noexcept(c.address()), "");
    // FIXME: Should the return type not be 'C'?
    static_assert(std::is_same<decltype(c.address()), void*>::value, "");
    assert(c.address() == nullptr);
  }
  {
    int dummy = 42;
    C c = C::from_address(&dummy);
    assert(c.address() == &dummy);
  }
}

int main()
{
  do_test<coro::coroutine_handle<>>();
  do_test<coro::coroutine_handle<int>>();
}
