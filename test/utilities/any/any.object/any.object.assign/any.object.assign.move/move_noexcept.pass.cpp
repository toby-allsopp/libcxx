//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/any>

// any& operator=(any &&) noexcept;

#include <experimental/any>

int main() 
{
#if _LIBCPP_STD_VER > 11
    using std::experimental::any;
    any a1;
    any a2;
    static_assert(
        noexcept(a1 = std::move(a2))
      , "any & operator=(any &&) must be noexcept"
      );
#endif
}