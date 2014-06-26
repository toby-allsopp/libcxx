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


struct small
{
    static int count;
    static int copied;
    static int moved;
    
    char value;
    
    small(char val)
      : value(val)
    {
        ++count;
    }
    
    small(small const & other) throw()
    {
        value = other.value;
        ++count;
        ++copied;
    }
    
    small(small && other) throw()
    {
        value = other.value;
        other.value = 0;
        ++count;
        ++moved;
    }
    
    ~small() 
    {
        value = 0;
        --count; 
    }
};

int small::count = 0;
int small::copied = 0;
int small::moved = 0;

struct large
{
    static int count;
    static int copied;
    static int moved;
    
    char value;
    
    large(char val) : value(val) 
    { 
        ++count; 
        data[0] = 0; 
    }
    
    large(large const & other)
    {
        value = other.value;
        ++count;
        ++copied; 
    }
    
    large(large && other) 
    {
        value = other.value;
        other.value = 0;
        ++count; 
        ++moved; 
    }
    ~large() 
    {
        value = 0;
        --count; 
    }
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
    using std::experimental::any_cast;
    // empty.swap(large)
    {
        any a1;
        assert(a1.empty());
        assert(a1.type() == typeid(void));
        assert(new_called == 0);
        
        any a2(large{1});
        assert(!a2.empty());
        assert(a2.type() == typeid(large));
        assert(large::count == 1);
        assert(new_called == 1);
        assert(any_cast<large const &>(a2).value == 1);
        
        a1.swap(a2);
        
        assert(!a1.empty());
        assert(a1.type() == typeid(large));
        assert(any_cast<large const &>(a1).value == 1);
        
        assert(a2.empty());
        assert(a2.type() == typeid(void));
        assert(large::count == 1);
        assert(new_called == 1);
    }
    assert(new_called == 0);
    assert(large::count == 0);
    // large.swap(empty)
    {
        any a1;
        assert(a1.empty());
        assert(a1.type() == typeid(void));
        assert(new_called == 0);
        
        any a2(large{1});
        assert(!a2.empty());
        assert(a2.type() == typeid(large));
        assert(large::count == 1);
        assert(new_called == 1);
        assert(any_cast<large const &>(a2).value == 1);
        
        a2.swap(a1);
       
        assert(a2.empty());
        assert(a2.type() == typeid(void));
        
        assert(!a1.empty());
        assert(a1.type() == typeid(large));
        assert(any_cast<large const &>(a1).value == 1);
        assert(large::count == 1);
        assert(new_called == 1);
    }
    assert(new_called == 0);
    assert(large::count == 0);
#endif  // _LIBCPP_STD_VER > 11
}