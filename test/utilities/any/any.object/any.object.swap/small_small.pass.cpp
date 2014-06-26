//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/any>

// any::swap(any &) noexcept

#include <experimental/any>
#include <new>
#include <type_traits>
#include <cstdlib>
#include <cassert>

int new_called = 0;

void* operator new(std::size_t s) throw(std::bad_alloc)
{
    ++new_called;
    return std::malloc(s);
}

void  operator delete(void* p) throw()
{
    --new_called;
    std::free(p);
}


struct small1
{
    static int count;
    static int copied;
    static int moved;
    
    char value;
    
    
    small1(char val) : value(val) 
    { 
        ++count; 
    }
    
    small1(small1 const & other)
    {
        value = other.value;
        ++count;
        ++copied; 
    }
    
    small1(small1 && other) throw()
    {
        value = other.value;
        other.value = 0;
        ++count; 
        ++moved; 
    }
    ~small1() 
    {
        value = 0;
        --count; 
    }

};


int small1::count = 0;
int small1::copied = 0;
int small1::moved = 0;

struct small2
{
    static int count;
    static int copied;
    static int moved;
    
    char value;
    
    small2(char val) : value(val) 
    { 
        ++count; 
    }
    
    small2(small2 const & other)
    {
        value = other.value;
        ++count;
        ++copied; 
    }
    
    small2(small2 && other) throw()
    {
        value = other.value;
        other.value = 0;
        ++count; 
        ++moved; 
    }
    ~small2() 
    {
        value = 0;
        --count; 
    }

};

int small2::count = 0;
int small2::copied = 0;
int small2::moved = 0;

int main()
{
#if _LIBCPP_STD_VER > 11
    using std::experimental::any;
    using std::experimental::any_cast;
    // small1.swap(small2)
    {
        any a1(small1{1});
        assert(!a1.empty());
        assert(a1.type() == typeid(small1));
        assert(any_cast<small1 const &>(a1).value == 1);
        assert(small1::count == 1);
        assert(new_called == 0);
        
        any a2(small2{2});
        assert(!a2.empty());
        assert(a2.type() == typeid(small2));
        assert(any_cast<small2 const &>(a2).value == 2);
        assert(small2::count == 1);
        assert(new_called == 0);
        
        a1.swap(a2);
        
        assert(!a1.empty());
        assert(a1.type() == typeid(small2));
        assert(any_cast<small2 const &>(a1).value == 2);
        assert(small2::count == 1);
        
        assert(!a2.empty());
        assert(a2.type() == typeid(small1));
        assert(any_cast<small1 const &>(a2).value == 1);
        assert(small1::count == 1);
        
        assert(new_called == 0);
    }
    assert(new_called == 0);
    assert(small1::count == 0);
    assert(small2::count == 0);
    // small2.swap(small1)
    {
        any a1(small1{1});
        assert(!a1.empty());
        assert(a1.type() == typeid(small1));
        assert(any_cast<small1 const &>(a1).value == 1);
        assert(small1::count == 1);
        assert(new_called == 0);
        
        any a2(small2{2});
        assert(!a2.empty());
        assert(a2.type() == typeid(small2));
        assert(any_cast<small2 const &>(a2).value == 2);
        assert(small2::count == 1);
        assert(new_called == 0);
        
        a2.swap(a1);
        
        assert(!a1.empty());
        assert(a1.type() == typeid(small2));
        assert(any_cast<small2 const &>(a1).value == 2);
        assert(small2::count == 1);
        
        assert(!a2.empty());
        assert(a2.type() == typeid(small1));
        assert(any_cast<small1 const &>(a2).value == 1);
        assert(small1::count == 1);
        
        assert(new_called == 0);
    }
    assert(new_called == 0);
    assert(small1::count == 0);
    assert(small2::count == 0);
#endif  // _LIBCPP_STD_VER > 11
}