//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#ifndef SUPPORT_DUMMY_MEMORY_RESOURCE_HPP
#define SUPPORT_DUMMY_MEMORY_RESOURCE_HPP

#include <experimental/memory_resource>
#include <cstdlib>

class dummy_resource : public std::experimental::pmr::memory_resource
{
public:
    static int alive;
    static int alloc_count;
    static int dealloc_count;
    static int is_equal_count;
    static std::size_t last_size;
    static std::size_t last_align;
    static void * last_pointer;

    static void clear()
    {
        alloc_count = 0;
        dealloc_count = 0;
        is_equal_count = 0;
        last_size = 0;
        last_align = 0;
        last_pointer = nullptr;
    }

    int x;
    dummy_resource(int xx = 0) : x(xx) {}
    ~dummy_resource() {}
protected:
    virtual void * do_allocate(std::size_t s, std::size_t a)
    {
        ++alive;
        ++alloc_count;
        last_size = s;
        last_align = a;
        last_pointer = std::malloc(s);
        return last_pointer;
    }

    virtual void do_deallocate(void * p, std::size_t s, std::size_t a)
    {
        --alive;
        ++dealloc_count;
        last_pointer = p;
        last_size = s;
        last_align = a;
        std::free(p);
    }

    virtual bool do_is_equal(memory_resource const & other) const noexcept
    {
        ++is_equal_count;
        dummy_resource const * o = dynamic_cast<dummy_resource const *>(&other);
        return o && o->x == x;
    }
};

int dummy_resource::alive = 0;
int dummy_resource::alloc_count = 0;
int dummy_resource::dealloc_count = 0;
int dummy_resource::is_equal_count = 0;
size_t dummy_resource::last_size = 0;
size_t dummy_resource::last_align = 0;
void * dummy_resource::last_pointer = nullptr;

#endif /* SUPPORT_DUMMY_MEMORY_RESOURCE_HPP */
