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

// class directory_iterator

// typedef ... value_type;
// typedef ... difference_type;
// typedef ... pointer;
// typedef ... reference;
// typedef ... iterator_category

#include <experimental/filesystem>
#include <type_traits>
#include <set>
#include <cassert>

#include "test_macros.h"
#include "rapid-cxx-test.hpp"
#include "filesystem_test_helper.hpp"

using namespace std::experimental::filesystem;

TEST_SUITE(directory_iterator_constructor_tests)

TEST_CASE(test_constructor_signatures)
{
    using D = directory_iterator;

    // explicit directory_iterator(path const&);
    static_assert(!std::is_convertible<path, D>::value, "");
    static_assert(std::is_constructible<D, path>::value, "");
    static_assert(!std::is_nothrow_constructible<D, path>::value, "");

    // directory_iterator(path const&, error_code&) noexcept
    static_assert(std::is_nothrow_constructible<D, path, std::error_code&>::value, "");

    // directory_iterator(path const&, directory_options);
    static_assert(std::is_constructible<D, path, directory_options>::value, "");
    static_assert(!std::is_nothrow_constructible<D, path, directory_options>::value, "");

    // directory_iterator(path const&, directory_options, error_code&) noexcept
    static_assert(std::is_nothrow_constructible<D, path, directory_options, std::error_code&>::value, "");
}

TEST_CASE(test_construction_from_bad_path)
{
    std::error_code ec;
    directory_options opts = directory_options::none;
    const directory_iterator endIt;

    const path testPaths[] = { StaticEnv::DNE, StaticEnv::BadSymlink };
    for (path const& testPath : testPaths)
    {
        {
            directory_iterator it(testPath, ec);
            TEST_CHECK(ec);
            TEST_CHECK(it == endIt);
        }
        {
            directory_iterator it(testPath, opts, ec);
            TEST_CHECK(ec);
            TEST_CHECK(it == endIt);
        }
        {
            TEST_CHECK_THROW(filesystem_error, directory_iterator(testPath));
            TEST_CHECK_THROW(filesystem_error, directory_iterator(testPath, opts));
        }
    }
}

TEST_CASE(access_denied_test_case)
{
    using namespace std::experimental::filesystem;
    scoped_test_env env;
    path const testDir = env.make_env_path("dir1");
    path const testFile = testDir / "testFile";
    env.create_dir(testDir);
    env.create_file(testFile, 42);

    // Test that we can iterator over the directory before changing the perms
    directory_iterator it(testDir);
    TEST_REQUIRE(it != directory_iterator{});

    // Change the permissions so we can no longer iterate
    permissions(testDir, perms::none);

    // Check that the construction fails when skip_permissions_denied is
    // not given.
    {
        std::error_code ec;
        directory_iterator it(testDir, ec);
        TEST_REQUIRE(ec);
        TEST_CHECK(it == directory_iterator{});
    }
    // Check that construction does not report an error when
    // 'skip_permissions_denied' is given.
    {
        std::error_code ec;
        directory_iterator it(testDir, directory_options::skip_permission_denied, ec);
        TEST_REQUIRE(!ec);
        TEST_CHECK(it == directory_iterator{});
    }
}


TEST_CASE(access_denied_to_file_test_case)
{
    using namespace std::experimental::filesystem;
    scoped_test_env env;
    path const testFile = env.make_env_path("file1");
    env.create_file(testFile, 42);

    // Change the permissions so we can no longer iterate
    permissions(testFile, perms::none);

    // Check that the construction fails when skip_permissions_denied is
    // not given.
    {
        std::error_code ec;
        directory_iterator it(testFile, ec);
        TEST_REQUIRE(ec);
        TEST_CHECK(it == directory_iterator{});
    }
    // Check that construction does not report an error when
    // 'skip_permissions_denied' is given.
    {
        std::error_code ec;
        directory_iterator it(testFile, directory_options::skip_permission_denied, ec);
        TEST_REQUIRE(ec);
        TEST_CHECK(it == directory_iterator{});
    }
}

TEST_CASE(empty_directory_test_case)
{
    scoped_test_env env;
    const path testDir = env.make_env_path("dir1");
    env.create_dir(testDir);

    const directory_iterator endIt;
    {
        std::error_code ec;
        directory_iterator it(testDir, ec);
        TEST_CHECK(!ec);
        TEST_CHECK(it == endIt);
    }
    {
        directory_iterator it(testDir);
        TEST_CHECK(it == endIt);
    }
}

TEST_CASE(test_open_on_dir)
{
    const path testDir = StaticEnv::Dir;
    std::set<path> dir_contents(std::begin(StaticEnv::DirIterationList),
                                std::end(  StaticEnv::DirIterationList));
    const directory_iterator endIt{};

    {
        std::error_code ec;
        directory_iterator it(testDir, ec);
        TEST_REQUIRE(!ec);
        TEST_CHECK(it != endIt);
        TEST_CHECK(dir_contents.count(*it));
    }
    {
        directory_iterator it(testDir);
        TEST_CHECK(it != endIt);
        TEST_CHECK(dir_contents.count(*it));
    }
}

TEST_CASE(test_open_on_file_fails)
{
    const path testFile = StaticEnv::File;
    const directory_iterator endIt{};
    {
        std::error_code ec;
        directory_iterator it(testFile, ec);
        TEST_REQUIRE(ec);
        TEST_CHECK(it == endIt);
    }
    {
        directory_iterator it(testFile);
        TEST_CHECK(it == endIt);
    }
}

TEST_SUITE_END()
