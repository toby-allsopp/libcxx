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

#define _LIBCPP_DISABLE_NO_DISCARD_TRY_LOCK
#include <mutex>
#include <shared_mutex>

#include "test_macros.h"

int main() {
  // expected-no-diagnostics
  {
    std::mutex m;
    m.try_lock();
    m.unlock();
  }
  {
    std::recursive_mutex m;
    m.try_lock();
    m.unlock();
  }
  {
    std::timed_mutex m;
    m.try_lock();
    m.unlock();
    m.try_lock_for(std::chrono::seconds(1));
    m.unlock();
    m.try_lock_until(std::chrono::steady_clock::now() + std::chrono::seconds(1));
    m.unlock();
  }
  {
    std::recursive_timed_mutex m;
    m.try_lock();
    m.unlock();
    m.try_lock_for(std::chrono::seconds(1));
    m.unlock();
    m.try_lock_until(std::chrono::steady_clock::now() + std::chrono::seconds(1));
    m.unlock();
  }
  {
    std::mutex m;
    std::unique_lock<std::mutex> lk(m);
    lk.unlock();
    lk.try_lock();
  }
  {
    std::timed_mutex m;
    std::unique_lock<std::timed_mutex> lk(m);
    lk.unlock();
    lk.try_lock();
    lk.unlock();
    lk.try_lock_for(std::chrono::seconds(1));
    lk.unlock();
    lk.try_lock_until(std::chrono::steady_clock::now() + std::chrono::seconds(1));
    lk.unlock();
  }
#if TEST_STD_VER > 11
  {
    std::shared_timed_mutex m;
    m.try_lock();
    m.unlock();
    m.try_lock_for(std::chrono::seconds(1));
    m.unlock();
    m.try_lock_until(std::chrono::steady_clock::now() + std::chrono::seconds(1));
    m.unlock();
    m.try_lock_shared();
    m.unlock();
    m.try_lock_shared_for(std::chrono::seconds(1));
    m.unlock();
    m.try_lock_shared_until(std::chrono::steady_clock::now() + std::chrono::seconds(1));
    m.unlock();
  }
  {
    std::shared_timed_mutex m;
    std::shared_lock<std::shared_timed_mutex> lk(m);
    lk.unlock();
    lk.try_lock();
    lk.unlock();
    lk.try_lock_for(std::chrono::seconds(1));
    lk.unlock();
    lk.try_lock_until(std::chrono::steady_clock::now() + std::chrono::seconds(1));
    lk.unlock();
  }
#endif
#if TEST_STD_VER > 14
  {
    std::shared_mutex m;
    m.try_lock();
    m.unlock();
    m.try_lock_shared();
    m.unlock();
  };
#endif
}
