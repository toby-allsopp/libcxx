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
#include <cassert>

#include "test_macros.h"
#include "filesystem_test_helper.hpp"

namespace fs = std::experimental::filesystem;

void test_construction_fails(fs::path const& p) {
    using namespace fs;
    std::error_code ec;
    directory_options opts = directory_options::none;
    const directory_iterator endIt;
    {
        directory_iterator it(p, ec);
        assert(ec);
        assert(it == endIt);
    }
    ec.clear();
    {
        directory_iterator it(p, opts, ec);
        assert(ec);
        assert(it == endIt);
    }
#ifndef TEST_HAS_NO_EXCEPTIONS
    {
        try {
            directory_iterator it(p);
            assert(false);
        } catch (filesystem_error const& err) {
            assert(err.path1() == p);
        }
    }
    {
        try {
            directory_iterator it(p, opts);
            assert(false);
        } catch (filesystem_error const& err) {
            assert(err.path1() == p);
        }
    }
#endif
}


void test_construction_equals_end(fs::path const& p) {
    using namespace fs;
    std::error_code ec;
    directory_options opts = directory_options::none;
    const directory_iterator endIt;
    {
        directory_iterator it(p, ec);
        assert(!ec);
        assert(it == endIt);
    }
    ec.clear();
    {
        directory_iterator it(p, opts, ec);
        assert(!ec);
        assert(it == endIt);
    }
    {
        directory_iterator it(p);
        assert(it == endIt);
    }
    {
        directory_iterator it(p, opts);
        assert(it == endIt);
    }
}

int main() {
    using namespace fs;
    using D = directory_iterator;
    {
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
    {
        test_construction_fails(StaticEnv::DNE);
        test_construction_fails(StaticEnv::File);
        test_construction_fails(StaticEnv::SymlinkToFile);
    }
    {
        test_construction_equals_end(StaticEnv::EmptyDir);
    }
}