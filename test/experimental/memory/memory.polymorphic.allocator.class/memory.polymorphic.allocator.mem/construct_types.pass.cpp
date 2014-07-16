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

// template <class U, class ...Args>
// void polymorphic_allocator<T>::construct(U *, Args &&...)

#include <experimental/memory_resource>
#include <type_traits>
#include <cassert>
#include <cstdlib>
#include "uses_alloc_types.hpp"

#if _LIBCPP_STD_VER > 11

namespace ex = std::experimental::pmr;

void not_uses_alloc_types_test()
{
    // T(int)
    {
        typedef reg_not_uses_alloc T;
        typedef ex::polymorphic_allocator<T> A;
        T * ptr = (T*)std::malloc(sizeof(T));
        A a;
        a.construct(ptr, 42);
        assert(T::value_count == 1);
        assert(T::alloc_count == 0);
        assert(ptr->x == 42);
        std::free(ptr);
        T::reset();
    }
    // T(allocator_arg_t, std::allocator<T>, int)
    {
        typedef reg_not_uses_alloc T;
        typedef ex::polymorphic_allocator<T> A;
        T * ptr = (T*)std::malloc(sizeof(T));
        A a;
        a.construct(ptr, std::allocator_arg, std::allocator<T>(), 42);
        assert(T::value_count == 0);
        assert(T::alloc_count == 1);
        assert(ptr->x == 42);
        std::free(ptr);
        T::reset();
    }
    // T(int)
    {
        typedef erased_not_uses_alloc T;
        typedef ex::polymorphic_allocator<T> A;
        T * ptr = (T*)std::malloc(sizeof(T));
        A a;
        a.construct(ptr, 42);
        assert(T::value_count == 1);
        assert(T::alloc_count == 0);
        assert(ptr->x == 42);
        std::free(ptr);
        T::reset();
    }
    // T(allocator_arg_t, std::allocator<T>, int)
    {
        typedef erased_not_uses_alloc T;
        typedef ex::polymorphic_allocator<T> A;
        T * ptr = (T*)std::malloc(sizeof(T));
        A a;
        a.construct(ptr, std::allocator_arg, nullptr, 42);
        assert(T::value_count == 0);
        assert(T::alloc_count == 1);
        assert(ptr->x == 42);
        std::free(ptr);
        T::reset();
    }
}

void uses_non_erased_alloc_test()
{
    // T(int)
    {
        typedef reg_uses_alloc_1 T;
        typedef ex::polymorphic_allocator<T> A;
        T * ptr = (T*)std::malloc(sizeof(T));
        A a;
        a.construct(ptr, 42);
        assert(T::value_count == 1);
        assert(T::alloc_count == 0);
        assert(ptr->x == 42);
        std::free(ptr);
        T::reset();
    }
    // T(allocator_arg_t, std::allocator<T>, int)
    {
        typedef reg_uses_alloc_1 T;
        typedef ex::polymorphic_allocator<T> A;
        T * ptr = (T*)std::malloc(sizeof(T));
        A a;
        a.construct(ptr, std::allocator_arg, std::allocator<T>(), 42);
        assert(T::value_count == 0);
        assert(T::alloc_count == 1);
        assert(ptr->x == 42);
        std::free(ptr);
        T::reset();
    }
    // T(int)
    {
        typedef reg_uses_alloc_2 T;
        typedef ex::polymorphic_allocator<T> A;
        T * ptr = (T*)std::malloc(sizeof(T));
        A a;
        a.construct(ptr, 42);
        assert(T::value_count == 1);
        assert(T::alloc_count == 0);
        assert(ptr->x == 42);
        std::free(ptr);
        T::reset();
    }
    // T(int, Alloc const &)
    {
        typedef reg_uses_alloc_2 T;
        typedef ex::polymorphic_allocator<T> A;
        T * ptr = (T*)std::malloc(sizeof(T));
        A a;
        a.construct(ptr, 42, std::allocator<T>());
        assert(T::value_count == 0);
        assert(T::alloc_count == 1);
        assert(ptr->x == 42);
        std::free(ptr);
        T::reset();
    }
    // T(int)
    {
        typedef reg_uses_alloc_3 T;
        typedef ex::polymorphic_allocator<T> A;
        T * ptr = (T*)std::malloc(sizeof(T));
        A a;
        a.construct(ptr, 42);
        assert(T::value_count == 1);
        assert(T::alloc_count == 0);
        assert(ptr->x == 42);
        std::free(ptr);
        T::reset();
    }
    // T(allocator_arg_t, std::allocator<T>, int)
    {
        typedef reg_uses_alloc_3 T;
        typedef ex::polymorphic_allocator<T> A;
        T * ptr = (T*)std::malloc(sizeof(T));
        A a;
        a.construct(ptr, std::allocator_arg, std::allocator<T>(), 42);
        assert(T::value_count == 0);
        assert(T::alloc_count == 1);
        assert(ptr->x == 42);
        std::free(ptr);
        T::reset();
    }
}


void uses_erased_alloc_test()
{
    // T(int)
    {
        typedef erased_uses_alloc_1 T;
        typedef ex::polymorphic_allocator<T> A;
        T * ptr = (T*)std::malloc(sizeof(T));
        A a;
        a.construct(ptr, 42);
        assert(T::value_count == 0);
        assert(T::alloc_count == 1);
        assert(ptr->x == 42);
        std::free(ptr);
        T::reset();
    }
    // T(int)
    {
        typedef erased_uses_alloc_2 T;
        typedef ex::polymorphic_allocator<T> A;
        T * ptr = (T*)std::malloc(sizeof(T));
        A a;
        a.construct(ptr, 42);
        assert(T::value_count == 0);
        assert(T::alloc_count == 1);
        assert(ptr->x == 42);
        std::free(ptr);
        T::reset();
    }
    // T(int)
    {
        typedef erased_uses_alloc_3 T;
        typedef ex::polymorphic_allocator<T> A;
        T * ptr = (T*)std::malloc(sizeof(T));
        A a;
        a.construct(ptr, 42);
        assert(T::value_count == 0);
        assert(T::alloc_count == 1);
        assert(ptr->x == 42);
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
