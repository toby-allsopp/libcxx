//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// REQUIRES: verify-diagnostics

// <memory>

// unique_ptr

// test [[no_discard]] warnings for release

#define _LIBCPP_DISABLE_NO_DISCARD_UNIQUE_PTR_RELEASE
#include <memory>
#include <cassert>

int main()
{
    // expected-no-diagnostics
    {
        std::unique_ptr<int> p;
        p.release();
    }
    {
        std::unique_ptr<int[]> p;
        p.release();
    }
}
