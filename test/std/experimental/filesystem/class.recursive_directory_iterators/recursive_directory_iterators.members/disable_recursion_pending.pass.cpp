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

TEST_SUITE(recursive_directory_iterator_disable_recursion_pending_tests)

TEST_CASE(basic_test)
{
    recursive_directory_iterator it(StaticEnv::Dir);
    TEST_REQUIRE(it.recursion_pending() == true);
    it.disable_recursion_pending();
    TEST_CHECK(it.recursion_pending() == false);
    ++it;
    TEST_CHECK(it.recursion_pending() == true);
    it.disable_recursion_pending();
    recursive_directory_iterator it2(it);
    TEST_CHECK(it.recursion_pending() == false);
    TEST_CHECK(it2.recursion_pending() == true);
}

TEST_SUITE_END()
