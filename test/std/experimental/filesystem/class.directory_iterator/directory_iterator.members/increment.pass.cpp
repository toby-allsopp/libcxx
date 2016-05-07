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

// directory_iterator& operator++();
// directory_iterator& increment(error_code& ec) noexcept;

#include <experimental/filesystem>
#include <type_traits>
#include <set>
#include <cassert>

#include "test_macros.h"
#include "rapid-cxx-test.hpp"
#include "filesystem_test_helper.hpp"
#include <iostream>

using namespace std::experimental::filesystem;

TEST_SUITE(directory_iterator_increment_tests)

TEST_CASE(test_increment_signatures)
{
    using D = directory_iterator;
    directory_iterator d; ((void)d);
    std::error_code ec; ((void)ec);

    ASSERT_SAME_TYPE(decltype(++d), directory_iterator&);
    ASSERT_NOT_NOEXCEPT(++d);

    ASSERT_SAME_TYPE(decltype(d.increment(ec)), directory_iterator&);
    ASSERT_NOEXCEPT(d.increment(ec));
}

TEST_CASE(test_prefix_increment)
{
    const path testDir = StaticEnv::Dir;
    const std::set<path> dir_contents(std::begin(StaticEnv::DirIterationList),
                                      std::end(  StaticEnv::DirIterationList));
    const directory_iterator endIt{};

    std::error_code ec;
    directory_iterator it(testDir, ec);
    TEST_REQUIRE(!ec);

    std::set<path> unseen_entries = dir_contents;
    while (!unseen_entries.empty()) {
        TEST_REQUIRE(it != endIt);
        const path entry = *it;
        TEST_REQUIRE(unseen_entries.erase(entry) == 1);
        directory_iterator& it_ref = ++it;
        TEST_CHECK(&it_ref == &it);
    }

    TEST_CHECK(it == endIt);
}

TEST_CASE(test_postfix_increment)
{
    const path testDir = StaticEnv::Dir;
    const std::set<path> dir_contents(std::begin(StaticEnv::DirIterationList),
                                      std::end(  StaticEnv::DirIterationList));
    const directory_iterator endIt{};

    std::error_code ec;
    directory_iterator it(testDir, ec);
    TEST_REQUIRE(!ec);

    std::set<path> unseen_entries = dir_contents;
    while (!unseen_entries.empty()) {
        TEST_REQUIRE(it != endIt);
        const path entry = *it;
        TEST_REQUIRE(unseen_entries.erase(entry) == 1);
        const path entry2 = *it++;
        TEST_CHECK(entry2 == entry);
    }

    TEST_CHECK(it == endIt);
}


TEST_CASE(test_increment_method)
{
    const path testDir = StaticEnv::Dir;
    const std::set<path> dir_contents(std::begin(StaticEnv::DirIterationList),
                                      std::end(  StaticEnv::DirIterationList));
    const directory_iterator endIt{};

    std::error_code ec;
    directory_iterator it(testDir, ec);
    TEST_REQUIRE(!ec);

    std::set<path> unseen_entries = dir_contents;
    while (!unseen_entries.empty()) {
        TEST_REQUIRE(it != endIt);
        const path entry = *it;
        TEST_REQUIRE(unseen_entries.erase(entry) == 1);
        directory_iterator& it_ref = it.increment(ec);
        TEST_REQUIRE(!ec);
        TEST_CHECK(&it_ref == &it);
    }

    TEST_CHECK(it == endIt);
}

TEST_CASE(test_increment_throws)
{
    scoped_test_env env;
    const path testDir = env.make_env_path("dir1");
    env.create_dir(testDir);
    const path testFiles[] = {
        env.make_env_path("dir1/file1"),
        env.make_env_path("dir1/file2"),
        env.make_env_path("dir1/file3"),
    };
    for (auto& F : testFiles)
        env.create_file(F, 42);
    const path testDirs[] = {
        env.make_env_path("dir1/dir1"),
        env.make_env_path("dir1/dir2"),
    };
    for (auto& D : testDirs)
        env.create_dir(D);

    const directory_iterator endIt;

    directory_iterator it(testDir);
    TEST_REQUIRE(it != endIt);
    std::cout << *it << std::endl;

    for (auto& F : testFiles)
        permissions(F, perms::none);
    for (auto& F : testDirs)
        permissions(F, perms::none);

    std::error_code ec;
    it.increment(ec);
    TEST_CHECK(it == directory_iterator{});
    TEST_CHECK(ec);
    if (it != endIt) {
        std::cout << *it << std::endl;
    }
    it.increment(ec);
    TEST_CHECK(it == directory_iterator{});
    TEST_CHECK(ec);
    if (it != endIt) {
        std::cout << *it << std::endl;
    }
}

TEST_SUITE_END()
