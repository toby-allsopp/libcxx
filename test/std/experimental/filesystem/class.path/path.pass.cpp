
#include <experimental/filesystem>
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include "filesystem_test_helper.hpp"
#include "rapid-cxx-test.hpp"

using namespace std::experimental::filesystem;

// END.

TEST_SUITE(std_filesystem_path_test_suite)

TEST_CASE(compare_test)
{
    const std::string s1("/foo/./bar/baz");
    const std::string s2("/foo/bar/baz");
    const path p1(s1);
    const path p2(s2);

    TEST_CHECK(p1.compare(p2) < 0);
    TEST_CHECK(p1.compare(p1) == 0);
    TEST_CHECK(p2.compare(p1) > 0);

    TEST_CHECK(p1.compare(s2) < 0);
    TEST_CHECK(p1.compare(s1) == 0);
    TEST_CHECK(p2.compare(s1) > 0);

    TEST_CHECK(p1.compare(s2.c_str()) < 0);
    TEST_CHECK(p1.compare(s1.c_str()) == 0);
    TEST_CHECK(p2.compare(s1.c_str()) > 0);

    TEST_CHECK(p1 < p2);
    TEST_CHECK(p1 <= p2);
    TEST_CHECK(not (p1 > p2));
    TEST_CHECK(not (p1 >= p2));
    TEST_CHECK(not (p1 == p2));
    TEST_CHECK(p1 != p2);

    TEST_CHECK(not (p2 < p1));
    TEST_CHECK(not (p2 <= p1));
    TEST_CHECK(p2 > p1);
    TEST_CHECK(p2 >= p1);
    TEST_CHECK(not (p2 == p1));
    TEST_CHECK(p2 != p1);

    TEST_CHECK(p1 == p1);
    TEST_CHECK(not (p1 != p1));
    TEST_CHECK(not (p1 < p1));
    TEST_CHECK(p1 <= p1);
    TEST_CHECK(not (p1 > p1));
    TEST_CHECK(p1 >= p1);
}

TEST_CASE(hash_value_test)
{
    const path p1("/foo/./bar");
    const path p2("/foo/bar");

    auto const h1 = hash_value(p1);
    auto const h2 = hash_value(p2);

    TEST_CHECK(h1 != h2);
    TEST_CHECK(h1 == hash_value(p1));
    TEST_CHECK(h2 == hash_value(p2));
}


TEST_CASE(output_stream_test)
{
    const std::string s("/foo/bar/baz");
    const path p(s);

    std::stringstream ss;
    ss << p;
    TEST_REQUIRE(ss);
    TEST_CHECK(ss.str() == p.native());
}

TEST_CASE(input_stream_test)
{
    const std::string s("/foo/bar/baz");
    const path expect(s);
    path p;

    std::stringstream ss;
    ss << s;
    ss >> p;
    TEST_REQUIRE(ss);
    TEST_CHECK(p == expect);
}

TEST_SUITE_END()