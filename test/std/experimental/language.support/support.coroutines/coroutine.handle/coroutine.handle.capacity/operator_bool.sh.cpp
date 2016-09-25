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

// void* address() const noexcept

#include <experimental/coroutines>
#include <type_traits>
#include <cassert>

namespace coro = std::experimental;

template <class C>
void do_test() {
  {
    const C c = {}; ((void)c);
    static_assert(noexcept(bool(c)), "");
    // FIXME: Should the return type not be 'C'?
    static_assert(std::is_same<decltype(bool(c)), bool>::value, "");
    static_assert(!std::is_convertible<C, bool>::value, "");
    assert(c.address() == nullptr);
    assert(bool(c) == false);
  }
  {
    int dummy = 42;
    C c = C::from_address(&dummy);
    assert(c.address() == &dummy);
    assert(bool(c) == true);
  }
}

int main()
{
  do_test<coro::coroutine_handle<>>();
  do_test<coro::coroutine_handle<int>>();
}
