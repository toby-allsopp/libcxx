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

struct no_copy
{
    no_copy() {}
    no_copy(no_copy &&) {}

private:
    no_copy(no_copy const &);
};

int main() 
{
#if _LIBCPP_STD_VER > 11
    using std::experimental::any;
    using std::experimental::any_cast;
    using std::experimental::bad_any_cast;
    
    any const a;
    any_cast<no_copy>(a);
#else
    int arr[-1];
#endif
}