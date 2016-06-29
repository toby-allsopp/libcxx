// -*- C++ -*-
//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// UNSUPPORTED: c++98, c++03, c++11, c++14

// <variant>

// template <class ...Types> class variant;

// void swap(variant& rhs) noexcept(see below)


#include <variant>
#include <type_traits>
#include <string>
#include <cassert>

#include "test_macros.h"
#include "test_convertible.hpp"

#ifndef TEST_HAS_NO_EXCEPTIONS
struct CopyThrows {
  CopyThrows() = default;
  CopyThrows(CopyThrows const&) { throw 42; }
  CopyThrows& operator=(CopyThrows const&) { throw 42; }
};

struct MoveThrows {
  static int alive;
  MoveThrows() { ++alive; }
  MoveThrows(MoveThrows const&) {++alive;}
  MoveThrows(MoveThrows&&) {  throw 42; }
  MoveThrows& operator=(MoveThrows const&) { return *this; }
  MoveThrows& operator=(MoveThrows&&) { throw 42; }
  ~MoveThrows() { --alive; }
};

int MoveThrows::alive = 0;

struct MakeEmptyT {
  static int alive;
  MakeEmptyT() { ++alive; }
  MakeEmptyT(MakeEmptyT const&) {
      ++alive;
      // Don't throw from the copy constructor since variant's assignment
      // operator performs a copy before committing to the assignment.
  }
  MakeEmptyT(MakeEmptyT &&) {
    throw 42;
  }
  MakeEmptyT& operator=(MakeEmptyT const&) {
      throw 42;
  }
  MakeEmptyT& operator=(MakeEmptyT&&) {
      throw 42;
  }
   ~MakeEmptyT() { --alive; }
};
static_assert(std::is_swappable_v<MakeEmptyT>, ""); // required for test

int MakeEmptyT::alive = 0;

template <class Variant>
void makeEmpty(Variant& v) {
    Variant v2(std::in_place_type<MakeEmptyT>);
    try {
        v = v2;
        assert(false);
    }  catch (...) {
        assert(v.valueless_by_exception());
    }
}
#endif // TEST_HAS_NO_EXCEPTIONS

void test_swap_valueless_by_exception()
{
#ifndef TEST_HAS_NO_EXCEPTIONS
    using V = std::variant<int, MakeEmptyT>;
    V v1; makeEmpty(v1);
    V v2; makeEmpty(v2);
    assert(MakeEmptyT::alive == 0);
    { // member swap
        v1.swap(v2);
        assert(v1.valueless_by_exception());
        assert(v2.valueless_by_exception());
        assert(MakeEmptyT::alive == 0);
    }
    { // non-member swap
        swap(v1, v2);
        assert(v1.valueless_by_exception());
        assert(v2.valueless_by_exception());
        assert(MakeEmptyT::alive == 0);
    }
#endif
}

int main()
{
    test_swap_valueless_by_exception();
}
