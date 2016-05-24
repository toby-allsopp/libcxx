//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// UNSUPPORTED: c++98, c++03, c++11

// <propagate_const>

// template <class T> constexpr void propagate_const::swap(propagate_const<T>& x);

#include <experimental/propagate_const>
#include "propagate_const_helpers.h"
#include <cassert>

using std::experimental::propagate_const;

void swap(X& x, X& y)
{
  std::swap(x.i_,y.i_);
}

int main() {
  typedef propagate_const<X> P;
  
  P p1_1(1);
  P p2_2(2);

  assert(*p1_1 == 1);
  assert(*p2_2 == 2);
  
  p1_1.swap(p2_2);

  assert(*p1_1 == 2);
  assert(*p2_2 == 1);
}
