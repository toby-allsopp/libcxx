//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/any>

// template <class ValueType>
// ValueType any_cast(any &&);

#include <experimental/any>
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
    using std::experimental::bad_any_cast;
    large const s(42);
    assert(new_called == 0);
    assert(large::count == 1);
    // no qualifiers
    {
        any a((s));
        assert(new_called == 1);
        assert(large::count == 2);
        using T = large;
        using Expect = large;
        using Ret = decltype(any_cast<T>(std::move(a)));
        static_assert(
            std::is_same<Expect, Ret>::value
          , "Return type unexpected"
          );
        large cp = any_cast<T>(std::move(a));
        assert(new_called == 1);
        assert(large::count == 3);
        assert(cp == s);
        assert(!a.empty());
        assert(a.type() == typeid(large));
    }
    assert(new_called == 0);
    assert(large::count == 1);
    // const qualifiers
    {
        any a((s));
        assert(new_called == 1);
        assert(large::count == 2);
        using T = large const;
        using Expect = large const;
        using Ret = decltype(any_cast<T>(std::move(a)));
        static_assert(
            std::is_same<Expect, Ret>::value
          , "Return type unexpected"
          );
        large cp = any_cast<T>(std::move(a));
        assert(new_called == 1);
        assert(large::count == 3);
        assert(cp == s);
        assert(!a.empty());
        assert(a.type() == typeid(large));
    }
    assert(new_called == 0);
    assert(large::count == 1);
    // const reference qualifiers
    {
        any a((s));
        assert(new_called == 1);
        assert(large::count == 2);
        using T = large const &;
        using Expect = large const &;
        using Ret = decltype(any_cast<T>(std::move(a)));
        static_assert(
            std::is_same<Expect, Ret>::value
          , "Return type unexpected"
          );
        large const & cp = any_cast<T>(std::move(a));
        assert(new_called == 1);
        assert(large::count == 2);
        assert(cp == s);
        assert(!a.empty());
        assert(a.type() == typeid(large));
        
        large const & cp2 = any_cast<T>(std::move(a));
        assert(new_called == 1);
        assert(large::count == 2);
        assert(cp2 == s);
        assert(&cp2 == &cp);
    }
    assert(new_called == 0);
    assert(large::count == 1);
    // lvalue reference qualifiers
    {
        any a((s));
        assert(new_called == 1);
        assert(large::count == 2);
        using T = large  &;
        using Expect = large &;
        using Ret = decltype(any_cast<T>(std::move(a)));
        static_assert(
            std::is_same<Expect, Ret>::value
          , "Return type unexpected"
          );
        large & cp = any_cast<T>(std::move(a));
        assert(new_called == 1);
        assert(large::count == 2);
        assert(cp == s);
        assert(!a.empty());
        assert(a.type() == typeid(large));
        
        large & cp2 = any_cast<T>(std::move(a));
        assert(new_called == 1);
        assert(large::count == 2);
        assert(cp2 == s);
        assert(&cp2 == &cp);
        
        cp.value = 10;
        assert(cp2.value == 10);
    }
    assert(new_called == 0);
    assert(large::count == 1);
#endif
}