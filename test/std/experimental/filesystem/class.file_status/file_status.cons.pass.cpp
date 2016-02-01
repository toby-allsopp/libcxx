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

// class file_status

// explicit file_status() noexcept;
// explicit file_status(file_type, perms prms = perms::unknown) noexcept;

#include <experimental/filesystem>
#include <type_traits>
#include <cassert>

namespace fs = std::experimental::filesystem;

int main() {
 using namespace fs;

  // Default ctor
  {
    // TODO(EricWF) Test the constructor is marked as explicit.
    static_assert(std::is_nothrow_default_constructible<file_status>::value,
                  "The default constructor must be noexcept");
    const file_status f;
    assert(f.type()  == file_type::none);
    assert(f.permissions() == perms::unknown);
  }

  // Unary ctor
  {
    static_assert(std::is_nothrow_constructible<file_status, file_type>::value,
                  "This constructor must be noexcept");
    static_assert(std::is_convertible<file_status, file_type>::value == false,
                 "This constructor must be explicit");

    const file_status f(file_type::not_found);
    assert(f.type()  == file_type::not_found);
    assert(f.permissions() == perms::unknown);
  }
  // Binary ctor
  {
    // TODO(EricWF) Test the constructor is marked as explicit.
    static_assert(std::is_nothrow_constructible<file_status, file_type, perms>::value,
                  "This constructor must be noexcept");

    const file_status f(file_type::regular, perms::owner_read);
    assert(f.type()  == file_type::regular);
    assert(f.permissions() == perms::owner_read);
  }
}
