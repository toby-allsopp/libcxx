//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/memory_resource>

// template <class Alloc> class resource_adaptor_imp;

// resource_adaptor_imp<Alloc>::resource_adaptor_imp(Alloc const &)
// resource_adaptor_imp<Alloc>::resource_adaptor_imp(Alloc &&)


#include <experimental/memory_resource>
#include <type_traits>
#include <memory>
#include <cassert>
#include "allocators.h"

namespace ex = std::experimental::pmr;

int main()
{
    typedef A1<char> AllocT;
    typedef ex::resource_adaptor<AllocT> R;
    {
        // Assumption required for testing
        static_assert(
            std::is_same<R::allocator_type, AllocT>::value
          , ""
          );
    }
    {
        static_assert(
            std::is_constructible<R, AllocT const &>::value
        , ""
        );
        static_assert(
            std::is_constructible<R, AllocT &&>::value
        , ""
        );
        static_assert(
            !std::is_convertible<AllocT const &, R>::value
        , ""
        );
        static_assert(
            !std::is_convertible<AllocT &&, R>::value
        , ""
        );
    }
    {
        AllocT const a(42);
        R const r(a);
        assert(AllocT::copy_called);
        assert(AllocT::move_called == false);
        assert(r.get_allocator() == a);
    }
    AllocT::copy_called = false;
    {
        AllocT a;
        R const r(std::move(a));
        assert(AllocT::copy_called == false);
        assert(AllocT::move_called);
        assert(r.get_allocator() == a);
    }
}

