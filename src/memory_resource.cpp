//===------------------------ memory_resource.cpp -------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#include "experimental/memory_resource"
#include "cstdlib"

#if __has_feature(cxx_atomic)
#include "atomic"
#else
#include "mutex"
#endif

_LIBCPP_BEGIN_NAMESPACE_LFTS_PMR

////////////////////////////////////////////////////////////////////////////////
#if 0
template class polymorphic_allocator<char>;
template class __resource_adaptor_imp<allocator<char>>;
template class __basic_chunk_allocator<__double_linked_chunk_node>;
template class __basic_chunk_allocator<__single_linked_chunk_node>;
template class __pool_resource_base<__memory_pool>;
template class __pool_resource_base<__synchronized_memory_pool>;
#endif

////////////////////////////////////////////////////////////////////////////////
memory_resource::~memory_resource()
{
}

////////////////////////////////////////////////////////////////////////////////
class _LIBCPP_TYPE_VIS_ONLY __new_delete_memory_resource_imp
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
memory_resource * new_delete_resource() _NOEXCEPT
{
    static __new_delete_memory_resource_imp __res;
    return &__res;
}

////////////////////////////////////////////////////////////////////////////////
 class _LIBCPP_TYPE_VIS_ONLY __null_memory_resource_imp
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

////////////////////////////////////////////////////////////////////////////////
memory_resource * null_memory_resource() _NOEXCEPT
{
    static __null_memory_resource_imp __res;
    return &__res;
}

////////////////////////////////////////////////////////////////////////////////
_LIBCPP_HIDDEN
static memory_resource *
__default_memory_resource(bool set = false, memory_resource * new_res = nullptr) _NOEXCEPT
{
#if __has_feature(cxx_atomic)
    static atomic<memory_resource*> __res( new_delete_resource() );
    if (set) {
        new_res = new_res ? new_res : new_delete_resource();
        return _VSTD::atomic_exchange(&__res, new_res);
    }
    else {
        return _VSTD::atomic_load(&__res);
    }
#else
    static memory_resource * res( new_delete_resource() );
    static mutex res_lock;
    if (set) {
        new_res = new_res ? new_res : new_delete_resource();
        lock_guard<mutex> guard(res_lock);
        memory_resource * old_res = res;
        res = new_res;
        return old_res;
    } else {
        lock_guard<mutex> guard(res_lock);
        return res;
    }
#endif
}


memory_resource * get_default_resource() _NOEXCEPT
{
    return __default_memory_resource();
}

memory_resource * set_default_resource(memory_resource * __new_res) _NOEXCEPT
{
    return __default_memory_resource(true, __new_res);
}

////////////////////////////////////////////////////////////////////////////////
void __double_linked_chunk_node::__push(
    __double_linked_chunk_node ** __head_ptr, __double_linked_chunk_node * __n)
{
    __n->__next_ = *__head_ptr;
    __n->__prev_next_addr_ = __head_ptr;
    if (*__head_ptr) {
        (*__head_ptr)->__prev_next_addr_ = &__n->__next_;
    }
    *__head_ptr = __n;
}

void __double_linked_chunk_node::__remove(
    __double_linked_chunk_node **, __double_linked_chunk_node * __n)
{
    *(__n->__prev_next_addr_) = __n->__next_;
    if (__n->__next_) {
        __n->__next_->__prev_next_addr_ = __n->__prev_next_addr_;
    }
}

////////////////////////////////////////////////////////////////////////////////
void __single_linked_chunk_node::__push(
    __single_linked_chunk_node ** __head_ptr, __single_linked_chunk_node * __n)
{
    __n->__next_ = *__head_ptr;
    *__head_ptr = __n;
}

void __single_linked_chunk_node::__remove(
    __single_linked_chunk_node ** __head_ptr, __single_linked_chunk_node * __n)
{
    __single_linked_chunk_node * __h = *__head_ptr;
    __single_linked_chunk_node ** __prev_next_addr = __head_ptr;
    while (__h && __h != __n) {
        __prev_next_addr = & __h->__next_;
        __h = __h->__next_;
    }
    if (__h) {
        *__prev_next_addr = __h->__next_;
    }
}

////////////////////////////////////////////////////////////////////////////////
void * __memory_pool::__allocate(memory_resource * __res)
{
    if (!__free_head_) {
        __alloc_new_chunk(__res);
    }
    __block_node * __n = __free_head_;
    __free_head_ = __free_head_->__next_;
    return static_cast<void*>(__n);
}

