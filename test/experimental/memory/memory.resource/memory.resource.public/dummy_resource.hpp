//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#ifndef DUMMY_RESOURCE_HPP
#define DUMMY_RESOURCE_HPP

#include <experimental/memory_resource>

#if _LIBCPP_STD_VER > 11

int alloc_count = 0;
int dealloc_count = 0;
int is_equal_count = 0;

class dummy_resource : public std::experimental::pmr::memory_resource
{
public:
    dummy_resource() {}
protected:
    virtual void * do_allocate(std::size_t, std::size_t) 
    { ++alloc_count; return nullptr; }
    virtual void do_deallocate(void *, std::size_t, std::size_t) 
    { ++dealloc_count; }
    virtual bool do_is_equal(memory_resource const & other) const noexcept
    {
        ++is_equal_count;
        return false;
    }
};

#endif /* _LIBCPP_STD_VER > 11 */
#endif /* DUMMY_RESOURCE_HPP */
