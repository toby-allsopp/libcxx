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

#include <memory>
#include <cassert>

int main()
{
    // shared_ptr
    {
        std::shared_ptr<int> p;
        p.get(); // expected-warning {{ignoring return value}}
        *p; // expected-warning {{ignoring return value}}
        p.operator->(); // expected-warning {{ignoring return value}}
        p.operator bool(); // expected-warning {{ignoring return value}}
        p.use_count(); // expected-warning {{ignoring return value}}
        p.unique(); // expected-warning {{ignoring return value}}
    }
    // weak_ptr
    {
        std::weak_ptr<int> p;
        p.use_count(); // expected-warning {{ignoring return value}}
        p.expired(); // expected-warning {{ignoring return value}}
    }
    // unique_ptr single
    {
        std::unique_ptr<int> p;
        p.get(); // expected-warning {{ignoring return value}}
        *p; // expected-warning {{ignoring return value}}
        p.operator->(); // expected-warning {{ignoring return value}}
        p.operator bool(); // expected-warning {{ignoring return value}}
    }
    // unique_ptr array
    {
        std::unique_ptr<int[]> p;
        p.get(); // expected-warning {{ignoring return value}}
        p[0]; // expected-warning {{ignoring return value}}
        p.operator bool(); // expected-warning {{ignoring return value}}
    }
}
