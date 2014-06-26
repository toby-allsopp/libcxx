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
// any& operator=(Value&);

#include <experimental/any>
#include <new>
#include <exception>
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
    ++delete_called;
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

inline bool operator==(small const & lhs, small const & rhs)
{
    return lhs.value == rhs.value;
}

inline bool operator!=(small const & lhs, small const & rhs)
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


struct throws_on_copy
{
    static int count;
    
    throws_on_copy() { ++count; }
    
    throws_on_copy(throws_on_copy const &)
    {
        throw std::exception();
    }
    
    throws_on_copy(throws_on_copy &&) throw()
    {
        ++count;
    }
    
    ~throws_on_copy() { --count; }
};

int throws_on_copy::count = 0;

int main() 
{
#if _LIBCPP_STD_VER > 11
    using std::experimental::any;
    using std::experimental::any_cast;
    // const lvalue to empty
    {
        any a;
        assert(a.empty());
        assert(a.type() == typeid(void));
        assert(new_called == 0);
        
        throws_on_copy v;
        assert(throws_on_copy::count == 1);
        
        try {
            a = v;
            assert(false);
        } catch (std::exception) {}
        
        assert(a.empty());
        assert(a.type() == typeid(void));
        
        assert(throws_on_copy::count == 1);
        assert(new_called == 0);
        assert(delete_called == 0);
    }
    assert(new_called == 0);
    assert(throws_on_copy::count == 0);
    delete_called = 0;
    // const lvalue to small
    {
        small const s(1);
        any a(s);
        assert(!a.empty());
        assert(a.type() == typeid(small));
        assert(any_cast<small const &>(a).value == 1);
        assert(small::count == 2);
        assert(new_called == 0);
        
        throws_on_copy v;
        assert(throws_on_copy::count == 1);
        
        try {
            a = v;
            assert(false);
        } catch (std::exception) {}
        
        assert(!a.empty());
        assert(a.type() == typeid(small));
        assert(any_cast<small const &>(a) == s);
        assert(small::count == 2);
        
        assert(throws_on_copy::count == 1);
        assert(new_called == 0);
        assert(delete_called == 0);
    }
    assert(small::count == 0);
    assert(throws_on_copy::count == 0);
    assert(new_called == 0);
    delete_called = 0;
    // const lvalue to large
    {
        large const s(1);
        any a(s);
        assert(!a.empty());
        assert(a.type() == typeid(large));
        assert(any_cast<large const &>(a).value == 1);
        assert(large::count == 2);
        assert(new_called == 1);
        
        throws_on_copy v;
        assert(throws_on_copy::count == 1);
        
        try {
            a = v;
            assert(false);
        } catch (std::exception) {}
        
        assert(!a.empty());
        assert(a.type() == typeid(large));
        assert(any_cast<large const &>(a) == s);
        assert(large::count == 2);
        
        assert(throws_on_copy::count == 1);
        assert(new_called == 1);
        assert(delete_called == 0);
    }
    assert(large::count == 0);
    assert(throws_on_copy::count == 0);
    assert(new_called == 0);
    delete_called = 0;
    
#endif
}