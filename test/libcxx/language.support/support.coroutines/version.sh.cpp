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

#ifndef _LIBCPP_VERSION
#error _LIBCPP_VERSION must be defined
#endif

int main()
{
}
