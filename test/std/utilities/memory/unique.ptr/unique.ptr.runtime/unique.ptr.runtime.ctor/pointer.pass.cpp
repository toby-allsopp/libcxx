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

//=============================================================================
// TESTING std::unique_ptr::unique_ptr(pointer)
//
// Concerns:
//   1 The pointer constructor works for any default constructible deleter types.
//   2 The pointer constructor accepts pointers to derived types.
//   2 The stored type 'T' is allowed to be incomplete.
//
// Plan
//  1 Construct unique_ptr<T, D>'s with a pointer to 'T' and various deleter
//   types (C-1)
//  2 Construct unique_ptr<T, D>'s with a pointer to 'D' and various deleter
//    types where 'D' is derived from 'T'. (C-1,2)
//  3 Construct a unique_ptr<T, D> with a pointer to 'T' and various deleter
//    types where 'T' is an incomplete type (C-1,3)

// Test unique_ptr(pointer) ctor

#include <memory>
#include <cassert>

#include "test_macros.h"
#include "deleter_types.h"

// unique_ptr(pointer) ctor should only require default Deleter ctor

struct A {
  static int count;
  A() { ++count; }
  A(const A&) { ++count; }
  virtual ~A() { --count; }
};

int A::count = 0;

struct B : public A {
  static int count;
  B() { ++count; }
  B(const B&) { ++count; }
  virtual ~B() { --count; }
};

int B::count = 0;

struct IncompleteT;

IncompleteT* getIncomplete();
void checkNumIncompleteTypeAlive(int i);

template <class Del = std::default_delete<IncompleteT[]>>
struct StoresIncomplete {
  std::unique_ptr<IncompleteT[], Del> m_ptr;
  StoresIncomplete() {}
  explicit StoresIncomplete(IncompleteT* ptr) : m_ptr(ptr) {}
  ~StoresIncomplete();

  IncompleteT* get() const { return m_ptr.get(); }
  Del& get_deleter() { return m_ptr.get_deleter(); }
};

void test_pointer() {
  {
    A* p = new A[3];
    assert(A::count == 3);
    std::unique_ptr<A[]> s(p);
    assert(s.get() == p);
  }
  assert(A::count == 0);
  {
    A* p = new A[3];
    assert(A::count == 3);
    std::unique_ptr<A[], NCDeleter<A[]>> s(p);
    assert(s.get() == p);
    assert(s.get_deleter().state() == 0);
  }
  assert(A::count == 0);
  {
    A* p = new A[3];
    assert(A::count == 3);
    std::unique_ptr<const A[], NCDeleter<const A[]>> s(p);
    assert(s.get() == p);
    assert(s.get_deleter().state() == 0);
  }
  assert(A::count == 0);
}

void test_incomplete() {
  {
    IncompleteT* p = getIncomplete();
    checkNumIncompleteTypeAlive(3);
    StoresIncomplete<> s(p);
    assert(s.get() == p);
  }
  checkNumIncompleteTypeAlive(0);
  {
    IncompleteT* p = getIncomplete();
    checkNumIncompleteTypeAlive(3);
    StoresIncomplete<NCDeleter<IncompleteT[]>> s(p);
    assert(s.get() == p);
    assert(s.get_deleter().state() == 0);
  }
  checkNumIncompleteTypeAlive(0);
}

struct IncompleteT {
  static int count;
  IncompleteT() { ++count; }
  ~IncompleteT() { --count; }
};

int IncompleteT::count = 0;

IncompleteT* getIncomplete() { return new IncompleteT[3]; }

void checkNumIncompleteTypeAlive(int i) { assert(IncompleteT::count == i); }

template <class Del>
StoresIncomplete<Del>::~StoresIncomplete() {}

#if TEST_STD_VER >= 11
struct NonDefaultDeleter {
  NonDefaultDeleter() = delete;
  void operator()(void*) const {}
};

struct GenericDeleter {
  void operator()(void*) const;
};
#endif

void test_sfinae() {
#if TEST_STD_VER >= 11
  { // the constructor does not participate in overload resultion when
    // the deleter is a pointer type
    using U = std::unique_ptr<int[], void (*)(void*)>;
    static_assert(!std::is_constructible<U, int*>::value, "");
  }
  { // the constructor does not participate in overload resolution when
    // the deleter is not default constructible
    using Del = CDeleter<int[]>;
    using U1 = std::unique_ptr<int[], NonDefaultDeleter>;
    using U2 = std::unique_ptr<int[], Del&>;
    using U3 = std::unique_ptr<int[], Del const&>;
    static_assert(!std::is_constructible<U1, int*>::value, "");
    static_assert(!std::is_constructible<U2, int*>::value, "");
    static_assert(!std::is_constructible<U3, int*>::value, "");
  }
  { // the constructor does not participate in overload resolution when
    // a base <-> derived conversion would occur.
    using UA = std::unique_ptr<A[]>;
    using UAD = std::unique_ptr<A[], GenericDeleter>;
    using UAC = std::unique_ptr<const A[]>;
    using UB = std::unique_ptr<B[]>;
    using UBD = std::unique_ptr<B[], GenericDeleter>;
    using UBC = std::unique_ptr<const B[]>;

    static_assert(!std::is_constructible<UA, B*>::value, "");
    static_assert(!std::is_constructible<UB, A*>::value, "");
    static_assert(!std::is_constructible<UAD, B*>::value, "");
    static_assert(!std::is_constructible<UBD, A*>::value, "");
    static_assert(!std::is_constructible<UAC, const B*>::value, "");
    static_assert(!std::is_constructible<UBC, const A*>::value, "");
  }
#endif
}

int main() {
  test_pointer();
  test_incomplete();
  test_sfinae();
#if TEST_STD_VER >= 11
  {
    using U1 = std::unique_ptr<int[]>;
    using U2 = std::unique_ptr<int[], Deleter<int[]>>;
    static_assert(std::is_nothrow_constructible<U1, int*>::value, "");
    static_assert(std::is_nothrow_constructible<U2, int*>::value, "");
  }
#endif
}
