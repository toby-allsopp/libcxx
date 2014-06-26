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


struct large1
{
    static int count;
    static int copied;
    static int moved;
    
    char value;
    
    large1(char val) : value(val) 
    { 
        ++count; 
        data[0] = 0; 
    }
    
    large1(large1 const & other)
    {
        value = other.value;
        ++count;
        ++copied; 
    }
    
    large1(large1 && other) 
    {
        value = other.value;
        other.value = 0;
        ++count; 
        ++moved; 
    }
    ~large1() 
    {
        value = 0;
        --count; 
    }
private:
    int data[10];
};


int large1::count = 0;
int large1::copied = 0;
int large1::moved = 0;

struct large2
{
    static int count;
    static int copied;
    static int moved;
    
    char value;
    
    large2(char val) : value(val) 
    { 
        ++count; 
        data[0] = 0; 
    }
    
    large2(large2 const & other)
    {
        value = other.value;
        ++count;
        ++copied; 
    }
    
    large2(large2 && other) 
    {
        value = other.value;
        other.value = 0;
        ++count; 
        ++moved; 
    }
    ~large2() 
    {
        value = 0;
        --count; 
    }
private:
    int data[10];
};

int large2::count = 0;
int large2::copied = 0;
int large2::moved = 0;



int main()
{
#if _LIBCPP_STD_VER > 11
    using std::experimental::any;
    using std::experimental::any_cast;
    // large1.swap(large2)
    {
        any a1(large1{1});
        assert(!a1.empty());
        assert(a1.type() == typeid(large1));
        assert(any_cast<large1 const &>(a1).value == 1);
        assert(large1::count == 1);
        assert(new_called == 1);
        
        any a2(large2{2});
        assert(!a2.empty());
        assert(a2.type() == typeid(large2));
        assert(any_cast<large2 const &>(a2).value == 2);
        assert(large2::count == 1);
        assert(new_called == 2);
        
        a1.swap(a2);
        
        assert(!a1.empty());
        assert(a1.type() == typeid(large2));
        assert(any_cast<large2 const &>(a1).value == 2);
        assert(large2::count == 1);
        
        assert(!a2.empty());
        assert(a2.type() == typeid(large1));
        assert(any_cast<large1 const &>(a2).value == 1);
        assert(large1::count == 1);
        
        assert(new_called == 2);
    }
    assert(new_called == 0);
    assert(large1::count == 0);
    assert(large2::count == 0);
    // large2.swap(large1)
    {
        any a1(large1{1});
        assert(!a1.empty());
        assert(a1.type() == typeid(large1));
        assert(any_cast<large1 const &>(a1).value == 1);
        assert(large1::count == 1);
        assert(new_called == 1);
        
        any a2(large2{2});
        assert(!a2.empty());
        assert(a2.type() == typeid(large2));
        assert(any_cast<large2 const &>(a2).value == 2);
        assert(large2::count == 1);
        assert(new_called == 2);
        
        a2.swap(a1);
        
        assert(!a1.empty());
        assert(a1.type() == typeid(large2));
        assert(any_cast<large2 const &>(a1).value == 2);
        assert(large2::count == 1);
        
        assert(!a2.empty());
        assert(a2.type() == typeid(large1));
        assert(any_cast<large1 const &>(a2).value == 1);
        assert(large1::count == 1);
        
        assert(new_called == 2);
    }
    assert(new_called == 0);
    assert(large1::count == 0);
    assert(large2::count == 0);
#endif  // _LIBCPP_STD_VER > 11
}