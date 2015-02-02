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

// bool do_is_equal(memory_resource const &) const noexcept;


#include <experimental/memory_resource>
#include <type_traits>
#include <memory>
#include <cassert>
#include "allocators.h"

using std::size_t;
namespace ex = std::experimental::pmr;

struct assert_on_compare : public ex::memory_resource
{
protected:
    virtual void * do_allocate(size_t, size_t)
    {
        assert(false);
        return 0;
    }

    virtual void do_deallocate(void *, size_t, size_t)
    {
        assert(false);
    }

    virtual bool do_is_equal(ex::memory_resource const &) const _NOEXCEPT
    {
        assert(false);
    }
};

int main()
{
    typedef A1<char> Alloc1;
    typedef ex::resource_adaptor<Alloc1> R1;

    typedef std::allocator<char> Alloc2;
    typedef ex::resource_adaptor<Alloc2> R2;
    {
        // Assumption required for testing
        static_assert(
            std::is_same<R1::allocator_type, Alloc1>::value
          , ""
          );
        static_assert(
            std::is_same<R2::allocator_type, Alloc2>::value
          , ""
          );
    }
    // equal same type
    {
        Alloc1 a1(1);
        R1 const r1(a1);
        ex::memory_resource const & m1 = r1;

        Alloc1 a2(1);
        R1 const r2(a2);
        ex::memory_resource const & m2 = r2;

        assert(m1 == m2);
        assert(m2 == m1);
        assert(!(m1 != m2));
        assert(!(m2 != m1));
    }
    // not equal same type
    {
        Alloc1 a1(1);
        R1 const r1(a1);
        ex::memory_resource const & m1 = r1;

        Alloc1 a2(2);
        R1 const r2(a2);
        ex::memory_resource const & m2 = r2;

        assert(m1 != m2);
        assert(m2 != m1);
        assert(!(m1 == m2));
        assert(!(m2 == m1));
    }
    // different allocator types
    {
        Alloc1 a1(1);
        R1 const r1(a1);
        ex::memory_resource const & m1 = r1;

        Alloc2 a2;
        R2 const r2(a2);
        ex::memory_resource const & m2 = r2;

        assert(m1 != m2);
        assert(m2 != m1);
        assert(!(m1 == m2));
        assert(!(m2 == m1));
    }
    // totally different memory_resource bases
    {
        Alloc1 a1(1);
        R1 const r1(a1);
        ex::memory_resource const & m1 = r1;

        assert_on_compare r2;
        ex::memory_resource const & m2 = r2;

        assert(m1 != m2);
        assert(!(m1 == m2));
    }
}

