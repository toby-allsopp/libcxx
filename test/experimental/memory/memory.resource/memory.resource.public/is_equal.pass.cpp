//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/memory_resource>

// virtual bool is_equal(memory_resource const &) const noexcept

#include <experimental/memory_resource>
#include <type_traits>
#include <cassert>
#include "dummy_resource.hpp"

#if _LIBCPP_STD_VER > 11

namespace ex = std::experimental::pmr;

int main()
{
    dummy_resource d;
    ex::memory_resource const & mr1 = d;
    ex::memory_resource const & mr2 = d;
    {
        static_assert(
            std::is_same<decltype(mr1.is_equal(mr2)), bool>::value
          , "Must be bool"
          );
        static_assert(
            noexcept(mr1.is_equal(mr2))
          , "Must be noexcept"
          );
    }
    {
        assert(!mr1.is_equal(mr2));
        assert(is_equal_count == 1);
    }
}
#else /* _LIBCPP_STD_VER <= 11 */
int main() {}
#endif /* _LIBCPP_STD_VER > 11 */
