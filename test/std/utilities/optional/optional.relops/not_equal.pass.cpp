//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// UNSUPPORTED: c++98, c++03, c++11, c++14
// <optional>

// template <class T> constexpr bool operator!=(const optional<T>& x, const optional<T>& y);

#include <optional>
#include <type_traits>
#include <cassert>

#include "test_macros.h"

using std::optional;

struct X
{
    int i_;

    constexpr X(int i) : i_(i) {}
};

constexpr bool operator != ( const X &lhs, const X &rhs )
    { return lhs.i_ != rhs.i_ ; }


template <class ValueT>
constexpr bool do_test() {
  using O = optional<ValueT>;
  X x1{1};
  X x2{2};
  X x3{1};

  O o1;
  O o2;
  O o3{std::forward<ValueT>(x1)};
  O o4{std::forward<ValueT>(x2)};
  O o5{std::forward<ValueT>(x3)};

  assert(!(o1 != o1));
  assert(!(o1 != o2));
  assert( (o1 != o3));
  assert( (o1 != o4));
  assert( (o1 != o5));

  assert(!(o2 != o1));
  assert(!(o2 != o2));
  assert( (o2 != o3));
  assert( (o2 != o4));
  assert( (o2 != o5));

  assert( (o3 != o1));
  assert( (o3 != o2));
  assert(!(o3 != o3));
  assert( (o3 != o4));
  assert(!(o3 != o5));

  assert( (o4 != o1));
  assert( (o4 != o2));
  assert( (o4 != o3));
  assert(!(o4 != o4));
  assert( (o4 != o5));

  assert( (o5 != o1));
  assert( (o5 != o2));
  assert(!(o5 != o3));
  assert( (o5 != o4));
  assert(!(o5 != o5));

  return true;
}

int main()
{
    static_assert(do_test<X>(), "");
#ifndef TEST_OPTIONAL_HAS_NO_REFERENCES
    static_assert(do_test<X&>(), "");
    static_assert(do_test<X const&>(), "");
    static_assert(do_test<X&&>(), "");
#endif
}
