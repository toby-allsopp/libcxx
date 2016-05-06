// REQUIRES: ELIB_FILESYSTEM, ELIB_PYTHON_EXECUTABLE
#include <experimental/filesystem>
#include <system_error>
#include "filesystem_test_helper.hpp"
#include "rapid-cxx-test.hpp"
using namespace std::experimental::filesystem;

/// NOTE: most test cases are handled in the static tests
TEST_SUITE(elib_filesystem_dynamic_is_empty_operation_test_suite)

/// Empty directories cannot be tested staticly because of git.
TEST_CASE(empty_directory_test)
{
    scoped_test_env env;
    const path file = env.make_env_path("empty_dir");
    env.create_dir(file);
    
    // with error code
    {
        std::error_code ec;
        bool ret = is_empty(file, ec);
        TEST_REQUIRE(not ec);
        TEST_REQUIRE(ret);
    }
    // without error code
    {
        bool ret = false;
        TEST_REQUIRE_NO_THROW(ret = is_empty(file));
        TEST_REQUIRE(ret);
    }
}

TEST_SUITE_END()