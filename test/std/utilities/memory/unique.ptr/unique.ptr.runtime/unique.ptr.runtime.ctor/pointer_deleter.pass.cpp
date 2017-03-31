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
// TESTING unique_ptr(pointer, deleter)
//
// Concerns:
//   1 unique_ptr(pointer, deleter&&) only requires a MoveConstructible deleter.
//   2 unique_ptr(pointer, deleter&) requires a CopyConstructible deleter.
//   3 unique_ptr<T, D&>(pointer, deleter) does not require a CopyConstructible deleter.
//   4 unique_ptr<T, D const&>(pointer, deleter) does not require a CopyConstructible deleter.
//   5 unique_ptr(pointer, deleter) should *NOT* work for derived pointers.
//   6 unique_ptr(pointer, deleter) should work with function pointers.

#include <memory>
#include <cassert>

#include "test_macros.h"
#include "deleter_types.h"

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

bool my_free_called = false;

void my_free(void*) { my_free_called = true; }

#if TEST_STD_VER >= 11
struct DeleterBase {
  void operator()(void*) const {}
};
struct CopyOnlyDeleter : DeleterBase {
  CopyOnlyDeleter() = default;
  CopyOnlyDeleter(CopyOnlyDeleter const&) = default;
  CopyOnlyDeleter(CopyOnlyDeleter&&) = delete;
};
struct MoveOnlyDeleter : DeleterBase {
  MoveOnlyDeleter() = default;
  MoveOnlyDeleter(MoveOnlyDeleter&&) = default;
};
struct NoCopyMoveDeleter : DeleterBase {
  NoCopyMoveDeleter() = default;
  NoCopyMoveDeleter(NoCopyMoveDeleter const&) = delete;
};
#endif

void test_sfinae() {
#if TEST_STD_VER >= 11
  {
    using D = CopyOnlyDeleter;
    using U = std::unique_ptr<A[], D>;
    static_assert(std::is_constructible<U, A*, D const&>::value, "");
    static_assert(std::is_constructible<U, A*, D&>::value, "");
    static_assert(std::is_constructible<U, A*, D&&>::value, "");

    static_assert(!std::is_constructible<U, B*, D const&>::value, "");
    static_assert(!std::is_constructible<U, B*, D&>::value, "");
    static_assert(!std::is_constructible<U, B*, D&&>::value, "");
    // FIXME: __libcpp_compressed_pair attempts to perform a move even though
    // it should only copy.
    //D d;
    //U u(nullptr, std::move(d));
  }
  {
    using D = MoveOnlyDeleter;
    using U = std::unique_ptr<A[], D>;
    static_assert(!std::is_constructible<U, A*, D const&>::value, "");
    static_assert(!std::is_constructible<U, A*, D&>::value, "");
    static_assert(std::is_constructible<U, A*, D&&>::value, "");

    static_assert(!std::is_constructible<U, B*, D const&>::value, "");
    static_assert(!std::is_constructible<U, B*, D&>::value, "");
    static_assert(!std::is_constructible<U, B*, D&&>::value, "");
    D d;
    U u(nullptr, std::move(d));
  }
  {
    using D = NoCopyMoveDeleter;
    using U = std::unique_ptr<A[], D>;
    static_assert(!std::is_constructible<U, A*, D const&>::value, "");
    static_assert(!std::is_constructible<U, A*, D&>::value, "");
    static_assert(!std::is_constructible<U, A*, D&&>::value, "");

    static_assert(!std::is_constructible<U, B*, D const&>::value, "");
    static_assert(!std::is_constructible<U, B*, D&>::value, "");
    static_assert(!std::is_constructible<U, B*, D&&>::value, "");
  }
  {
    using D = NoCopyMoveDeleter;
    using U = std::unique_ptr<A[], D&>;
    static_assert(!std::is_constructible<U, A*, D const&>::value, "");
    static_assert(std::is_constructible<U, A*, D&>::value, "");
    static_assert(!std::is_constructible<U, A*, D&&>::value, "");
    static_assert(!std::is_constructible<U, A*, const D&&>::value, "");

    static_assert(!std::is_constructible<U, B*, D const&>::value, "");
    static_assert(!std::is_constructible<U, B*, D&>::value, "");
    static_assert(!std::is_constructible<U, B*, D&&>::value, "");
    static_assert(!std::is_constructible<U, B*, const D&&>::value, "");
  }
  {
    using D = NoCopyMoveDeleter;
    using U = std::unique_ptr<A[], const D&>;
    static_assert(std::is_constructible<U, A*, D const&>::value, "");
    static_assert(std::is_constructible<U, A*, D&>::value, "");
    static_assert(!std::is_constructible<U, A*, D&&>::value, "");
    static_assert(!std::is_constructible<U, A*, const D&&>::value, "");

    static_assert(!std::is_constructible<U, B*, D const&>::value, "");
    static_assert(!std::is_constructible<U, B*, D&>::value, "");
    static_assert(!std::is_constructible<U, B*, D&&>::value, "");
    static_assert(!std::is_constructible<U, B*, const D&&>::value, "");
  }
#endif
}

