//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/memory_resource>

// UNSUPPORTED: c++98, c++03

//------------------------------------------------------------------------------
// TESTING virtual ~memory_resource()
//
// Concerns:
//  A) 'memory_resource' is destructible.
//  B) The destructor is implicitly marked noexcept.
//  C) The destructor is marked virtual.
//
// Plan:
//  1) Use type traits to check concerns A, B and C.
//
//  2) To check concerns A and C at runtime dynamically create an object of
//     a type that is derived from 'memory_resource'. Then delete that object
//     using a pointer to 'memory_resource' and ensure that the derived classes
//     destructor was invoked.


#include <experimental/memory_resource>
#include <type_traits>
#include <cassert>

#include "test_memory_resource.hpp"

using std::experimental::pmr::memory_resource;

int main()
{
    static_assert(
        std::has_virtual_destructor<memory_resource>::value
      , "Must have virtual destructor"
      );
    static_assert(
        std::is_nothrow_destructible<memory_resource>::value,
        "Must be nothrow destructible"
      );
    static_assert(
        std::is_abstract<memory_resource>::value
      , "Must be abstract"
      );
    // Check that the destructor of `TestResource` is called when
    // it is deleted as a pointer to `memory_resource`
    {
        using RT = TestResource;
        memory_resource* M = new RT(42);
        assert(RT::resource_alive == 1);
        assert(RT::resource_constructed == 1);
        assert(RT::resource_destructed == 0);

        delete M;

        assert(RT::resource_alive == 0);
        assert(RT::resource_constructed == 1);
        assert(RT::resource_destructed == 1);
    }
}
