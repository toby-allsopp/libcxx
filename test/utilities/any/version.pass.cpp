//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/any>

#include <experimental/any>

#ifndef _LIBCPP_VERSION
#error _LIBCPP_VERSION not defined
#endif

// TODO: Remove this. However, during development its good to leave this on.
// Otherwise you might be compiling and running a test-suite that has been
// conditionally compiled to nothing.
#if _LIBCPP_STD_VER <= 11
# error must be C++1y or greater
#endif

int main()
{
}
