//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/memory_resource>

// memory_resource * null_memory_resource()

#include <experimental/memory_resource>
#include <type_traits>
#include <memory>
#include <new>
#include <cassert>
#include <cstdlib>

#include "count_new.hpp"

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


void test_return()
{
    {
        static_assert(
            std::is_same<decltype(ex::null_memory_resource()), ex::memory_resource*>::value
          , ""
          );
    }
    // assert not null
    {
        assert(ex::null_memory_resource());
    }
    // assert same return value
    {
        assert(ex::null_memory_resource() == ex::null_memory_resource());
    }
}

void test_equality()
{
    // Same object
    {
        ex::memory_resource & r1 = *ex::null_memory_resource();
        ex::memory_resource & r2 = *ex::null_memory_resource();
        assert(r1 == r2);
        assert(r2 == r1);
        assert(!(r1 != r2));
        assert(!(r2 != r1));
    }
    // Different types
    {
        ex::memory_resource & r1 = *ex::null_memory_resource();
        assert_on_compare c;
        ex::memory_resource & r2 = c;
        assert(r1 != r2);
        assert(!(r1 == r2));
    }
}

void test_allocate()
{
    try {
        ex::null_memory_resource()->allocate(1);
        assert(false);
    } catch (std::bad_alloc const &) {
       // do nothing
    } catch (...) {
        assert(false);
    }
    assert(globalMemCounter.checkNewCalledEq(0));
}

void test_deallocate()
{
    ex::null_memory_resource()->deallocate(nullptr, 0);
    assert(globalMemCounter.checkNewCalledEq(0));
    assert(globalMemCounter.checkDeleteCalledEq(0));
}

int main()
{
    test_return();
    test_equality();
    test_allocate();
    test_deallocate();
}

