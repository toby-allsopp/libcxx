//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/any>

// template <class Value> any(Value &&)

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
# if _LIBCPP_STD_VER > 11
    using std::experimental::any;
    using std::experimental::any_cast;
    // small const lvalue
    {
        small const s(1);
        any const a(s);
        assert(!a.empty());
        assert(a.type() == typeid(small));
        assert(any_cast<small const &>(a) == s);
        assert(small::count == 2);
        assert(small::copied == 1);
        assert(new_called == 0);
    }
    assert(small::count == 0);
    assert(new_called == 0);
    small::copied = 0;
    small::moved = 0;
    // small non-const lvalue
    {
        small s(1);
        any const a(s);
        assert(!a.empty());
        assert(a.type() == typeid(small));
        assert(any_cast<small const &>(a) == s);
        assert(small::count == 2);
        assert(small::copied == 1);
        assert(new_called == 0);
    }
    assert(small::count == 0);
    assert(new_called == 0);
    small::copied = 0;
    small::moved = 0;
    // small non-const rvalue
    {
        small s(1);
        any const a(static_cast<small &&>(s));
        assert(!a.empty());
        assert(a.type() == typeid(small));
        assert(s.value == 0);
        assert(any_cast<small const &>(a).value == 1);
        assert(small::count == 2);
        assert(small::copied == 0);
        assert(small::moved == 1);
        assert(new_called == 0);
    }                    
    assert(small::count == 0);
    assert(new_called == 0);
    small::copied = 0;
    small::moved = 0;
    // large const lvalue
    {
        large const l(1);
        any const a(l);
        assert(!a.empty());
        assert(a.type() == typeid(large));
        assert(any_cast<large const &>(a) == l);
        assert(new_called == 1);
        assert(large::count == 2);
        assert(large::copied == 1);
        assert(large::moved == 0);
    }
    assert(large::count == 0);
    large::moved = 0;
    large::copied = 0;
    assert(new_called == 0);
    // large non-const lvalue
    {
        large l(1);
        any const a(l);
        assert(!a.empty());
        assert(a.type() == typeid(large));
        assert(any_cast<large const &>(a) == l);
        assert(new_called == 1);
        assert(large::count == 2);
        assert(large::copied == 1);
        assert(large::moved == 0);
    }
    assert(large::count == 0);
    large::moved = 0;
    large::copied = 0;
    assert(new_called == 0);
    // large non-const rvalue
    {
        large l(1);
        any const a(static_cast<large &&>(l));
        assert(!a.empty());
        assert(a.type() == typeid(large));
        assert(l.value == 0);
        assert(any_cast<large const &>(a).value == 1);
        assert(large::count == 2);
        assert(large::moved == 1);
        assert(large::copied == 0);
        assert(new_called == 1);
    }
    assert(large::count == 0);
    assert(new_called == 0);
#endif /* _LIBCPP_STD_VER > 11 */
}