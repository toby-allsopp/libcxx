//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <memory>

// unique_ptr

// unique_ptr(nullptr_t);

#include <memory>
#include <cassert>

#include "test_macros.h"
#include "deleter_types.h"

// default unique_ptr ctor should only require default Deleter ctor
class DefaultDeleter {
  int state_;

  DefaultDeleter(DefaultDeleter&);
  DefaultDeleter& operator=(DefaultDeleter&);

public:
  DefaultDeleter() : state_(5) {}

  int state() const { return state_; }

  void operator()(void*) {}
};

#if TEST_STD_VER >= 11
struct NonDefaultDeleter {
  NonDefaultDeleter() = delete;
  void operator()(void*) const {}
};
#endif

void test_sfinae() {
#if TEST_STD_VER >= 11
  { // the constructor does not participate in overload resultion when
    // the deleter is a pointer type
    using U = std::unique_ptr<int, void (*)(void*)>;
    static_assert(!std::is_constructible<U, decltype(nullptr)>::value, "");
  }
  { // the constructor does not participate in overload resolution when
    // the deleter is not default constructible
    using Del = CDeleter<int>;
    using U1 = std::unique_ptr<int, NonDefaultDeleter>;
    using U2 = std::unique_ptr<int, Del&>;
    using U3 = std::unique_ptr<int, Del const&>;
    static_assert(!std::is_constructible<U1, decltype(nullptr)>::value, "");
    static_assert(!std::is_constructible<U2, decltype(nullptr)>::value, "");
    static_assert(!std::is_constructible<U3, decltype(nullptr)>::value, "");
  }
#endif
}

int main() {
  {
    std::unique_ptr<int> p(nullptr);
    assert(p.get() == 0);
  }
  {
    std::unique_ptr<int, DefaultDeleter> p(nullptr);
    assert(p.get() == 0);
    assert(p.get_deleter().state() == 5);
  }
#if TEST_STD_VER >= 11
  {
    using U1 = std::unique_ptr<int>;
    using U2 = std::unique_ptr<int, Deleter<int>>;
    static_assert(std::is_nothrow_constructible<U1, decltype(nullptr)>::value, "");
    static_assert(std::is_nothrow_constructible<U2, decltype(nullptr)>::value, "");
  }
#endif
  test_sfinae();
}
