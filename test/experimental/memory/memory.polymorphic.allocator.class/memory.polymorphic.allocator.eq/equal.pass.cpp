//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/memory_resource>

// template <class T> class polymorphic_allocator;

// template <class T>
// bool operator==(
//      polymorphic_allocator<T> const &
//    , polymorphic_allocator<T> const &) noexcept

#include <experimental/memory_resource>
#include <type_traits>
#include <cassert>

#if _LIBCPP_STD_VER > 11

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
    dummy_resource d1(1);
    dummy_resource d2(1);
    dummy_resource d3(2);
    ex::memory_resource * m1 = &d1;
    ex::memory_resource * m2 = &d2;
    ex::memory_resource * m3 = &d3;
    typedef ex::polymorphic_allocator<void> A1;
    typedef ex::polymorphic_allocator<int> A2;
    // check return types
    {
        A1 const a1;
        A2 const a2;
        static_assert(
            std::is_same<decltype(a1 == a2), bool>::value
          , ""
          );
        static_assert(
            noexcept(a1 == a2)
          , ""
          );
    }
    // equal same type (different resource)
    {
        A1 const a1(m1);
        A1 const a2(m2);

        assert(a1 == a2);
        assert(called == 1);

        assert(a2 == a1);
        assert(called == 2);
    }
    called = 0;
    // equal same type (same resource)
    {
        A1 const a1(m1);
        A1 const a2(m1);

        assert(a1 == a2);
        assert(called == 0);

        assert(a2 == a1);
        assert(called == 0);
    }
    called = 0;
    // not equal same type
    {
        A1 const a1(m1);
        A1 const a2(m3);

        assert(!(a1 == a2));
        assert(called == 1);

        assert(!(a2 == a1));
        assert(called == 2);
    }
    called = 0;
    // equal different types (different resource)
    {
        A1 const a1(m1);
        A2 const a2(m2);

        assert(a1 == a2);
        assert(called == 1);

        assert(a2 == a1);
        assert(called == 2);
    }
    called = 0;
    // equal different types (same resource)
    {
        A1 const a1(m1);
        A2 const a2(m1);

        assert(a1 == a2);
        assert(called == 0);

        assert(a2 == a1);
        assert(called == 0);
    }
    called = 0;
    // not equal different types
    {
        A1 const a1(m1);
        A2 const a2(m3);

        assert(!(a1 == a2));
        assert(called == 1);

        assert(!(a2 == a1));
        assert(called == 2);
    }
    called = 0;
}
#else /* _LIBCPP_STD_VER <= 11 */
int main() {}
#endif /* _LIBCPP_STD_VER > 11 */
