//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/memory_resource>

// virtual ~memory_resource()

#include <experimental/memory_resource>
#include <type_traits>

namespace ex = std::experimental::pmr;

int main()
{
    static_assert(
        std::has_virtual_destructor<ex::memory_resource>::value
      , "Must have virtual destructor"
      );
    static_assert(
        std::is_abstract<ex::memory_resource>::value
      , "Must be abstract"
      );
}

