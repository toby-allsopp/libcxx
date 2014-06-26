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


#if _LIBCPP_STD_VER > 11

using std::experimental::any;
using std::experimental::any_cast;
using namespace std;
void non_const_test()
{
    small const s(42);
    
    // const small
    {
        any a(s);
        using T = small const;
        using Expect = small const*;
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
    // non-const small
    {
        any a(s);
        using T = small;
        using Expect = small*;
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
        using T = small const &;
        using Expect = small const *;
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
        using T = small &;
        using Expect = small *;
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
    small const s(42);
    any const a(s);
    // const small
    {
        using T = small const;
        using Expect = small const*;
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
        any a(s);
        using T = small const &;
        using Expect = small const *;
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