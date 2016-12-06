//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// REQUIRES: modules-support, verify-support

// Test that stddef.h provides size_t

// RUN: %build_module

#include <cstddef>

int main() {
  size_t x; ((void)x);
}
