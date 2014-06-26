//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <expiremental/any>

// any::any<Alloc>(allocator_arg_t, Alloc const &, any const &);

#include <experimental/any>
#include <type_traits>
#include <cassert>
#include "test_allocator.h"


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
    //empty
    {
        any const a1;
        assert(a1.empty());
        assert(a1.type() == typeid(void));
        
        any const a2(std::allocator_arg, test_allocator<void>(), a1);
        assert(a2.empty());
        assert(a2.type() == typeid(void));
        assert(test_alloc_base::alloc_count == 0);
    }
    assert(test_alloc_base::alloc_count == 0);
    // small type
    {
        small const s(1);
        any const a1(s);
        assert(!a1.empty());
        assert(a1.type() == typeid(small));
        assert(any_cast<small const &>(a1) == s);
        assert(small::count == 2);
        assert(small::copied == 1);
        assert(small::moved == 0);
        
        any const a2(std::allocator_arg, test_allocator<small>(), a1);
        assert(!a2.empty());
        assert(a2.type() == typeid(small));
        assert(any_cast<small const &>(a2) == s);
        assert(small::count == 3);
        assert(small::copied == 2);
        assert(small::moved == 0);
        
        assert(!a1.empty());
        assert(a1.type() == typeid(small));
        assert(any_cast<small const &>(a1) == s);
        
        assert(test_alloc_base::alloc_count == 0);
    }
    assert(small::count == 0);
    assert(test_alloc_base::alloc_count == 0);
    // large type
    {
        large const l(1);
        any const a1(l);
        assert(!a1.empty());
        assert(a1.type() == typeid(large));
        assert(any_cast<large const &>(a1) == l);
        assert(large::count == 2);
        assert(large::copied == 1);
        assert(large::moved == 0);
        
        any const a2(std::allocator_arg, test_allocator<large>(), a1);
        assert(!a2.empty());
        assert(a2.type() == typeid(large));
        assert(any_cast<large const &>(a2) == l);
        assert(large::count == 3);
        assert(large::copied == 2);
        assert(large::moved == 0);
        
        assert(!a1.empty());
        assert(a1.type() == typeid(large));
        assert(any_cast<large const &>(a1) == l);
        
        assert(test_alloc_base::alloc_count == 0);
    }
    assert(large::count == 0);
    assert(test_alloc_base::alloc_count == 0);
#endif
}
