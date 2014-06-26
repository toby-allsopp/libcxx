//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/any>

// any::type() noexcept

#include <experimental/any>
#include <cstdlib>
#include <cassert>

struct small {};
struct large 
{
    int _data[10];
};

int main() 
{
#if _LIBCPP_STD_VER > 11
    using std::experimental::any;
    {
        any const a;
        assert(a.type() == typeid(void));
        static_assert(noexcept(a.type()), "any::type() must be noexcept");
    }
    {
        small s;
        any const a(s);
        assert(a.type() == typeid(small));
        
    }
    {
        large l;
        any const a(l);
        assert(a.type() == typeid(large));
    }
#endif
}