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
    small const s(42);
    {
        any a(s);
        using T = void;
        using Expect = void*;
        using Ret = decltype(any_cast<T>(&a));
        static_assert(
            std::is_same<Expect, Ret>::value
          , "Expected return type does not match actual return type"
          );
        Ret ret = any_cast<T>(&a);
        assert(ret == nullptr);
        
        small const* obj = any_cast<small const>(&a);
        assert(obj);
        assert(*obj == s);
    }
    {
        any a(s);
        using T = void const;
        using Expect = void const*;
        using Ret = decltype(any_cast<T>(&a));
        static_assert(
            std::is_same<Expect, Ret>::value
          , "Expected return type does not match actual return type"
          );
        Ret ret = any_cast<T>(&a);
        assert(ret == nullptr);
        
        small const* obj = any_cast<small const>(&a);
        assert(obj);
        assert(*obj == s);
    }
    {
        any a(s);
        using T = int;
        using Expect = int*;
        using Ret = decltype(any_cast<T>(&a));
        static_assert(
            std::is_same<Expect, Ret>::value
          , "Expected return type does not match actual return type"
          );
        Ret ret = any_cast<T>(&a);
        assert(ret == nullptr);
        
        small const* obj = any_cast<small const>(&a);
        assert(obj);
        assert(*obj == s);
    }
    {
        any a(s);
        using T = int const;
        using Expect = int const*;
        using Ret = decltype(any_cast<T>(&a));
        static_assert(
            std::is_same<Expect, Ret>::value
          , "Expected return type does not match actual return type"
          );
        Ret ret = any_cast<T>(&a);
        assert(ret == nullptr);
        
        small const* obj = any_cast<small const>(&a);
        assert(obj);
        assert(*obj == s);
    }
    {
        any a(s);
        using T = large;
        using Expect = large*;
        using Ret = decltype(any_cast<T>(&a));
        static_assert(
            std::is_same<Expect, Ret>::value
          , "Expected return type does not match actual return type"
          );
        Ret ret = any_cast<T>(&a);
        assert(ret == nullptr);
        
        small const* obj = any_cast<small const>(&a);
        assert(obj);
        assert(*obj == s);
    }
    {
        any a(s);
        using T = large const;
        using Expect = large const*;
        using Ret = decltype(any_cast<T>(&a));
        static_assert(
            std::is_same<Expect, Ret>::value
          , "Expected return type does not match actual return type"
          );
        Ret ret = any_cast<T>(&a);
        assert(ret == nullptr);
        
        small const* obj = any_cast<small const>(&a);
        assert(obj);
        assert(*obj == s);
    }
}

void const_test()
{
    small const s(42);
    {
        any const a(s);
        using T = void;
        using Expect = void const*;
        using Ret = decltype(any_cast<T>(&a));
        static_assert(
            std::is_same<Expect, Ret>::value
          , "Expected return type does not match actual return type"
          );
        Ret ret = any_cast<T>(&a);
        assert(ret == nullptr);
        
        small const* obj = any_cast<small const>(&a);
        assert(obj);
        assert(*obj == s);
    }
    {
        any const a(s);
        using T = void const;
        using Expect = void const*;
        using Ret = decltype(any_cast<T>(&a));
        static_assert(
            std::is_same<Expect, Ret>::value
          , "Expected return type does not match actual return type"
          );
        Ret ret = any_cast<T>(&a);
        assert(ret == nullptr);
        
        small const* obj = any_cast<small const>(&a);
        assert(obj);
        assert(*obj == s);
    }
    {
        any const a(s);
        using T = int;
        using Expect = int const*;
        using Ret = decltype(any_cast<T>(&a));
        static_assert(
            std::is_same<Expect, Ret>::value
          , "Expected return type does not match actual return type"
          );
        Ret ret = any_cast<T>(&a);
        assert(ret == nullptr);
        
        small const* obj = any_cast<small const>(&a);
        assert(obj);
        assert(*obj == s);
    }
    {
        any const a(s);
        using T = int const;
        using Expect = int const*;
        using Ret = decltype(any_cast<T>(&a));
        static_assert(
            std::is_same<Expect, Ret>::value
          , "Expected return type does not match actual return type"
          );
        Ret ret = any_cast<T>(&a);
        assert(ret == nullptr);
        
        small const* obj = any_cast<small const>(&a);
        assert(obj);
        assert(*obj == s);
    }
    {
        any const a(s);
        using T = large;
        using Expect = large const*;
        using Ret = decltype(any_cast<T>(&a));
        static_assert(
            std::is_same<Expect, Ret>::value
          , "Expected return type does not match actual return type"
          );
        Ret ret = any_cast<T>(&a);
        assert(ret == nullptr);
        
        small const* obj = any_cast<small const>(&a);
        assert(obj);
        assert(*obj == s);
    }
    {
        any const a(s);
        using T = large const;
        using Expect = large const*;
        using Ret = decltype(any_cast<T>(&a));
        static_assert(
            std::is_same<Expect, Ret>::value
          , "Expected return type does not match actual return type"
          );
        Ret ret = any_cast<T>(&a);
        assert(ret == nullptr);
        
        small const* obj = any_cast<small const>(&a);
        assert(obj);
        assert(*obj == s);
    }
}

int main() 
{
    non_const_test();
    const_test();
}
    
#else /* _LIBCPP_STD_VER <= 11 */
int main()
{
    
}
#endif /* _LIBCPP_STD_VER > 11 */