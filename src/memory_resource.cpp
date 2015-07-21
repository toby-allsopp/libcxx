//===------------------------ memory_resource.cpp -------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#include "experimental/memory_resource"
#include "limits"
#include "cstdlib"

#include "support/atomic_support.h"

_LIBCPP_BEGIN_NAMESPACE_LFTS_PMR

////////////////////////////////////////////////////////////////////////////////
memory_resource::~memory_resource()
{
}

////////////////////////////////////////////////////////////////////////////////
class _LIBCPP_HIDDEN __new_delete_memory_resource_imp
    : public memory_resource
{
public:
    ~__new_delete_memory_resource_imp();
protected:
    virtual void* do_allocate(size_t __size, size_t __align);
    virtual void do_deallocate(void * __p, size_t __size, size_t __align);
    virtual bool do_is_equal(memory_resource const & __other) const _NOEXCEPT;
};

__new_delete_memory_resource_imp::~__new_delete_memory_resource_imp()
{
}

void * __new_delete_memory_resource_imp::do_allocate(size_t s, size_t a)
{
    return ::operator new(__aligned_allocation_size(s, a));
}

void __new_delete_memory_resource_imp::do_deallocate(void * p, size_t, size_t)
{
    return ::operator delete(p);
}

bool __new_delete_memory_resource_imp::do_is_equal(
    memory_resource const & other) const _NOEXCEPT
{
    return this ==
            dynamic_cast<__new_delete_memory_resource_imp const *>(&other);
}

////////////////////////////////////////////////////////////////////////////////
 class _LIBCPP_HIDDEN __null_memory_resource_imp
    : public memory_resource
{
public:
    ~__null_memory_resource_imp();
protected:
    virtual void* do_allocate(size_t, size_t);
    virtual void do_deallocate(void *, size_t, size_t);
    virtual bool do_is_equal(memory_resource const & __other) const _NOEXCEPT;
};

__null_memory_resource_imp::~__null_memory_resource_imp()
{
}

void* __null_memory_resource_imp::do_allocate(size_t, size_t)
{
#ifndef _LIBCPP_NO_EXCEPTIONS
    throw bad_alloc();
#else
    abort();
#endif
}

void __null_memory_resource_imp::do_deallocate(void *, size_t, size_t)
{
}

bool __null_memory_resource_imp::do_is_equal(
    memory_resource const & __other) const _NOEXCEPT
{
    return &__other == static_cast<memory_resource const *>(this);
}
///////////////////////////////////////////////////////////////////////////////

memory_resource * new_delete_resource() _NOEXCEPT {
    static __new_delete_memory_resource_imp resource;
    return &resource;
}

memory_resource * null_memory_resource() _NOEXCEPT {
    static __null_memory_resource_imp resource;
    return &resource;
}

///////////////////////////////////////////////////////////////////////////////
static memory_resource** __default_resource() {
    static memory_resource* ptr = { new_delete_resource() };
    return &ptr;
}

memory_resource* get_default_resource() _NOEXCEPT
{
    return __libcpp_atomic_load(__default_resource(), _AO_Aquire);
}

memory_resource * set_default_resource(memory_resource * new_res) _NOEXCEPT
{
    new_res = new_res ? new_res : new_delete_resource();
    return __libcpp_atomic_exchange(__default_resource(), new_res, _AO_Acq_Rel);
}

_LIBCPP_END_NAMESPACE_LFTS_PMR
