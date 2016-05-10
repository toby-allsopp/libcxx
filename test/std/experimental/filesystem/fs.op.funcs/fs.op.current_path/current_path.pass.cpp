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

// path current_path();
// path current_path(error_code& ec);
#include <experimental/filesystem>
#include <type_traits>
#include <cassert>
#ifndef _WIN32
#include <unistd.h>
#endif

#include "test_macros.h"
#include "rapid-cxx-test.hpp"
#include "filesystem_test_helper.hpp"

using namespace std::experimental::filesystem;

TEST_SUITE(filesystem_current_path_path_test_suite)

TEST_CASE(current_path_signature_test)
{
    std::error_code ec; ((void)ec);
    ASSERT_NOT_NOEXCEPT(current_path());
    ASSERT_NOT_NOEXCEPT(current_path(ec));
}

TEST_CASE(current_path_test)
{
    std::error_code ec;
    const path p = current_path(ec);
    TEST_REQUIRE(!ec);
    TEST_CHECK(p.is_absolute());
    TEST_CHECK(is_directory(p));

    const path p2 = current_path();
    TEST_CHECK(p2 == p);
}

TEST_CASE(current_path_after_change_test)
{
#ifndef _WIN32
    const path new_path = StaticEnv::Dir;
    TEST_REQUIRE(::chdir(new_path.c_str()) == 0);
    TEST_CHECK(current_path() == new_path);
#endif
}

TEST_SUITE_END()