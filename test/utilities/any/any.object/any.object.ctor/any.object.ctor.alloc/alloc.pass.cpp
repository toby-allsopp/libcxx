//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <expiremental/any>

// any<Alloc>::any(allocator_arg_t, Alloc);

#include <experimental/any>
#include <type_traits>
#include <cassert>
#include "test_allocator.h"

int main()
{
#if _LIBCPP_STD_VER > 11
    using std::experimental::any;
    using std::allocator_arg;
    {
        static_assert(
            std::is_nothrow_constructible<
                any, std::allocator_arg_t, test_allocator<void>
            >::value
          , "Must be nothrow constructible"
          );
    }
    {
        any a(std::allocator_arg, test_allocator<void>());
        assert(a.empty());
        assert(a.type() == typeid(void));
        assert(test_alloc_base::alloc_count == 0);
    }
    assert(test_alloc_base::alloc_count == 0);
#endif /* _LIBCPP_STD_VER > 11 */
}