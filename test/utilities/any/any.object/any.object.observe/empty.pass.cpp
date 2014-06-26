//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/any>

// any::empty()

#include <experimental/any>
#include <type_traits>
#include <cstdlib>
#include <cassert>


struct small
{
    static int count;
    static int copied;
    static int moved;
    
    small()
    {
        ++count;
    }
    
    small(small const &) throw()
    {
        ++count;
        ++copied;
    }
    
    small(small &&) throw()
    {
        ++count;
        ++moved;
    }
    
    ~small() { --count; }
};

int small::count = 0;
int small::copied = 0;
int small::moved = 0;

struct large
{
    static int count;
    static int copied;
    static int moved;
    
    large() { ++count; data[0] = 0; }
    large(large const &) { ++count; ++copied; }
    large(large &&) { ++count; ++moved; }
    ~large() { --count; }
private:
    int data[10];
};

int large::count = 0;
int large::copied = 0;
int large::moved = 0;


int main() 
{
#if _LIBCPP_STD_VER > 11
    using std::experimental::any;
    // empty
    {
        any const a;
        assert(a.empty());
        
        static_assert(
            noexcept(a.empty())
          , "any::empty() must be noexcept"
          );
    }
    // small object
    {
        small const s;
        any const a(s);
        assert(!a.empty());
    }
    // large object
    {
        large const l;
        any const a(l);
        assert(!a.empty());
    }
#endif
}