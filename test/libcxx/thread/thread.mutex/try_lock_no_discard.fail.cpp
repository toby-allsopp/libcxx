//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// UNSUPPORTED: libcpp-has-no-threads
// REQUIRES: verify-diagnostics

// test the generated [[no_discard]] warnings

#include <mutex>
#include <shared_mutex>

#include "test_macros.h"

int main() {
  {
    std::mutex m;
    m.try_lock(); // expected-warning {{ignoring return value}}
    m.unlock();
  }
  {
    std::recursive_mutex m;
    m.try_lock(); // expected-warning {{ignoring return value}}
    m.unlock();
  }
  {
    std::timed_mutex m;
    m.try_lock(); // expected-warning {{ignoring return value}}
    m.unlock();
    m.try_lock_for(std::chrono::seconds(1)); // expected-warning {{ignoring return value}}
    m.unlock();
    m.try_lock_until(std::chrono::steady_clock::now() + std::chrono::seconds(1)); // expected-warning {{ignoring return value}}
    m.unlock();
  }
  {
    std::recursive_timed_mutex m;
    m.try_lock(); // expected-warning {{ignoring return value}}
    m.unlock();
    m.try_lock_for(std::chrono::seconds(1)); // expected-warning {{ignoring return value}}
    m.unlock();
    m.try_lock_until(std::chrono::steady_clock::now() + std::chrono::seconds(1)); // expected-warning {{ignoring return value}}
    m.unlock();
  }
  {
    std::mutex m;
    std::unique_lock<std::mutex> lk(m);
    lk.unlock();
    lk.try_lock(); // expected-warning {{ignoring return value}}
  }
  {
    std::timed_mutex m;
    std::unique_lock<std::timed_mutex> lk(m);
    lk.unlock();
    lk.try_lock(); // expected-warning {{ignoring return value}}
    lk.unlock();
    lk.try_lock_for(std::chrono::seconds(1)); // expected-warning {{ignoring return value}}
    lk.unlock();
    lk.try_lock_until(std::chrono::steady_clock::now() + std::chrono::seconds(1)); // expected-warning {{ignoring return value}}
    lk.unlock();
  }
#if TEST_STD_VER > 11
  {
    std::shared_timed_mutex m;
    m.try_lock(); // expected-warning {{ignoring return value}}
    m.unlock();
    m.try_lock_for(std::chrono::seconds(1)); // expected-warning {{ignoring return value}}
    m.unlock();
    m.try_lock_until(std::chrono::steady_clock::now() + std::chrono::seconds(1)); // expected-warning {{ignoring return value}}
    m.unlock();
    m.try_lock_shared(); // expected-warning {{ignoring return value}}
    m.unlock();
    m.try_lock_shared_for(std::chrono::seconds(1)); // expected-warning {{ignoring return value}}
    m.unlock();
    m.try_lock_shared_until(std::chrono::steady_clock::now() + std::chrono::seconds(1)); // expected-warning {{ignoring return value}}
    m.unlock();
  }
  {
    std::shared_timed_mutex m;
    std::shared_lock<std::shared_timed_mutex> lk(m);
    lk.unlock();
    lk.try_lock(); // expected-warning {{ignoring return value}}
    lk.unlock();
    lk.try_lock_for(std::chrono::seconds(1)); // expected-warning {{ignoring return value}}
    lk.unlock();
    lk.try_lock_until(std::chrono::steady_clock::now() + std::chrono::seconds(1)); // expected-warning {{ignoring return value}}
    lk.unlock();
  }
#endif
#if TEST_STD_VER > 14
  {
    std::shared_mutex m;
    m.try_lock(); // expected-warning {{ignoring return value}}
    m.unlock();
    m.try_lock_shared(); // expected-warning {{ignoring return value}}
    m.unlock();
  };
#endif
}
