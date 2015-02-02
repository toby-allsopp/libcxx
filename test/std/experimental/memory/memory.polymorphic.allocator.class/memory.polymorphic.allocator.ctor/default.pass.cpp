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

// polymorphic_allocator<T>::polymorphic_allocator() noexcept

#include <experimental/memory_resource>
#include <type_traits>
#include <cassert>

namespace ex = std::experimental::pmr;

int main()
{
    {
        static_assert(
            std::is_nothrow_default_constructible<ex::polymorphic_allocator<void>>::value
          , "Must me nothrow default constructible"
          );
    }
    {
        typedef ex::polymorphic_allocator<void> A;
        A const a;
        assert(a.resource() == ex::get_default_resource());
    }
}
