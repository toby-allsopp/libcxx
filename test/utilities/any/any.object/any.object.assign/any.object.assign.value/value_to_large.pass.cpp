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
// any& operator=(Value&&);

#include <experimental/any>
#include <new>
#include <cstdlib>
#include <cassert>

int new_called = 0;
int delete_called = 0;

void* operator new(std::size_t s) throw(std::bad_alloc)
{
    ++new_called;
    return std::malloc(s);
}

void  operator delete(void* p) throw()
{
    --new_called;
    ++delete_called;
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

inline bool operator==(small const & lhs, small const & rhs)
{
    return lhs.value == rhs.value;
}

inline bool operator!=(small const & lhs, small const & rhs)
{
    return lhs.value != rhs.value;
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

inline bool operator==(large1 const & lhs, large1 const & rhs)
{
    return lhs.value == rhs.value;
}

inline bool operator!=(large1 const & lhs, large1 const & rhs)
{
    return lhs.value != rhs.value;
}

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

inline bool operator==(large2 const & lhs, large2 const & rhs)
{
    return lhs.value == rhs.value;
}

inline bool operator!=(large2 const & lhs, large2 const & rhs)
{
    return lhs.value != rhs.value;
}

int main() 
{
#if _LIBCPP_STD_VER > 11
    using std::experimental::any;
    using std::experimental::any_cast;
    // small const lvalue
    {
        large1 const s1(1);
        any a(s1);
        assert(!a.empty());
        assert(a.type() == typeid(large1));
        assert(any_cast<large1 const &>(a) == s1);
        assert(large1::count == 2);
        assert(new_called == 1);
        
        small const s2(2);
        assert(small::count == 1);
     
        a = s2;
        
        assert(!a.empty());
        assert(a.type() == typeid(small));
        assert(any_cast<small const &>(a) == s2);
        
        assert(large1::count == 1);
        assert(small::count == 2);
        assert(new_called == 0);
    }
    // small non-const rvalue
    {
        large1 const s1(1);
        any a(s1);
        assert(!a.empty());
        assert(a.type() == typeid(large1));
        assert(any_cast<large1 const &>(a) == s1);
        assert(large1::count == 2);
        assert(new_called == 1);
        
        small s2(2);
        assert(small::count == 1);
     
        a = std::move(s2);
        
        assert(!a.empty());
        assert(a.type() == typeid(small));
        assert(any_cast<small const &>(a).value == 2);
        
        assert(s2.value == 0);
        
        assert(large1::count == 1);
        assert(small::count == 2);
        assert(new_called == 0);
    }
    assert(large1::count == 0);
    assert(small::count == 0);
    assert(new_called == 0);
    delete_called = 0;
    // large const lvalue
    {
        large1 const s1(1);
        any a(s1);
        assert(!a.empty());
        assert(a.type() == typeid(large1));
        assert(any_cast<large1 const &>(a) == s1);
        assert(large1::count == 2);
        assert(new_called == 1);
        
        large2 const l(1);
        assert(large2::count == 1);
        
        a = l;
        
        assert(!a.empty());
        assert(a.type() == typeid(large2));
        assert(any_cast<large2 const &>(a) == l);
        
        assert(large1::count == 1);
        assert(large2::count == 2);
        assert(new_called == 1);
        assert(delete_called == 1);
    }
    assert(large1::count == 0);
    assert(large2::count == 0);
    assert(new_called == 0);
    delete_called = 0;
    // large non-const rvalue
    {
        large1 const s1(1);
        any a(s1);
        assert(!a.empty());
        assert(a.type() == typeid(large1));
        assert(any_cast<large1 const &>(a) == s1);
        assert(large1::count == 2);
        assert(new_called == 1);
        
        large2 l(1);
        assert(large2::count == 1);
        
        a = std::move(l);
        
        assert(!a.empty());
        assert(a.type() == typeid(large2));
        assert(any_cast<large2 const &>(a).value == 1);
        
        assert(l.value == 0);
        
        assert(large1::count == 1);
        assert(large2::count == 2);
        assert(new_called == 1);
        assert(delete_called == 1);
    }
    assert(large1::count == 0);
    assert(large2::count == 0);
    assert(new_called == 0);
    delete_called = 0;
#endif
}