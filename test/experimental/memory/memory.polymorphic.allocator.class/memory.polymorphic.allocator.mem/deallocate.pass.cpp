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

// T* polymorphic_allocator<T>::deallocate(T*, size_t size)

#include <experimental/memory_resource>
#include <type_traits>
#include <cassert>

#if _LIBCPP_STD_VER > 11

namespace ex = std::experimental::pmr;

int alive_count = 0;
int alloc_count = 0;
int dealloc_count = 0;
int is_equal_count = 0;

class check_allocator : public ex::memory_resource
{
public:
    check_allocator(std::size_t s, std::size_t m) : m_size(s), m_align(m) {}
    std::size_t m_size, m_align;
protected:
    virtual void * do_allocate(std::size_t s, std::size_t a) 
    {
        ++alloc_count;
        ++alive_count;
        assert(s == m_size);
        assert(a == m_align);
        return nullptr;
    }

    virtual void do_deallocate(void *, std::size_t s, std::size_t a)
    { 
        ++dealloc_count;
        --alive_count;
        assert(s == m_size);
        assert(a == m_align);
    }

    virtual bool do_is_equal(memory_resource const & other) const noexcept
    {
        ++is_equal_count;
        return false;
    }
};

int main()
{
    {
        typedef char V;
        typedef ex::polymorphic_allocator<V> A;
        A a;
        static_assert(
            std::is_same<decltype(a.deallocate(nullptr, 0)), void>::value
          , "Must be void"
          );
    }
    {
        typedef char V;
        typedef ex::polymorphic_allocator<V> A;
        check_allocator c(sizeof(V), alignof(V));
        ex::memory_resource * mr1 = &c;
        A a(mr1);
        a.deallocate(nullptr, 1);
        assert(dealloc_count == 1);
        assert(alive_count == -1);
    }
    dealloc_count = 0;
    alive_count = 0;
    {
        typedef char V;
        typedef ex::polymorphic_allocator<V> A;
        static_assert(
            std::alignment_of<V>::value == alignof(V)
          , "");
        check_allocator c(sizeof(V) * 5, alignof(V));
        ex::memory_resource * mr1 = &c;
        A a(mr1);
        a.deallocate(nullptr, 5);
        assert(dealloc_count == 1);
        assert(alive_count == -1);
    }
    dealloc_count = 0;
    alive_count = 0;
    {
        typedef unsigned long V;
        typedef ex::polymorphic_allocator<V> A;
        check_allocator c(sizeof(V), alignof(V));
        ex::memory_resource * mr1 = &c;
        A a(mr1);
        a.deallocate(nullptr, 1);
        assert(dealloc_count == 1);
        assert(alive_count == -1);
    }
    dealloc_count = 0;
    alive_count = 0;
    {
        typedef unsigned long V;
        typedef ex::polymorphic_allocator<V> A;
        check_allocator c(sizeof(V) * 5, alignof(V));
        ex::memory_resource * mr1 = &c;
        A a(mr1);
        a.deallocate(nullptr, 5);
        assert(dealloc_count == 1);
        assert(alive_count == -1);
    }
}
#else /* _LIBCPP_STD_VER <= 11 */
int main() {}
#endif /* _LIBCPP_STD_VER > 11 */
