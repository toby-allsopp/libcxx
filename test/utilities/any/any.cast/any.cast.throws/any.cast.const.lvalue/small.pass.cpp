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
// ValueType any_cast(any const &);


#include <experimental/any>
#include <cstdlib>
#include <cassert>


int new_called = 0;
int total_new = 0;

void* operator new(std::size_t s) throw(std::bad_alloc)
{
    ++new_called;
    ++total_new;
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

int main() 
{
#if _LIBCPP_STD_VER > 11
    using std::experimental::any;
    using std::experimental::any_cast;
    using std::experimental::bad_any_cast;
    small const s(42);
    any const a((s));
    assert(small::count == 2);
    // no qualifiers
    {
        using T = small;
        using Expect = small;
        using Ret = decltype(any_cast<T>(a));
        static_assert(
            std::is_same<Expect, Ret>::value
          , "Return type unexpected"
          );
        small cp = any_cast<T>(a);
        assert(cp == s);
        assert(!a.empty());
        assert(a.type() == typeid(small));
        assert(small::count == 3);
    }
    assert(small::count == 2);
    // const qualifiers
    {
        using T = small const;
        using Expect = small const;
        using Ret = decltype(any_cast<T>(a));
        static_assert(
            std::is_same<Expect, Ret>::value
          , "Return type unexpected"
          );
        small cp = any_cast<T>(a);
        assert(cp == s);
        assert(!a.empty());
        assert(a.type() == typeid(small));
        assert(small::count == 3);
    }
    assert(small::count == 2);
    // const reference qualifiers
    {
        using T = small const &;
        using Expect = small const &;
        using Ret = decltype(any_cast<T>(a));
        static_assert(
            std::is_same<Expect, Ret>::value
          , "Return type unexpected"
          );
        small const & cp = any_cast<T>(a);
        assert(cp == s);
        assert(!a.empty());
        assert(a.type() == typeid(small));
        assert(small::count == 2);
        
        small const & cp2 = any_cast<T>(a);
        assert(cp2 == s);
        assert(&cp2 == &cp);
        assert(small::count == 2);
    }
    assert(small::count == 2);
    assert(total_new == 0);
#endif
}
