//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// REQUIRES: modules-support

// Test that <cstdint> re-exports <stdint.h>

// RUN: %build_module

#include <cwchar>

#ifndef NULL
#error NULL should be defined
#endif
#ifndef WEOF
#error WEOF should be defined
#endif
#ifndef WCHAR_MIN
#error WCHAR_MIN should be defined
#endif
#ifndef WCHAR_MAX
#error WCHAR_MAX should be defined
#endif

int main() {
  size_t s; ((void)s);
}
