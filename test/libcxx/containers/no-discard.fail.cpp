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
  // std::vector
  {
    TEST_WARNING4(std::vector<int>); // expected-warning 4 {{ignoring return value}}
    TEST_WARNING4(std::vector<bool>); // expected-warning 4 {{ignoring return value}}
  }
  // std::string
  {
    TEST_WARNING4(std::string); // expected-warning 4 {{ignoring return value}}
    std::string s;
    s.length(); // expected-warning {{ignoring return value}}
  }
  {
    TEST_WARNING3(std::string_view); // expected-warning 3 {{ignoring return value}}
    std::string_view s;
    s.length(); // expected-warning {{ignoring return value}}
  }
  {
    TEST_WARNING3(std::deque<int>); // expected-warning 3 {{ignoring return value}}
  }
  {
    TEST_WARNING3(std::list<int>); // expected-warning 3 {{ignoring return value}}
  }
  {
    std::forward_list<int> C;
    C.empty(); // expected-warning {{ignoring return value}}
    C.max_size(); // expected-warning {{ignoring return value}}
  }
  {
    TEST_WARNING3(std::set<int>); // expected-warning 3 {{ignoring return value}}
    TEST_WARNING3(std::multiset<int>); // expected-warning 3 {{ignoring return value}}
  }
  {
    TEST_WARNING3(std::map<int, int>); // expected-warning 3 {{ignoring return value}}
    TEST_WARNING3(std::multimap<int, int>); // expected-warning 3 {{ignoring return value}}
  }
  {
    TEST_WARNING3(std::unordered_set<int>); // expected-warning 3 {{ignoring return value}}
    TEST_WARNING3(std::unordered_multiset<int>); // expected-warning 3 {{ignoring return value}}
  }
  {
    TEST_WARNING3(std::unordered_map<int, int>); // expected-warning 3 {{ignoring return value}}
    TEST_WARNING3(std::unordered_multimap<int, int>); // expected-warning 3 {{ignoring return value}}
  }
}
