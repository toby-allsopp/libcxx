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

#include <experimental/coroutine>

#include "generator.h"

generator<int> fib(int n) {
  for (int i = 0; i < n; ++i)
    co_yield i;
}

extern "C" void print(int) {}

// CHECK-LABEL: @main
int main() {
  for (auto v : fib(5))
    print(v);
// CHECK: call void @print(i32 0)
// CHECK: call void @print(i32 1)
// CHECK: call void @print(i32 2)
// CHECK: call void @print(i32 3)
// CHECK: call void @print(i32 4)
}
