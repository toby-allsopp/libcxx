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
#include "../../dummy_resource.hpp"

namespace ex = std::experimental::pmr;

int main()
{
    typedef dummy_resource D;
    dummy_resource d(1);
    ex::memory_resource const & mr1 = d;
    ex::memory_resource const & mr2 = d;

    dummy_resource d2(2);
    ex::memory_resource const & mr3 = d2;

    dummy_resource d3(1);
    ex::memory_resource const & mr4 = d3;
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
        assert(mr1.is_equal(mr2));
        assert(D::is_equal_count == 1);

        assert(mr2.is_equal(mr1));
        assert(D::is_equal_count == 2);
    }
    D::clear();
    {
        assert(!mr1.is_equal(mr3));
        assert(D::is_equal_count == 1);

        assert(!mr3.is_equal(mr1));
        assert(D::is_equal_count == 2);
    }
    D::clear();
    {
        assert(mr1.is_equal(mr4));
        assert(D::is_equal_count == 1);

        assert(mr4.is_equal(mr1));
        assert(D::is_equal_count == 2);
    }
}

