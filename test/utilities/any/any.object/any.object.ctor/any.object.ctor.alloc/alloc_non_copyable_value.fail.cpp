//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/any>

// any::any<Alloc, Value>(allocator_arg_t, Alloc const &, Value &&)

#include <experimental/any>
#include <cstdlib>
#include <cassert>
#include "test_allocator.h"

class non_copyable
{
    non_copyable(non_copyable const &);

public:
    non_copyable() {}
    non_copyable(non_copyable &&) {}
};

int main()
{
# if _LIBCPP_STD_VER > 11
    using std::experimental::any;
    any a(std::allocator_arg, test_allocator<void>(), non_copyable{});
#else
    int arr[-1];
#endif
}