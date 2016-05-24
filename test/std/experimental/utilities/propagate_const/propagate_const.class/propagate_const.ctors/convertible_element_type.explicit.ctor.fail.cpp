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

// template <class U> constexpr propagate_const& operator=(propagate_const<_Up>&& pu);

#include <experimental/propagate_const>
#include "propagate_const_helpers.h"
#include <cassert>

using std::experimental::propagate_const;

typedef propagate_const<ExplicitCopyConstructibleFromX> P;

void f(const P& p)
{      
}

int main() {
  f(X(2)); // will not compile
}

