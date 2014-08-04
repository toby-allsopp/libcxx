//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/memory_resource>

// bool operator!=(memory_resource const &, memory_resource const &) noexcept;

#include <experimental/memory_resource>
#include <type_traits>
#include <cassert>

namespace ex = std::experimental::pmr;

int called = 0;

struct dummy_resource : public ex::memory_resource
{
public:
    dummy_resource( int xid ) : id(xid) {}
    dummy_resource(dummy_resource const &) = default;

    int id;
protected:
    virtual void * do_allocate(std::size_t, std::size_t) 
    { assert(false); return nullptr; }
    virtual void do_deallocate(void *, std::size_t, std::size_t) 
    { assert(false); }
    virtual bool do_is_equal(memory_resource const & other) const noexcept
    {
        ++called;
        auto ptr = dynamic_cast<dummy_resource const *>(&other);
        return ptr && ptr->id == id;
    }
};

int main()
{
    // check return types
    {
        ex::memory_resource const * mr1(nullptr);
        ex::memory_resource const * mr2(nullptr);
        static_assert(std::is_same<decltype(*mr1 != *mr2), bool>::value, "");
        static_assert(noexcept(*mr1 != *mr2), "");
    }
    // not equal
    {
        dummy_resource r1(1);
        dummy_resource r2(2);
        ex::memory_resource const & mr1 = r1;
        ex::memory_resource const & mr2 = r2;

        assert(mr1 != mr2);
        assert(called == 1);

        assert(mr2 != mr1);
        assert(called == 2);
    }
    called = 0;
    // equal
    {
        dummy_resource r1(1);
        dummy_resource r2(1);
        ex::memory_resource const & mr1 = r1;
        ex::memory_resource const & mr2 = r2;

        assert(!(mr1 != mr2));
        assert(called == 1);

        assert(!(mr2 != mr1));
        assert(called == 2);
    }
    called = 0;
    // equal same object
    {
        dummy_resource r1(1);
        ex::memory_resource const & mr1 = r1;
        ex::memory_resource const & mr2 = r1;

        assert(!(mr1 != mr2));
        assert(called == 0);

        assert(!(mr2 != mr1));
        assert(called == 0);
    }
}

