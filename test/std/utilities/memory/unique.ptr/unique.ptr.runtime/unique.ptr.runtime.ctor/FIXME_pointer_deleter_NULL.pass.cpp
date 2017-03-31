//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <memory>

// unique_ptr

// Test unique_ptr(pointer, deleter) ctor

// unique_ptr(pointer, deleter()) only requires MoveConstructible deleter

// FIXME
// XFAIL: *

#include <memory>
#include <cassert>

#include "deleter_types.h"

struct A {
  static int count;
  A() { ++count; }
  A(const A&) { ++count; }
  ~A() { --count; }
};

int A::count = 0;

int main() {
  { // LWG#2520 says that nullptr is a valid input as well as null
#ifdef _LIBCPP_VERSION
    std::unique_ptr<A[], Deleter<A[]>> s1(NULL, Deleter<A[]>());

    NCDeleter<A[]> d2(5);
    std::unique_ptr<A[], NCDeleter<A[]>&> s2(NULL, d2);
    assert(s2.get() == nullptr);
    assert(s2.get_deleter().state() == 5);

    NCConstDeleter<A[]> d3(5);
    std::unique_ptr<A[], NCConstDeleter<A[]> const&> s3(NULL, d3);
    assert(s3.get() == nullptr);
    assert(s3.get_deleter().state() == 5);
#endif
  }
  assert(A::count == 0);
}
