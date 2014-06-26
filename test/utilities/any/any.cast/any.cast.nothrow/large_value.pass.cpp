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
// ValueType const* any_cast(any const *) noexcept;
//
// template <class ValueType>
// ValueType * any_cast(any *) noexcept;

#include <experimental/any>
#include <type_traits>
#include <cstdlib>
#include <cassert>

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


#if _LIBCPP_STD_VER > 11

using std::experimental::any;
using std::experimental::any_cast;

void non_const_test()
{
    large const s(42);
    
    // const large
    {
        any a(s);
        using T = large const;
        using Expect = large const*;
        using Ret = decltype(any_cast<T>(&a));
        static_assert(
            std::is_same<Expect, Ret>::value
          , "Expected return type does not match actual return type"
          );
        
        Expect ptr1 = any_cast<T>(&a);
        assert(ptr1);
        assert(*ptr1 == s);
        
        Expect ptr2 = any_cast<T>(&a);
        assert(ptr1 == ptr2);
    }
    // non-const large
    {
        any a(s);
        using T = large;
        using Expect = large*;
        using Ret = decltype(any_cast<T>(&a));
        static_assert(
            std::is_same<Expect, Ret>::value
          , "Expected return type does not match actual return type"
          );
        
        Expect ptr1 = any_cast<T>(&a);
        assert(ptr1);
        assert(*ptr1 == s);
        
        Expect ptr2 = any_cast<T>(&a);
        assert(ptr1 == ptr2);
        
        ptr1->value = 12;
        assert(ptr2->value == 12);
    }
    {
        any a(s);
        using T = large const &;
        using Expect = large const *;
        using Ret = decltype(any_cast<T>(&a));
        static_assert(
            std::is_same<Expect, Ret>::value
          , "Expected return type does not match actual return type"
          );
        
        Expect ptr1 = any_cast<T>(&a);
        assert(ptr1);
        assert(*ptr1 == s);
        
        Expect ptr2 = any_cast<T>(&a);
        assert(ptr1 == ptr2);
    }
    {
        any a(s);
        using T = large &;
        using Expect = large *;
        using Ret = decltype(any_cast<T>(&a));
        static_assert(
            std::is_same<Expect, Ret>::value
          , "Expected return type does not match actual return type"
          );
        
        Expect ptr1 = any_cast<T>(&a);
        assert(ptr1);
        assert(*ptr1 == s);
        
        Expect ptr2 = any_cast<T>(&a);
        assert(ptr1 == ptr2);
        
        ptr1->value = 12;
        assert(ptr2->value == 12);
    }
}

void const_test()
{
    large const s(42);
    
    // const large
    {
        any const a(s);
        using T = large const;
        using Expect = large const*;
        using Ret = decltype(any_cast<T>(&a));
        static_assert(
            std::is_same<Expect, Ret>::value
          , "Expected return type does not match actual return type"
          );
        
        Expect ptr1 = any_cast<T>(&a);
        assert(ptr1);
        assert(*ptr1 == s);
        
        Expect ptr2 = any_cast<T>(&a);
        assert(ptr1 == ptr2);
    }
    // const reference
    {
        any const a(s);
        using T = large const &;
        using Expect = large const *;
        using Ret = decltype(any_cast<T>(&a));
        static_assert(
            std::is_same<Expect, Ret>::value
          , "Expected return type does not match actual return type"
          );
        
        Expect ptr1 = any_cast<T>(&a);
        assert(ptr1);
        assert(*ptr1 == s);
        
        Expect ptr2 = any_cast<T>(&a);
        assert(ptr1 == ptr2);
    }
}

int main() 
{
    non_const_test();
    const_test();
}
# else /* _LIBCPP_STD_VER <= 11 */
int main()
{
}
#endif /* _LIBCPP_STD_VER > 11 */