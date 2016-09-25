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

#include <experimental/coroutines>
#include <type_traits>
#include <cassert>

namespace coro = std::experimental;


int main()
{
  using H = coro::coroutine_handle<>;
  using S = coro::suspend_always;
  H h{};
  S s{};
  {
    static_assert(noexcept(s.await_ready()) == false, "");
    static_assert(std::is_same<decltype(s.await_ready()), bool>::value, "");
    assert(s.await_ready() == false);
  }
  {
    static_assert(noexcept(s.await_suspend(h)) == false, "");
    static_assert(std::is_same<decltype(s.await_suspend(h)), void>::value, "");
    s.await_suspend(h);
  }
  {
    static_assert(noexcept(s.await_resume()) == false, "");
    static_assert(std::is_same<decltype(s.await_resume()), void>::value, "");
    s.await_resume();
  }
}
