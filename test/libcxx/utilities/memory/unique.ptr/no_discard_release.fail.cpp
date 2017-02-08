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

#include <memory>
#include <cassert>

int main()
{
    {
        std::unique_ptr<int> p;
        p.release(); // expected-warning {{ignoring return value}}
    }
    {
        std::unique_ptr<int[]> p;
        p.release(); // expected-warning {{ignoring return value}}
    }
}
