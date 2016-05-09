//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// UNSUPPORTED: c++98, c++03

// <experimental/filesystem>

// class recursive_directory_iterator

// void pop()

#include <experimental/filesystem>
#include <type_traits>
#include <set>
#include <cassert>

#include "test_macros.h"
#include "rapid-cxx-test.hpp"
#include "filesystem_test_helper.hpp"

using namespace std::experimental::filesystem;

TEST_SUITE(recursive_directory_iterator_pop_tests)

TEST_CASE(test_depth)
{
    const path testDir = StaticEnv::Dir;
    const path DirDepth1 = StaticEnv::Dir2;
    const path DirDepth2 = StaticEnv::Dir3;
    const recursive_directory_iterator endIt{};

    std::error_code ec;
    recursive_directory_iterator it(testDir, ec);
    TEST_REQUIRE(it != endIt);
    TEST_CHECK(it.depth() == 0);

    bool seen_d1, seen_d2;
    seen_d1 = seen_d2 = false;

    while (it.depth() != 2) {
        ++it;
        TEST_REQUIRE(it != endIt);
    }

    it.pop();
    TEST_REQUIRE(it != endIt);
    TEST_CHECK(it.depth() == 1);

    it.pop();
    TEST_REQUIRE(it != endIt);
    TEST_CHECK(it.depth() == 0);

    it.pop();
    TEST_CHECK(it == endIt);
}

TEST_CASE(test_dummy)
{

}
TEST_SUITE_END()
