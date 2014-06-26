//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/any>

// any(any &&);

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


int main() 
{
#if _LIBCPP_STD_VER > 11
    using std::experimental::any;
    using std::experimental::any_cast;
    // noexcept test
    {
        static_assert(
            std::is_nothrow_move_constructible<any>::value
          , "any must be nothrow move constructible"
          );
    }
    // empty object
    {
        any a1;
        assert(a1.empty());
        assert(a1.type() == typeid(void));
        assert(new_called == 0);
        
        any a2(_VSTD::move(a1));
        assert(a2.empty());
        assert(a2.type() == typeid(void));
        assert(new_called == 0);
    }
    assert(new_called == 0);
    // small object
    {
        small s(1);
        any a1(s);
        assert(!a1.empty());
        assert(a1.type() == typeid(small));
        assert(any_cast<small const &>(a1) == s);
        assert(small::count == 2);
        assert(small::copied == 1);
        assert(new_called == 0);
        
        
        any a2(_VSTD::move(a1));
        assert(!a2.empty());
        assert(a2.type() == typeid(small));
        assert(any_cast<small const &>(a2) == s);
        assert(small::copied == 1);
        assert(small::moved == 1);
        assert(new_called == 0);
    }
    assert(small::count == 0);
    assert(new_called == 0);
    // large object
    {
        large l(1);
        any a1(l);
        assert(!a1.empty());
        assert(a1.type() == typeid(large));
        assert(any_cast<large const &>(a1) == l);
        assert(large::count == 2);
        assert(large::copied == 1);
        assert(large::moved == 0);
        assert(new_called == 1);
        
        any a2(_VSTD::move(a1));
        assert(!a2.empty());
        assert(a2.type() == typeid(large));
        assert(any_cast<large const &>(a2) == l);
        // NOTE: We cannot check the count of large 
        // since we just do a pointer swap
        assert(new_called == 1);
    }
    assert(large::count == 0);
    assert(new_called == 0);
#endif
}