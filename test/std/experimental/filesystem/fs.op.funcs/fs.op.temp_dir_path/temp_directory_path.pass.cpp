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

// path temp_directory_path();
// path temp_directory_path(error_code& ec);

#include <experimental/filesystem>
#include <memory>
#include <cstdlib>
#include <cstring>
#include <cassert>

#include "test_macros.h"
#include "rapid-cxx-test.hpp"
#include "filesystem_test_helper.hpp"

using namespace std::experimental::filesystem;

void PutEnv(std::string var, std::string name = "") {
    if (name != "") {
        var += "=" + name;
    }
    char* buff = (char*)std::malloc(var.size() + 20);
    std::strcpy(buff, var.c_str());
    int ret = ::putenv(buff);
    assert(ret == 0);
}

TEST_SUITE(filesystem_temp_directory_path_test_suite)

TEST_CASE(signature_test)
{
    std::error_code ec; ((void)ec);
    ASSERT_NOT_NOEXCEPT(temp_directory_path());
    ASSERT_NOT_NOEXCEPT(temp_directory_path(ec));
}


TEST_CASE(basic_tests)
{
    scoped_test_env env;
    const path dne = env.make_env_path("dne");
    const path file = env.create_file("file", 42);
    const path dir_perms = env.create_dir("bad_perms_dir");
    const path nested_dir = env.create_dir("bad_perms_dir/nested");
    permissions(dir_perms, perms::none);
    const std::error_code set_ec = std::make_error_code(std::errc::address_in_use);
    const std::error_code expect_ec = std::make_error_code(std::errc::not_a_directory);
    struct TestCase {
      std::string name;
      path p;
    } cases[] = {
        {"TMPDIR", env.create_dir("dir1")},
        {"TMP", env.create_dir("dir2")},
        {"TEMP", env.create_dir("dir3")},
        {"TEMPDIR", env.create_dir("dir4")}
    };
    for (auto& TC : cases) {
        PutEnv(TC.name, TC.p);
    }
    for (auto& TC : cases) {
        std::cout << TC.name << std::endl;
        std::error_code ec = set_ec;
        path ret = temp_directory_path(ec);
        TEST_CHECK(!ec);
        TEST_CHECK(ret == TC.p);
        TEST_CHECK(is_directory(ret));

        // Set the env variable to a path that does not exist and check
        // that it fails.
        PutEnv(TC.name, dne);
        ec = set_ec;
        ret = temp_directory_path(ec);
        TEST_CHECK(ec == expect_ec);
        TEST_CHECK(ret == "");

        // Set the env variable to point to a file and check that it fails.
        PutEnv(TC.name, file);
        ec = set_ec;
        ret = temp_directory_path(ec);
        TEST_CHECK(ec == expect_ec);
        TEST_CHECK(ret == "");

        // Set the env variable to point to a dir we can't access
        PutEnv(TC.name, nested_dir);
        ec = set_ec;
        try {
            ret = temp_directory_path(ec);
        } catch (std::exception const& e) {
            std::cout << e.what() << std::endl;
        }
        TEST_CHECK(ec == std::make_error_code(std::errc::permission_denied));
        TEST_CHECK(ret == "");

        // Finally erase this env variable
        PutEnv(TC.name);
    }
    // No env variables are defined
    {
        std::error_code ec = set_ec;
        path ret = temp_directory_path(ec);
        TEST_CHECK(!ec);
        TEST_CHECK(ret == "/tmp");
        TEST_CHECK(is_directory(ret));
    }
}

TEST_SUITE_END()