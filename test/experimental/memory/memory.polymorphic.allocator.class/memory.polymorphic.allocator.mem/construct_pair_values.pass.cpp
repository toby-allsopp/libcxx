//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/memory_resource>

// template <class T> class polymorphic_allocator

// template <class P1, class P2, class U1, class U2>
// void polymorphic_allocator<T>::construct(pair<P1, P2>*, U1 &&, U2 &&)

#include <experimental/memory_resource>
#include <type_traits>
#include <utility>
#include <tuple>
#include <cassert>
#include <cstdlib>
#include "uses_alloc_types.hpp"

#if _LIBCPP_STD_VER > 11

namespace ex = std::experimental::pmr;

void not_uses_alloc_types_test()
{
    // pair<T, T> as T(int)
    {
        typedef reg_not_uses_alloc T;
        typedef std::pair<T, T> P;
        typedef int Tup;
        Tup tup(42);
        typedef ex::polymorphic_allocator<void> A;
        P * ptr = (P*)std::malloc(sizeof(P));
        A a;
        a.construct(ptr, tup, tup);
        assert(T::value_count == 2);
        assert(T::alloc_count == 0);
        assert(ptr->first.x == 42);
        assert(ptr->second.x == 42);
        std::free(ptr);
        T::reset();
    }
    // pair<T, T> as T(int)
    {
        typedef erased_not_uses_alloc T;
        typedef std::pair<T, T> P;
        typedef int Tup;
        Tup tup(42);
        typedef ex::polymorphic_allocator<void> A;
        P * ptr = (P*)std::malloc(sizeof(P));
        A a;
        a.construct(ptr, tup, tup);
        assert(T::value_count == 2);
        assert(T::alloc_count == 0);
        assert(ptr->first.x == 42);
        assert(ptr->second.x == 42);
        std::free(ptr);
        T::reset();
    }
}

void uses_non_erased_alloc_test()
{
    // pair<T, T> as T(int)
    {
        typedef reg_uses_alloc_1 T;
        typedef std::pair<T, T> P;
        typedef int Tup;
        Tup tup(42);
        typedef ex::polymorphic_allocator<void> A;
        P * ptr = (P*)std::malloc(sizeof(P));
        A a;
        a.construct(ptr, tup, tup);
        assert(T::value_count == 2);
        assert(T::alloc_count == 0);
        assert(ptr->first.x == 42);
        assert(ptr->second.x == 42);
        std::free(ptr);
        T::reset();
    }
    // pair<T, T> as T(int)
    {
        typedef reg_uses_alloc_2 T;
        typedef std::pair<T, T> P;
        typedef int Tup;
        Tup tup(42);
        typedef ex::polymorphic_allocator<void> A;
        P * ptr = (P*)std::malloc(sizeof(P));
        A a;
        a.construct(ptr, tup, tup);
        assert(T::value_count == 2);
        assert(T::alloc_count == 0);
        assert(ptr->first.x == 42);
        assert(ptr->second.x == 42);
        std::free(ptr);
        T::reset();
    }
    // pair<T, T> as T(int)
    {
        typedef reg_uses_alloc_3 T;
        typedef std::pair<T, T> P;
        typedef int Tup;
        Tup tup(42);
        typedef ex::polymorphic_allocator<void> A;
        P * ptr = (P*)std::malloc(sizeof(P));
        A a;
        a.construct(ptr, tup, tup);
        assert(T::value_count == 2);
        assert(T::alloc_count == 0);
        assert(ptr->first.x == 42);
        assert(ptr->second.x == 42);
        std::free(ptr);
        T::reset();
    }
}

void uses_erased_alloc_test()
{
    // pair<T, T> as T(int)
    {
        typedef erased_uses_alloc_1 T;
        typedef std::pair<T, T> P;
        typedef int Tup;
        Tup tup(42);
        typedef ex::polymorphic_allocator<void> A;
        P * ptr = (P*)std::malloc(sizeof(P));
        A a;
        a.construct(ptr, tup, tup);
        assert(T::value_count == 0);
        assert(T::alloc_count == 2);
        assert(ptr->first.x == 42);
        assert(ptr->second.x == 42);
        std::free(ptr);
        T::reset();
    }
    // pair<T, T> as T(int)
    {
        typedef erased_uses_alloc_2 T;
        typedef std::pair<T, T> P;
        typedef int Tup;
        Tup tup(42);
        typedef ex::polymorphic_allocator<void> A;
        P * ptr = (P*)std::malloc(sizeof(P));
        A a;
        a.construct(ptr, tup, tup);
        assert(T::value_count == 0);
        assert(T::alloc_count == 2);
        assert(ptr->first.x == 42);
        assert(ptr->second.x == 42);
        std::free(ptr);
        T::reset();
    }
    // pair<T, T> as T(int)
    {
        typedef erased_uses_alloc_3 T;
        typedef std::pair<T, T> P;
        typedef int Tup;
        Tup tup(42);
        typedef ex::polymorphic_allocator<void> A;
        P * ptr = (P*)std::malloc(sizeof(P));
        A a;
        a.construct(ptr, tup, tup);
        assert(T::value_count == 0);
        assert(T::alloc_count == 2);
        assert(ptr->first.x == 42);
        assert(ptr->second.x == 42);
        std::free(ptr);
        T::reset();
    }
}

int main()
{
    not_uses_alloc_types_test();
    uses_non_erased_alloc_test();
    uses_erased_alloc_test();
}
#else /* _LIBCPP_STD_VER <= 11 */
int main() {}
#endif /* _LIBCPP_STD_VER > 11 */
