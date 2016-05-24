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

// propagate_const(const propagate_const&)=delete;

#include <experimental/propagate_const>
#include "propagate_const_helpers.h"
#include <cassert>

using std::experimental::propagate_const;

int main() {

  typedef propagate_const<X> P;

  P p1(2);
  P p2(p1); // will not compile
}
