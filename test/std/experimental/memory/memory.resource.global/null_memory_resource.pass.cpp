//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/memory_resource>

// UNSUPPORTED: c++98, c++03

//-----------------------------------------------------------------------------
// TESTING memory_resource * null_memory_resource() noexcept
//
// Concerns:
//  A) 'null_memory_resource()' returns a non-null pointer to a 'memory_resource' 'M'.
//  B) 'null_memory_resource()' always returns the same pointer.
//  C) 'M.allocate(...)' always throws bad_alloc.
//  D) 'M.deallocate(...)' does nothing.
//  E) 'M' only compares equal to itself. 'M.is_equal(Other)' will not invoke
//     'Other.is_equal(M)'.
//  F) 'null_memory_resource()' is marked noexcept.
//
// Plan:
//   1) Check concerns A, B and E by getting two pointers 'p1' and 'p2' from
//      calling 'null_memory_resource()' twice. Check that these pointers
//      have the same address and are not null.
//
//  2) Check concern C by calling 'M.alloc(...)' for a couple of different
//     sizes and alignments. Check that 'bad_alloc' is always thrown.
//
//  3) Check concern D by calling 'M.deallocate(...)' for various pointers,
//     sizes and alignment. Make sure nothing happens (???)
//
//  4) Check concern E by comparing 'M' to other 'memory_resource' objects
//     with different base classes. Check that 'M.is_equal(Other)' is always
//     false and it does not invoke 'Other.is_equal(M)'.
//
//  5) Check concern F by calling 'null_memory_resource()' inside a noexcept
//     expression and check that the expression returns true.

#include <experimental/memory_resource>
#include <cassert>

#include "test_memory_resource.hpp"

using namespace std::experimental::pmr;

void checkThrows(memory_resource& M, size_t size, size_t align) {
    try {
        M.allocate(size, align);
        assert(false);
    } catch (std::bad_alloc const&) {
        // do nothing
    } catch (...) {
        assert(false);
    }
    try {
        M.allocate(size);
        assert(false);
    } catch (std::bad_alloc const&) {
        // do nothing
    } catch (...) {
        assert(false);
    }
}

int main()
{
    { // Plan Part 1
        memory_resource* p1 = null_memory_resource();
        assert(p1 != nullptr);
        assert(p1->is_equal(*p1));

        memory_resource* p2 = null_memory_resource();
        assert(p2 != nullptr);
        assert(p1 == p2);
        assert(p1->is_equal(*p2));
        assert(p2->is_equal(*p1));
    }
    { // Plan part 2
        memory_resource& M = *null_memory_resource();
        checkThrows(M, 100, 16);
        checkThrows(M, 0, 0);
        checkThrows(M, (size_t)-1, (size_t)-1);
    }
    { // Plan part 3
        memory_resource& M = *null_memory_resource();
        // Test zero values.
        M.deallocate(nullptr, 0, 0);
        M.deallocate(reinterpret_cast<void*>(42), 0, 0);
        M.deallocate(nullptr, 100, 16);
        M.deallocate(reinterpret_cast<void*>(42), 100, 16);
        M.deallocate(nullptr, (size_t)-1, (size_t)-1);
        M.deallocate(reinterpret_cast<void*>(42), (size_t)-1, (size_t)-1);
    }
    { // Plan part 4
        memory_resource const& M = *null_memory_resource();
        TestResource R;
        auto& P = R.getProvider();
        memory_resource const& O = R;

        assert(M.is_equal(O) == false);
        assert(P.checkIsEqualCalledEq(0));
    }
    { // Plan part 5
        static_assert(
            noexcept(null_memory_resource())
          , "null_memory_resource() must be noexcept"
          );
    }
}
