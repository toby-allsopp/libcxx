//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// UNSUPPORTED: c++98, c++03

// <vector>

// template <class... Args> iterator emplace(const_iterator pos, Args&&... args);

#include <vector>
#include <cassert>

#include "test_macros.h"
#include "min_allocator.h"
#include "asan_testing.h"

int main()
{
    {
        std::vector<int> v;
        v.reserve(3);
        LIBCPP_ASSERT(is_contiguous_container_asan_correct(v));
        v = { 1, 2, 3 };
        v.emplace(v.begin(), v.back());
        assert(v[0] == 3);
        LIBCPP_ASSERT(is_contiguous_container_asan_correct(v));
    }
    {
        std::vector<int> v;
        v.reserve(4);
        LIBCPP_ASSERT(is_contiguous_container_asan_correct(v));
        v = { 1, 2, 3 };
        v.emplace(v.begin(), v.back());
        assert(v[0] == 3);
        LIBCPP_ASSERT(is_contiguous_container_asan_correct(v));
    }
    {
        std::vector<int, min_allocator<int>> v;
        v.reserve(3);
        LIBCPP_ASSERT(is_contiguous_container_asan_correct(v));
        v = { 1, 2, 3 };
        v.emplace(v.begin(), v.back());
        assert(v[0] == 3);
        LIBCPP_ASSERT(is_contiguous_container_asan_correct(v));
    }
    {
        std::vector<int, min_allocator<int>> v;
        v.reserve(4);
        LIBCPP_ASSERT(is_contiguous_container_asan_correct(v));
        v = { 1, 2, 3 };
        v.emplace(v.begin(), v.back());
        assert(v[0] == 3);
        LIBCPP_ASSERT(is_contiguous_container_asan_correct(v));
    }
}
