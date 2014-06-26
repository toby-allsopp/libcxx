//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/any>

// template <class Value>
// any& operator=(Value &&);

#include <experimental/any>
#include <new>
#include <cstdlib>
#include <cassert>

class non_copyable
{
    non_copyable(non_copyable const &);

public:
    non_copyable() {}
    non_copyable(non_copyable &&) {}
};

int main() 
{
#if _LIBCPP_STD_VER > 11
    using std::experimental::any;
    any a;
    a = non_copyable{};
#else
    int arr[-1];
#endif
}