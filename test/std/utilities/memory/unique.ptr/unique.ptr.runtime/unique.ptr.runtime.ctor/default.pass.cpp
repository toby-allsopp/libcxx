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

// Test unique_ptr default ctor

// default unique_ptr ctor should only require default Deleter ctor

#include <memory>
#include <cassert>

#include "test_macros.h"
#include "deleter_types.h"


struct IncompleteT;

void checkNumIncompleteTypeAlive(int i);

template <class Del = std::default_delete<IncompleteT[]> >
struct StoresIncomplete {
  std::unique_ptr<IncompleteT[], Del> m_ptr;
  StoresIncomplete()  {}
  ~StoresIncomplete();

  IncompleteT* get() const { return m_ptr.get(); }
  Del& get_deleter() { return m_ptr.get_deleter(); }
};



#if TEST_STD_VER >= 11
struct NonDefaultDeleter {
  NonDefaultDeleter() = delete;
  void operator()(void*) const;
};
#endif

void test_sfinae() {
#if TEST_STD_VER >= 11
  { // the constructor does not participate in overload resultion when
    // the deleter is a pointer type
    using U = std::unique_ptr<int[], void (*)(void*)>;
    static_assert(!std::is_default_constructible<U>::value, "");
  }
  { // the constructor does not participate in overload resolution when
    // the deleter is not default constructible
    using Del = CDeleter<int[]>;
    using U1 = std::unique_ptr<int[], NonDefaultDeleter>;
    using U2 = std::unique_ptr<int[], Del&>;
    using U3 = std::unique_ptr<int[], Del const&>;
    static_assert(!std::is_default_constructible<U1>::value, "");
    static_assert(!std::is_default_constructible<U2>::value, "");
    static_assert(!std::is_default_constructible<U3>::value, "");
  }
#endif
}

int main()
{
    test_sfinae();
#if TEST_STD_VER >= 11
  {
      using U1 = std::unique_ptr<int[]>;
      using U2 = std::unique_ptr<int[], Deleter<int[]> >;
      static_assert(std::is_nothrow_default_constructible<U1>::value, "");
      static_assert(std::is_nothrow_default_constructible<U2>::value, "");
  }
#endif
    {
    std::unique_ptr<int[]> p;
    assert(p.get() == 0);
    }
    {
    std::unique_ptr<int[], Deleter<int[]> > p;
    assert(p.get() == 0);
    assert(p.get_deleter().state() == 0);
    }
  {
        StoresIncomplete<> s;
        assert(s.get() == 0);
        checkNumIncompleteTypeAlive(0);
    }
    checkNumIncompleteTypeAlive(0);
    {
        StoresIncomplete< Deleter<IncompleteT> > s;
        assert(s.get() == 0);
        assert(s.get_deleter().state() == 0);
        checkNumIncompleteTypeAlive(0);
    }
    checkNumIncompleteTypeAlive(0);
}


struct IncompleteT {
    static int count;
    IncompleteT() { ++count; }
    ~IncompleteT() {--count; }
};

int IncompleteT::count = 0;

void checkNumIncompleteTypeAlive(int i) {
    assert(IncompleteT::count == i);
}

template <class Del>
StoresIncomplete<Del>::~StoresIncomplete() { }
