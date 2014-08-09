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
memory_resource * new_delete_resource() _NOEXCEPT
{
    static __new_delete_memory_resource_imp __res;
    return &__res;
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
        return _VSTD::atomic_exchange_explicit(
            &__res, new_res, memory_order::memory_order_relaxed);
    }
    else {
        return _VSTD::atomic_load_explicit(
            &__res, memory_order::memory_order_relaxed);
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
void * __memory_pool::__allocate(
    memory_resource * __res
  , size_t __block_size
  , size_t __max_block_per_chunk)
{
    if (!__free_head_) {
        __alloc_new_chunk(__res, __block_size);
        __increment_blocks_per_chunk(__max_block_per_chunk);
    }
    __block_node * __n = __free_head_;
    __free_head_ = __free_head_->__next_;
    return static_cast<void*>(__n);
}

void __memory_pool::__deallocate(
    memory_resource *, void * __p)
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

void __memory_pool::__alloc_new_chunk(
    memory_resource * __res
  , size_t __block_size)
{
    // TODO Alignment should always be either 8 or 16.
    // Since 8 is the smallest block size supported and 16 is the maximum 
    // alignment. Test this.
    const size_t __a = __fundamental_alignment(__block_size);
    const size_t __s = 
        __aligned_allocation_size(__block_size, __a) * __chunk_size_;
    void * __p = __alloc_.__allocate(__res, __s);
    __add_chunk_to_free_list(__p, __block_size, __s, __a);
}

void __memory_pool::__add_chunk_to_free_list(
    void * __p, size_t __block_size
  , size_t __s, size_t __a)
{
    size_t __debug_left = __chunk_size_;
    while (_VSTD::align(__a, __block_size, __p, __s)) {
        __block_node * __ret = static_cast<__block_node*>(__p);
        __p = static_cast<char*>(__p) + __block_size;
        __s -= __block_size;
        __ret->__next_ = __free_head_;
        __free_head_ = __ret;
        --__debug_left;
    }
    _LIBCPP_ASSERT(__debug_left == 0, "aligned blocks did not match expected");
}

void __memory_pool::__increment_blocks_per_chunk(size_t __max_block_per_chunk)
{
    size_t const __pos_next = __chunk_size_ << 1;
    if (!__pos_next || __pos_next >= __max_block_per_chunk) {
        __chunk_size_ = __max_block_per_chunk;
    } else {
        __chunk_size_ = __pos_next;
    }
}


////////////////////////////////////////////////////////////////////////////////
unsynchronized_pool_resource::~unsynchronized_pool_resource()
{
    release();
}

void unsynchronized_pool_resource::release()
{
    for (size_t __i = 0; __i < __num_pools_; ++__i) {
        __pool_buf_[__i].__release(__res_);
    }
    __oversized_alloc_.__release(__res_);
}

void * unsynchronized_pool_resource::do_allocate(size_t __s, size_t __a)
{
    size_t const __alloc_size = __aligned_allocation_size(__s, __a);
    if (__oversized(__alloc_size)) {
        return __oversized_alloc_.__allocate(__res_, __alloc_size);
    } else {
        size_t const __i = __index_for(__alloc_size);
        return __pool_buf_[__i].__allocate(
            __res_, pool_options::__impl_smallest_block << __i
          , __opts_.max_blocks_per_chunk
          );
    }
}

void unsynchronized_pool_resource::do_deallocate(
    void * __p, size_t __s, size_t __a)
{
    size_t const __alloc_size = __aligned_allocation_size(__s, __a);
    if (__oversized(__alloc_size)) {
        return __oversized_alloc_.__deallocate(__res_, __p);
    } else {
        __pool_buf_[__index_for(__alloc_size)].__deallocate(__res_, __p);
    }
}

bool unsynchronized_pool_resource::do_is_equal(
    memory_resource const & __other) const _NOEXCEPT
{
    return this
        == dynamic_cast<unsynchronized_pool_resource const *>(&__other);
}

size_t unsynchronized_pool_resource::__index_of(size_t __pow) const _NOEXCEPT
{
    _LIBCPP_ASSERT(__pow, "Cannot be zero");
    _LIBCPP_ASSERT(!__undersized(__pow), "pow not in index range");
    _LIBCPP_ASSERT(!__oversized(__pow), "pow not in index range");
    _LIBCPP_ASSERT(__is_power2(__pow), "Must be power of two");
    // use -4 so index for 2^4=8 is at 0.
    return (numeric_limits<size_t>::digits - __clz(__pow)) - 4;
}

// Precondition: __s <= largest_required_pool_block
// Otherwise __round_up_pow_2 can wrap.
size_t unsynchronized_pool_resource::__index_for(size_t __s) const _NOEXCEPT
{
    _LIBCPP_ASSERT(!__oversized(__s), "cannot be oversized");
    return __undersized(__s) ? 0 : __index_of(__round_up_pow_2(__s));
}

bool unsynchronized_pool_resource::__undersized(size_t __s) const _NOEXCEPT
{
    return __s < pool_options::__impl_smallest_block;
}

bool unsynchronized_pool_resource::__oversized(size_t __s) const _NOEXCEPT
{
    _LIBCPP_ASSERT(__opts_.largest_required_pool_block >= 8, "largest block too small");
    return __s > __opts_.largest_required_pool_block;
}

////////////////////////////////////////////////////////////////////////////////
synchronized_pool_resource::~synchronized_pool_resource()
{
    // __base_'s destructor invokes release()
}

void * synchronized_pool_resource::do_allocate(size_t __bytes, size_t __align)
{
    _Guard __g(__lock_);
    return __base_.allocate(__bytes, __align);
}

void synchronized_pool_resource::do_deallocate(
    void * __p, size_t __bytes, size_t __align)
{
    _Guard __g(__lock_);
    __base_.deallocate(__p, __bytes, __align);
}

bool synchronized_pool_resource::do_is_equal(
    memory_resource const & __other) const _NOEXCEPT
{
    return this
        == dynamic_cast<synchronized_pool_resource const *>(&__other);
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