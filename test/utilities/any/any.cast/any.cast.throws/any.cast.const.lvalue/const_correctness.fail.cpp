//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/any>

// template <class ValueType>
// ValueType any_cast(any const &);

#include <experimental/any>

struct dummy_t {};

int main() 
{
#if _LIBCPP_STD_VER > 11
    using std::experimental::any;
    using std::experimental::any_cast;
    using std::experimental::bad_any_cast;
    
    any const a(dummy_t{});
    any_cast<dummy_t &>(a);
#else
    int arr[-1];
#endif
}