void __memory_pool::__deallocate(memory_resource *, void * __p)
{
    if (! __p) {
        return;
    }
    __block_node * __n = static_cast<__block_node*>(__p);
    __n->__next_ = __free_head_;
    __free_head_ = __n;
}

void __memory_pool::__release(memory_resource * __res)
{
    __alloc_.__release(__res);
}

void __memory_pool::__alloc_new_chunk(memory_resource * __res)
{
    // TODO Alignment should always be either 8 or 16.
    // Since 8 is the smallest block size supported and 16 is the maximum 
    // alignment. Test this.
    const size_t __a = __fundamental_alignment(__block_size_);
    const size_t __s = 
        __aligned_allocation_size(__block_size_, __a) * __chunk_size_;
    void * __p = __alloc_.__allocate(__res, __s);
    __add_chunk_to_free_list(__p, __s, __a);
    __increment_max_blocks_per_chunk();
}

void __memory_pool::__add_chunk_to_free_list(void * __p, size_t __s, size_t __a)
{
    while (_VSTD::align(__a, __block_size_, __p, __s)) {
        __block_node * __ret = static_cast<__block_node*>(__p);
        __p = static_cast<char*>(__p) + __block_size_;
        __s -= __block_size_;
        __ret->__next_ = __free_head_;
        __free_head_ = __ret;
    }
}

void __memory_pool::__increment_max_blocks_per_chunk()
{
    // TODO fix overflow
    if ((__chunk_size_ << 1) < __max_block_per_chunk_) {
        __chunk_size_ <<= 1;
    }
}

////////////////////////////////////////////////////////////////////////////////
synchronized_pool_resource::~synchronized_pool_resource() {}

void * synchronized_pool_resource::do_allocate(size_t __bytes, size_t __align)
{
    return __base_.__allocate(__bytes, __align);
}

void synchronized_pool_resource::do_deallocate(
    void * __p, size_t __bytes, size_t __align)
{
    __base_.__deallocate(__p, __bytes, __align);
}

bool synchronized_pool_resource::do_is_equal(
    memory_resource const & __other) const _NOEXCEPT
{
    return *__base_.__resource() == __other;
}

////////////////////////////////////////////////////////////////////////////////
unsynchronized_pool_resource::~unsynchronized_pool_resource()
{
}

void * unsynchronized_pool_resource::do_allocate(size_t __bytes, size_t __align)
{
    return __base_.__allocate(__bytes, __align);
}

void unsynchronized_pool_resource::do_deallocate(
    void * __p, size_t __bytes, size_t __align)
{
    __base_.__deallocate(__p, __bytes, __align);
}

bool unsynchronized_pool_resource::do_is_equal(
    memory_resource const & __other) const _NOEXCEPT
{
    return *__base_.__resource() == __other;
}

////////////////////////////////////////////////////////////////////////////////
monotonic_buffer_resource::~monotonic_buffer_resource()
{
    __alloc_.__release(__res_);
}

void * monotonic_buffer_resource::do_allocate(size_t __bytes, size_t __align)
{
    void * __r = __take_from_buf(__bytes, __align);
    if (__r) { return __r; }
    __alloc_from_upstream(__bytes, __align);
    return __take_from_buf(__bytes, __align);
}

void monotonic_buffer_resource::do_deallocate(void *, size_t, size_t)
{
}

bool monotonic_buffer_resource::do_is_equal(
    memory_resource const & __other) const _NOEXCEPT
{
    return this ==
        dynamic_cast<monotonic_buffer_resource const *>(&__other);
}

void * monotonic_buffer_resource::__take_from_buf(size_t __s, size_t __a) _NOEXCEPT
{
    void * __p = _VSTD::align(__a, __s, __buf_, __left_);
    if (__p) {
        __buf_ = static_cast<void*>(static_cast<char*>(__p) + __s);
        __left_ -= __s;
        return __p;
    }
    return nullptr;
}

void monotonic_buffer_resource::__alloc_from_upstream(size_t __s, size_t __a)
{
    size_t const __req_size = __aligned_allocation_size(__s, __a);
    __increment_buf_size(__req_size);
    __buf_ = __alloc_.__allocate(__res_, __next_buf_size_);
    __left_ = __next_buf_size_;
}

void monotonic_buffer_resource::__increment_buf_size(size_t __s) _NOEXCEPT
{
    size_t const __possible_next =
        _VSTD::max(__round_up_pow_2(__s), __next_buf_size_ << 1);
    __next_buf_size_ = _VSTD::max(__possible_next, __next_buf_size_);
}

_LIBCPP_END_NAMESPACE_LFTS_PMR