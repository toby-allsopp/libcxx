//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#ifndef SUPPORT_TEST_MEMORY_RESOURCE_HPP
#define SUPPORT_TEST_MEMORY_RESOURCE_HPP

#include <experimental/memory_resource>
#include <memory>
#include <type_traits>
#include <cstddef>
#include <cstdlib>
#include <cstring>

#define DISALLOW_COPY(Type) \
  Type(Type const&) = delete; \
  Type& operator=(Type const&) = delete

constexpr size_t MaxAlignV = std::alignment_of<std::max_align_t>::value;

struct ResourceCounter {
    int alive = 0;
    int alloc_count = 0;
    int dealloc_count = 0;
    int is_equal_count = 0;

    std::size_t alive_size;
    std::size_t allocated_size;
    std::size_t deallocated_size;

    std::size_t last_size = 0;
    std::size_t last_align = 0;
    void * last_pointer = 0;

    std::size_t last_alloc_size = 0;
    std::size_t last_alloc_align = 0;
    void * last_alloc_pointer = nullptr;

    std::size_t last_dealloc_size = 0;
    std::size_t last_dealloc_align = 0;
    void * last_dealloc_pointer = nullptr;

    ResourceCounter() {}

    void countAlloc(void* p, size_t s, size_t a) {
        ++alive;
        ++alloc_count;
        alive_size += s;
        allocated_size += s;
        last_pointer = last_alloc_pointer = p;
        last_size = last_alloc_size = s;
        last_align = last_alloc_align = a;
    }

    bool checkAlloc(void* p, size_t s, size_t a = MaxAlignV) const {
        return p == last_alloc_pointer &&
               s == last_alloc_size &&
               a == last_alloc_align;
    }

    void countDealloc(void* p, size_t s, size_t a) {
        --alive;
        ++dealloc_count;
        alive_size -= s;
        deallocated_size += s;
        last_pointer = last_dealloc_pointer = p;
        last_size = last_dealloc_size = s;
        last_align = last_dealloc_align = a;
    }

    bool checkDealloc(void* p, size_t s, size_t a = MaxAlignV) const {
        return p == last_dealloc_pointer &&
               s == last_dealloc_size &&
               a == last_dealloc_align;
    }

    void countIsEqual() {
        ++is_equal_count;
    }

    bool checkIsEqualCalledEq(int n) const {
        return is_equal_count == n;
    }

    void reset() {
        std::memset(this, 0, sizeof(*this));
    }

private:
    DISALLOW_COPY(ResourceCounter);
};

struct NullProvider : ResourceCounter {

    NullProvider() {}

    void* allocate(size_t s, size_t a) {
        countAlloc(nullptr, s, a);
        return nullptr;
    }

    void deallocate(void* p, size_t s, size_t a) {
        countDealloc(p, s, a);
    }

    void reset() {
        ResourceCounter::reset();
    }

private:
    DISALLOW_COPY(NullProvider);
};

struct MallocProvider : ResourceCounter {

    MallocProvider() {}

    void* allocate(size_t s, size_t a) {
        void* p =  std::malloc(s);
        countAlloc(p, s, a);
        return p;
    }

    void deallocate(void* p, size_t s, size_t a) {
        countDealloc(p, s, a);
        std::free(p);
    }

    void reset() {
        ResourceCounter::reset();
    }
private:
    DISALLOW_COPY(MallocProvider);
};

struct NewDeleteProvider : ResourceCounter {
    NewDeleteProvider() {}

    void* allocate(size_t s, size_t a) {
        void* p =  ::operator new(s);
        countAlloc(p, s, a);
        return p;
    }

    void deallocate(void* p, size_t s, size_t a) {
        countDealloc(p, s, a);
        ::operator delete(p);
    }

    void reset() {
        ResourceCounter::reset();
    }
private:
    DISALLOW_COPY(NewDeleteProvider);
};