void test_noexcept() {
#if TEST_STD_VER >= 11
  {
    using D = CopyOnlyDeleter;
    using U = std::unique_ptr<int[], D>;
    static_assert(std::is_nothrow_constructible<U, int*, D const&>::value, "");
    static_assert(std::is_nothrow_constructible<U, int*, D&>::value, "");
    static_assert(std::is_nothrow_constructible<U, int*, D&&>::value, "");
  }
  {
    using D = MoveOnlyDeleter;
    using U = std::unique_ptr<int[], D>;
    static_assert(std::is_nothrow_constructible<U, int*, D&&>::value, "");
    D d;
    U u(nullptr, std::move(d));
  }
  {
    using D = NoCopyMoveDeleter;
    using U = std::unique_ptr<int[], D&>;
    static_assert(std::is_nothrow_constructible<U, int*, D&>::value, "");
  }
  {
    using D = NoCopyMoveDeleter;
    using U = std::unique_ptr<int[], const D&>;
    static_assert(std::is_nothrow_constructible<U, int*, D const&>::value, "");
    static_assert(std::is_nothrow_constructible<U, int*, D&>::value, "");
  }
#endif
}

int main() {
  {
    std::unique_ptr<A[], Deleter<A[]>> s1(nullptr, Deleter<A[]>());
    assert(s1.get() == nullptr);

    NCDeleter<A[]> d2(5);
    std::unique_ptr<A[], NCDeleter<A[]>&> s2(nullptr, d2);
    assert(s2.get() == nullptr);
    assert(s2.get_deleter().state() == 5);

    NCConstDeleter<A[]> d3(5);
    std::unique_ptr<A[], NCConstDeleter<A[]> const&> s3(nullptr, d3);
    assert(s3.get() == nullptr);
    assert(s3.get_deleter().state() == 5);
  }
  assert(A::count == 0);
  { // MoveConstructible deleter (C-1)
    A* p = new A[3];
    assert(A::count == 3);
    std::unique_ptr<A[], Deleter<A[]>> s(p, Deleter<A[]>(5));
    assert(s.get() == p);
    assert(s.get_deleter().state() == 5);
  }
  assert(A::count == 0);
  { // CopyConstructible deleter (C-2)
    A* p = new A[3];
    assert(A::count == 3);
    CopyDeleter<A[]> d(5);
    std::unique_ptr<A[], CopyDeleter<A[]>> s(p, d);
    assert(s.get() == p);
    assert(s.get_deleter().state() == 5);
    d.set_state(6);
    assert(s.get_deleter().state() == 5);
  }
  assert(A::count == 0);
  { // Reference deleter (C-3)
    A* p = new A[3];
    assert(A::count == 3);
    NCDeleter<A[]> d(5);
    std::unique_ptr<A[], NCDeleter<A[]>&> s(p, d);
    assert(s.get() == p);
    assert(&s.get_deleter() == &d);
    assert(s.get_deleter().state() == 5);
    d.set_state(6);
    assert(s.get_deleter().state() == 6);
  }
  assert(A::count == 0);
  { // Const Reference deleter (C-4)
    A* p = new A[3];
    assert(A::count == 3);
    NCConstDeleter<A[]> d(5);
    std::unique_ptr<A[], NCConstDeleter<A[]> const&> s(p, d);
    assert(s.get() == p);
    assert(s.get_deleter().state() == 5);
    assert(&s.get_deleter() == &d);
  }
  assert(A::count == 0);
  { // Void and function pointers (C-6,7)
    {
      int arr[3];
      std::unique_ptr<int[], void (*)(void*)> s(arr, my_free);
      assert(s.get() == arr);
      assert(s.get_deleter() == my_free);
      assert(!my_free_called);
    }
    assert(my_free_called);
  }
  test_sfinae();
  test_noexcept();
}
