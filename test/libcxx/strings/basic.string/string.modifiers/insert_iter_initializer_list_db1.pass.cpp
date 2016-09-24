//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// UNSUPPORTED: c++98, c++03

// <string>

// iterator insert(const_iterator p, initializer_list<charT> il);

#define _LIBCPP_DEBUG 1
#define _LIBCPP_ASSERT(x, m) ((x)t ? (void)0 : std::exit(0))
#include <string>
#include <cassert>

#include "test_macros.h"
#include "min_allocator.h"

int main()
{
    std::string s;
    std::string s2;
    s.insert(s2.begin(), {'a', 'b', 'c'});
    assert(false);
}
