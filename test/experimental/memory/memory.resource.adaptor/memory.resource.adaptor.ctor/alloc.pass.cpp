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

#if _LIBCPP_STD_VER > 11

namespace ex = std::experimental::pmr;

int main()
{
   typedef ex::resource_adaptor<std::allocator<void>> R;
   typedef R::allocator_type A;
   {
        static_assert(
            std::is_constructible<R, A const &>::value
          , ""
          );
        static_assert(
            std::is_constructible<R, A &&>::value
          , ""
          );
        static_assert(
            !std::is_convertible<A const &, R>::value
          , ""
          );
        static_assert(
            !std::is_convertible<A &&, R>::value
          , ""
          );
   }
   {
        A const a;
        R r(a);
        assert(r.get_allocator() == a);
   }
   {
        A const a_orig;
        A a(a_orig);
        R r(std::move(a));
        assert(r.get_allocator() == a_orig);
   }
}
#else /* _LIBCPP_STD_VER <= 11 */
int main() {}
#endif /* _LIBCPP_STD_VER > 11 */
