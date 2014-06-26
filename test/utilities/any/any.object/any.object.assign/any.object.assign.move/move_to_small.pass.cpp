//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/any>

// any(any const &);

#include <experimental/any>
#include <new>
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
    
    small1(char val)
      : value(val)
    {
        ++count;
    }
    
    small1(small1 const & other) throw()
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

inline bool operator==(small1 const & lhs, small1 const & rhs)
{
    return lhs.value == rhs.value;
}

inline bool operator!=(small1 const & lhs, small1 const & rhs)
{
    return lhs.value != rhs.value;
}


struct small2
{
    static int count;
    static int copied;
    static int moved;
    
    char value;
    
    small2(char val)
      : value(val)
    {
        ++count;
    }
    
    small2(small2 const & other) throw()
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

inline bool operator==(small2 const & lhs, small2 const & rhs)
{
    return lhs.value == rhs.value;
}

inline bool operator!=(small2 const & lhs, small2 const & rhs)
{
    return lhs.value != rhs.value;
}

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

inline bool operator==(large const & lhs, large const & rhs)
{
    return lhs.value == rhs.value;
}

inline bool operator!=(large const & lhs, large const & rhs)
{
    return lhs.value != rhs.value;
}

int main() 
{
#if _LIBCPP_STD_VER > 11
    using std::experimental::any;
    using std::experimental::any_cast;
    // empty
    {
        small1 const s1(1);
        any a(s1);
        assert(!a.empty());
        assert(a.type() == typeid(small1));
        assert(any_cast<small1 const &>(a) == s1);
        assert(small1::count == 2);
        assert(new_called == 0);
        
        any a2;
        assert(a2.empty());
        assert(a2.type() == typeid(void));
        assert(new_called == 0);
        
        a = std::move(a2);
        
        assert(a.empty());
        assert(a.type() == typeid(void));
        
        assert(small1::count == 1);
        assert(new_called == 0);
    }
    assert(new_called == 0);
    // small
    {
        small1 const s1(1);
        any a(s1);
        assert(!a.empty());
        assert(a.type() == typeid(small1));
        assert(any_cast<small1 const &>(a) == s1);
        assert(small1::count == 2);
        assert(new_called == 0);
        
        small2 const s2(2);
        any a2(s2);
        assert(!a2.empty());
        assert(a2.type() == typeid(small2));
        assert(any_cast<small2 const &>(a2) == s2);
        assert(small2::count == 2);
        assert(new_called == 0);
        
        a = std::move(a2);
        
        assert(!a.empty());
        assert(a.type() == typeid(small2));
        assert(any_cast<small2 const &>(a) == s2);
        
        assert(small1::count == 1);
        assert(small2::count == 2 || small2::count == 3);
        assert(new_called == 0);
    }
    assert(small1::count == 0);
    assert(small2::count == 0);
    assert(new_called == 0);
    // large
    {
        small1 const s1(1);
        any a(s1);
        assert(!a.empty());
        assert(a.type() == typeid(small1));
        assert(any_cast<small1 const &>(a) == s1);
        assert(small1::count == 2);
        assert(new_called == 0);
        
        large const l(1);
        any a2(l);
        assert(!a2.empty());
        assert(a2.type() == typeid(large));
        assert(any_cast<large const &>(a2) == l);
        assert(large::count == 2);
        assert(new_called == 1);
        
        a = std::move(a2);
        
        assert(!a.empty());
        assert(a.type() == typeid(large));
        assert(any_cast<large const &>(a) == l);
    
        assert(small1::count == 1);
        assert(large::count == 2 || large::count == 3);
        assert(new_called == 1);
    }
    assert(small1::count == 0);
    assert(large::count == 0);
    assert(new_called == 0);
    
#endif
}