template <size_t Size = 4096 * 10> // 10 pages worth of memory.
struct BufferProvider : ResourceCounter {
    char buffer[Size];
    void* next = &buffer;
    size_t space = Size;

    BufferProvider() {}

    void* allocate(size_t s, size_t a) {
        void* ret = std::align(s, a, next, space);
        countAlloc(ret, s, a);
        if (ret == nullptr) throw std::bad_alloc();
        return ret;
    }

    void deallocate(void* p, size_t s, size_t a) {
        countDealloc(p, s, a);
    }

    void reset() {
        next = &buffer;
        space = Size;
        ResourceCounter::reset();
    }
private:
    DISALLOW_COPY(BufferProvider);
};

struct TestException {};

struct AllocThrowsProvider : ResourceCounter {

    AllocThrowsProvider() {}

    void* allocate(size_t s, size_t a) {
        throw TestException();
    }

    void deallocate(void* p, size_t s, size_t a) {
        countDealloc(p, s, a);
    }

    void reset() {
        ResourceCounter::reset();
    }

private:
    DISALLOW_COPY(AllocThrowsProvider);
};

template <class ProviderT, int = 0>
class TestResourceImp : public std::experimental::pmr::memory_resource
{
public:
    static int resource_alive;
    static int resource_constructed;
    static int resource_destructed;

    static void resetStatics() {
        assert(resource_alive == 0);
        resource_alive = 0;
        resource_constructed = 0;
        resource_destructed = 0;
    }

    using memory_resource = std::experimental::pmr::memory_resource;
    using Provider = ProviderT;

    int value;

    explicit TestResourceImp(int val = 0) : value(val) {
        ++resource_alive;
        ++resource_constructed;
    }

    ~TestResourceImp() noexcept {
        --resource_alive;
        ++resource_destructed;
    }

    void reset() { P.reset(); }
    Provider& getProvider() { return P; }

protected:
    virtual void * do_allocate(std::size_t s, std::size_t a) {
        return P.allocate(s, a);
    }

    virtual void do_deallocate(void * p, std::size_t s, std::size_t a) {
        P.deallocate(p, s, a);
    }

    virtual bool do_is_equal(memory_resource const & other) const noexcept {
        P.countIsEqual();
        TestResourceImp const * o = dynamic_cast<TestResourceImp const *>(&other);
        return o && o->value == value;
    }
private:
    mutable Provider P;
    DISALLOW_COPY(TestResourceImp);
};

template <class Provider, int N>
int TestResourceImp<Provider, N>::resource_alive = 0;

template <class Provider, int N>
int TestResourceImp<Provider, N>::resource_constructed = 0;

template <class Provider, int N>
int TestResourceImp<Provider, N>::resource_destructed = 0;

using NullResource  = TestResourceImp<NullProvider, 0>;
using NullResource1 = TestResourceImp<NullProvider, 1>;
using NullResource2 = TestResourceImp<NullProvider, 2>;

using MallocResource  = TestResourceImp<MallocProvider, 0>;
using MallocResource1 = TestResourceImp<MallocProvider, 1>;
using MallocResource2 = TestResourceImp<MallocProvider, 2>;

using NewDeleteResource  = TestResourceImp<NewDeleteProvider, 0>;
using NewDeleteResource1 = TestResourceImp<NewDeleteProvider, 1>;
using NewDeleteResource2 = TestResourceImp<NewDeleteProvider, 2>;

using BufferResource  = TestResourceImp<BufferProvider<>, 0>;
using BufferResource1 = TestResourceImp<BufferProvider<>, 1>;
using BufferResource2 = TestResourceImp<BufferProvider<>, 2>;

using TestResource = BufferResource;
using TestResource1 = BufferResource1;
using TestResource2 = BufferResource2;

using AllocThrowsResource = TestResourceImp<AllocThrowsProvider, 0>;


#endif /* SUPPORT_TEST_MEMORY_RESOURCE_HPP */
