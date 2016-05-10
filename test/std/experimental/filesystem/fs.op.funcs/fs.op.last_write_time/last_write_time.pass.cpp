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

// file_time_type last_write_time(const path& p);
// file_time_type last_write_time(const path& p, std::error_code& ec) noexcept;
// void last_write_time(const path& p, file_time_type new_time);
// void last_write_time(const path& p, file_time_type new_type,
//                      std::error_code& ec) noexcept;


#include <experimental/filesystem>
#include <type_traits>
#include <chrono>
#include <thread>
#include <fstream>
#include <cassert>

#include "test_macros.h"
#include "rapid-cxx-test.hpp"
#include "filesystem_test_helper.hpp"

using namespace std::experimental::filesystem;

TEST_SUITE(exists_test_suite)

TEST_CASE(signature_test)
{
    const file_time_type t;
    const path p; ((void)p);
    std::error_code ec; ((void)ec);
    ASSERT_SAME_TYPE(decltype(last_write_time(p)), file_time_type);
    ASSERT_SAME_TYPE(decltype(last_write_time(p, ec)), file_time_type);
    ASSERT_SAME_TYPE(decltype(last_write_time(p, t)), void);
    ASSERT_SAME_TYPE(decltype(last_write_time(p, t, ec)), void);
    ASSERT_NOT_NOEXCEPT(last_write_time(p));
    ASSERT_NOT_NOEXCEPT(last_write_time(p, t));
    ASSERT_NOEXCEPT(last_write_time(p, ec));
    ASSERT_NOEXCEPT(last_write_time(p, t, ec));
}

TEST_CASE(read_last_write_time_static_env_test)
{
    using C = file_time_type::clock;
    file_time_type min = file_time_type::min();
    {
        file_time_type ret = last_write_time(StaticEnv::File);
        TEST_CHECK(ret != min);
        TEST_CHECK(ret < C::now());

        file_time_type ret2 = last_write_time(StaticEnv::SymlinkToFile);
        TEST_CHECK(ret == ret2);
    }
    {
        file_time_type ret = last_write_time(StaticEnv::Dir);
        TEST_CHECK(ret != min);
        TEST_CHECK(ret < C::now());

        file_time_type ret2 = last_write_time(StaticEnv::SymlinkToDir);
        TEST_CHECK(ret == ret2);
    }
}

TEST_CASE(get_last_write_time_dynamic_env_test)
{
    using Clock = file_time_type::clock;
    using Sec = std::chrono::seconds;
    scoped_test_env env;

    const path file = env.create_file("file", 42);
    const path dir = env.create_dir("dir");

    file_time_type now = Clock::now();
    file_time_type min_allowed = now - Sec(5);
    file_time_type max_allowed = now + Sec(2);

    file_time_type ftime = last_write_time(file);
    file_time_type dtime = last_write_time(dir);

    TEST_CHECK(ftime > min_allowed);
    TEST_CHECK(ftime < max_allowed);
    TEST_CHECK(dtime > min_allowed);
    TEST_CHECK(dtime < max_allowed);

    std::this_thread::sleep_for(Sec(1));

    // update file and add a file to the directory. Make sure the times increase.
    std::ofstream of(file, std::ofstream::app);
    of << "hello";
    of.close();
    env.create_file("dir/file1", 1);

    file_time_type ftime2 = last_write_time(file);
    file_time_type dtime2 = last_write_time(dir);

    max_allowed = Clock::now() + Sec(2);
    TEST_CHECK(ftime2 > ftime);
    TEST_CHECK(ftime2 < max_allowed);
    TEST_CHECK(dtime2 > dtime);
    TEST_CHECK(dtime2 < max_allowed);
}


TEST_CASE(set_last_write_time_dynamic_env_test)
{
    using Clock = file_time_type::clock;
    using Sec = std::chrono::seconds;
    using Hours = std::chrono::hours;
    scoped_test_env env;

    const path file = env.create_file("file", 42);
    const path dir = env.create_dir("dir");

    file_time_type ftime = last_write_time(file);
    file_time_type dtime = last_write_time(dir);

    const file_time_type new_time = Clock::now() - Hours(3);
    file_time_type max_allowed = new_time + Sec(2);
    file_time_type min_allowed = new_time - Sec(2);

    last_write_time(file, new_time);
    last_write_time(dir, new_time);

    file_time_type ftime2 = last_write_time(file);
    file_time_type dtime2 = last_write_time(dir);

    max_allowed = Clock::now() + Sec(2);
    TEST_CHECK(ftime2 != ftime);
    TEST_CHECK(ftime2 > min_allowed);
    TEST_CHECK(ftime2 < max_allowed);
    TEST_CHECK(dtime2 != dtime);
    TEST_CHECK(dtime2 > min_allowed);
    TEST_CHECK(dtime2 < max_allowed);
}

TEST_CASE(test_write_future_time)
{
    using Clock = file_time_type::clock;
    using Sec = std::chrono::seconds;
    using Hours = std::chrono::hours;
    scoped_test_env env;
    const path p = env.create_file("file", 42);

    file_time_type last_time = last_write_time(p);

    file_time_type new_time = Clock::now() + Hours(24);
    std::error_code ec;
    last_write_time(p, new_time, ec);
    TEST_CHECK(ec);
    file_time_type tt = last_write_time(p);
    auto diff = tt - last_time;
    auto diff2 = std::chrono::duration_cast<Hours>(diff);
    std::cout << "DIFF " << diff2.count() << std::endl;
    TEST_CHECK(last_time == tt);
    TEST_CHECK(tt < new_time);
}

TEST_CASE(test_value_on_failure)
{
    const path p = StaticEnv::DNE;
    std::error_code ec;
    TEST_CHECK(last_write_time(p, ec) == file_time_type::min());
    TEST_CHECK(ec);
}

TEST_CASE(test_exists_fails)
{
    scoped_test_env env;
    const path dir = env.create_dir("dir");
    const path file = env.create_file("dir/file", 42);
    permissions(dir, perms::none);

    std::error_code ec;
    TEST_CHECK(last_write_time(file, ec) == file_time_type::min());
    TEST_CHECK(ec);

    TEST_CHECK_THROW(filesystem_error, last_write_time(file));
}

TEST_SUITE_END()