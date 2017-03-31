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

// Test unique_ptr converting move ctor


#include <memory>
#include <cassert>

#include "deleter_types.h"

struct A
{
    static int count;
    A() {++count;}
    A(const A&) {++count;}
    virtual ~A() {--count;}
};

int A::count = 0;

struct B
    : public A
{
    static int count;
    B() {++count;}
    B(const B&) {++count;}
    virtual ~B() {--count;}
};

int B::count = 0;

template <int ID = 0>
struct GenericDeleter {
  void operator()(void*) const {}
};


template <int ID = 0>
struct GenericConvertingDeleter {
  template <int OID>
  GenericConvertingDeleter(GenericConvertingDeleter<OID>) {}
  void operator()(void*) const {}
};

void test_sfinae() {
  { // Disallow copying
    using U1 = std::unique_ptr<A[], GenericConvertingDeleter<0>>;
    using U2 = std::unique_ptr<A[], GenericConvertingDeleter<1>>;
    static_assert(std::is_constructible<U1, U2&&>::value, "");
    static_assert(!std::is_constructible<U1, U2&>::value, "");
    static_assert(!std::is_constructible<U1, const U2&>::value, "");
    static_assert(!std::is_constructible<U1, const U2&&>::value, "");
  }
  { // Disallow illegal qualified conversions
    using U1 = std::unique_ptr<const A[]>;
    using U2 = std::unique_ptr<A[]>;
    static_assert(std::is_constructible<U1, U2&&>::value, "");
    static_assert(!std::is_constructible<U2, U1&&>::value, "");
  }
  { // Disallow base-to-derived conversions.
    using UA = std::unique_ptr<A[]>;
    using UB = std::unique_ptr<B[]>;
    static_assert(!std::is_constructible<UA, UB&&>::value, "");
  }
  { // Disallow base-to-derived conversions.
    using UA = std::unique_ptr<A[], GenericConvertingDeleter<0>>;
    using UB = std::unique_ptr<B[], GenericConvertingDeleter<1>>;
    static_assert(!std::is_constructible<UA, UB&&>::value, "");
  }
  { // Disallow invalid deleter initialization
    using U1 = std::unique_ptr<A[], GenericDeleter<0>>;
    using U2 = std::unique_ptr<A[], GenericDeleter<1>>;
    static_assert(!std::is_constructible<U1, U2&&>::value, "");
  }
  { // Disallow reference deleters with different qualifiers
    using U1 = std::unique_ptr<A[], Deleter<A[]>&>;
    using U2 = std::unique_ptr<A[], const Deleter<A[]>&>;
    static_assert(!std::is_constructible<U1, U2&&>::value, "");
    static_assert(!std::is_constructible<U2, U1&&>::value, "");
  }
  {
    using U1 = std::unique_ptr<A[]>;
    using U2 = std::unique_ptr<A>;
    static_assert(!std::is_constructible<U1, U2&&>::value, "");
    static_assert(!std::is_constructible<U2, U1&&>::value, "");
  }
}

int main() {
  test_sfinae();
}
