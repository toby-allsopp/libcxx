//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#include <__hash_table>
#include <unordered_map>
#include <unordered_set>
#include <type_traits>

#include "test_macros.h"
#include "min_allocator.h"

template <class P, bool Expected>
void testIsPair() {
  {
    static_assert(std::__is_pair<P>::value == Expected, "");
    static_assert(std::__is_pair<const P>::value == Expected, "");
    static_assert(std::__is_pair<P&>::value == Expected, "");
    static_assert(std::__is_pair<P const&>::value == Expected, "");
    static_assert(std::__is_pair<P&&>::value == Expected, "");
    static_assert(std::__is_pair<P const&&>::value == Expected, "");
  }
}

template <class Tp, bool Expected>
void testCanExtractKey() {
  static_assert(std::__can_extract_key_set)
}

int main() {
  testIsPair<std::pair<int, void*>, true>();
  testIsPair<void*, false>();
  
}
