//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// REQUIRES: verify-diagnostics

// test the generated [[no_discard]] warnings

#define _LIBCPP_DISABLE_NO_DISCARD_CONTAINER_OBSERVERS
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <string_view>

// Note: -Wunused-result is not emitted from within function templates so
// we instead use a macro to avoid duplication.
#define TEST_WARNING4(...) \
  do { __VA_ARGS__ C; C.empty(); C.size(); C.capacity(); C.max_size(); } while (false)

#define TEST_WARNING3(...) \
  do { __VA_ARGS__ C; C.empty(); C.size(); C.max_size(); } while (false)

int main() {
  // expected-no-diagnostics
  // std::vector
  {
    TEST_WARNING4(std::vector<int>);
    TEST_WARNING4(std::vector<bool>);
  }
  // std::string
  {
    TEST_WARNING4(std::string);
    std::string s;
    s.length();
  }
  {
    TEST_WARNING3(std::string_view);
    std::string_view s;
    s.length();
  }
  {
    TEST_WARNING3(std::deque<int>);
  }
  {
    TEST_WARNING3(std::list<int>);
  }
  {
    std::forward_list<int> C;
    C.empty();
    C.max_size();
  }
  {
    TEST_WARNING3(std::set<int>);
    TEST_WARNING3(std::multiset<int>);
  }
  {
    TEST_WARNING3(std::map<int, int>);
    TEST_WARNING3(std::multimap<int, int>);
  }
  {
    TEST_WARNING3(std::unordered_set<int>);
    TEST_WARNING3(std::unordered_multiset<int>);
  }
  {
    TEST_WARNING3(std::unordered_map<int, int>);
    TEST_WARNING3(std::unordered_multimap<int, int>);
  }
}
