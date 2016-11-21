//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// REQUIRES: modules-support, clang-verify

// Test that int8_t and the like are exported from stdint.h not inttypes.h

// RUN: %compile_module_verify

#include <ciso646>

void verify_size_t_from_cstdlib() {
  size_t x;
}

int main() {

}
