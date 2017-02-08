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

// test the generated [[no_discard]] warnings for shared_ptr,
// weak_ptr, and unique_ptr's observers.

#define _LIBCPP_DISABLE_NO_DISCARD_SMART_PTR_OBSERVERS
#include <memory>
#include <cassert>

int main()
{
    // expected-no-diagnostics
    // shared_ptr
    {
        std::shared_ptr<int> p;
        p.get();
        *p;
        p.operator->();
        p.operator bool();
        p.use_count();
        p.unique();
    }
    // weak_ptr
    {
        std::weak_ptr<int> p;
        p.use_count();
        p.expired();
    }
    // unique_ptr single
    {
        std::unique_ptr<int> p;
        p.get();
        *p;
        p.operator->();
        p.operator bool();
    }
    // unique_ptr array
    {
        std::unique_ptr<int[]> p;
        p.get();
        p[0];
        p.operator bool();
    }
}
