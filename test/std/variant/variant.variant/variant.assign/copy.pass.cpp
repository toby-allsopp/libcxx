// -*- C++ -*-
//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// UNSUPPORTED: c++98, c++03, c++11, c++14

// <variant>

// template <class ...Types> class variant;

// variant& operator=(variant const&);


#include <variant>
#include <type_traits>
#include <string>
#include <cassert>

#include "test_macros.h"

struct NoCopy {
  NoCopy(NoCopy const&) = delete;
  NoCopy& operator=(NoCopy const&) = default;
};

struct NothrowCopy {
  NothrowCopy(NothrowCopy const&) noexcept = default;
  NothrowCopy& operator=(NothrowCopy const&) noexcept = default;
};

struct CopyOnly {
  CopyOnly(CopyOnly const&) = default;
  CopyOnly(CopyOnly&&) = delete;
  CopyOnly& operator=(CopyOnly const&) = default;
  CopyOnly& operator=(CopyOnly&&) = delete;
};

struct MoveOnly {
  MoveOnly(MoveOnly const&) = delete;
  MoveOnly(MoveOnly&&) = default;
  MoveOnly& operator=(MoveOnly const&) = default;
};

struct MoveOnlyNT {
  MoveOnlyNT(MoveOnlyNT const&) = delete;
  MoveOnlyNT(MoveOnlyNT&&) {}
  MoveOnlyNT& operator=(MoveOnlyNT const&) = default;
};

struct CopyAssign {
  static int copy_construct;
  static int copy_assign;
  static int move_construct;
  static int move_assign;
  static void reset() {
      copy_construct = copy_assign = move_construct = move_assign = 0;
  }
  CopyAssign(int v) : value(v) {}
  CopyAssign(CopyAssign const& o) : value(o.value) { ++copy_construct; }
  CopyAssign(CopyAssign&& o) : value(o.value) { o.value = -1; ++move_construct; }
  CopyAssign& operator=(CopyAssign const& o)  { value = o.value; ++copy_assign; return *this; }
  CopyAssign& operator=(CopyAssign&& o)  { value = o.value; o.value = -1; ++move_assign; return *this; }
  int value;
};

int CopyAssign::copy_construct = 0;
int CopyAssign::copy_assign = 0;
int CopyAssign::move_construct = 0;
int CopyAssign::move_assign = 0;

#ifndef TEST_HAS_NO_EXCEPTIONS
struct CopyThrows {
  CopyThrows() = default;
  CopyThrows(CopyThrows const&) { throw 42; }
  CopyThrows& operator=(CopyThrows const&) { throw 42; }
};

struct MakeEmptyT {
  MakeEmptyT() = default;
  MakeEmptyT(MakeEmptyT const&) {
      // Don't throw from the copy constructor since variant's assignment
      // operator performs a copy before committing to the assignment.
  }
  MakeEmptyT(MakeEmptyT &&) {
    throw 42;
  }
  MakeEmptyT& operator=(MakeEmptyT const&) {
      throw 42;
  }
  MakeEmptyT& operator=(MakeEmptyT&&) {
      throw 42;
  }
};

template <class Variant>
void makeEmpty(Variant& v) {
    Variant v2(std::in_place_type<MakeEmptyT>);
    try {
        v = v2;
        assert(false);
    }  catch (...) {
        assert(v.valueless_by_exception());
    }
}
#endif // TEST_HAS_NO_EXCEPTIONS

void test_copy_assignment_not_noexcept() {
    {
        using V = std::variant<int>;
        static_assert(!std::is_nothrow_copy_assignable<V>::value, "");
    }
    {
        using V = std::variant<NothrowCopy>;
        static_assert(!std::is_nothrow_copy_assignable<V>::value, "");
    }
    {
        using V = std::variant<int, long>;
        static_assert(!std::is_nothrow_copy_assignable<V>::value, "");
    }
    {
        using V = std::variant<int, NothrowCopy>;
        static_assert(!std::is_nothrow_copy_assignable<V>::value, "");
    }
}

void test_copy_assignment_sfinae() {
    {
        using V = std::variant<int, long>;
        static_assert(std::is_copy_assignable<V>::value, "");
    }
    {
        // variant only provides copy assignment when beth the copy and move
        // constructors are well formed
        using V = std::variant<int, CopyOnly>;
        static_assert(!std::is_copy_assignable<V>::value, "");
    }
    {
        using V = std::variant<int, NoCopy>;
        static_assert(!std::is_copy_assignable<V>::value, "");
    }
    {
        using V = std::variant<int, MoveOnly>;
        static_assert(!std::is_copy_assignable<V>::value, "");
    }
    {
        using V = std::variant<int, MoveOnlyNT>;
        static_assert(!std::is_copy_assignable<V>::value, "");
    }
}

void test_copy_assignment_empty_empty()
{
#ifndef TEST_HAS_NO_EXCEPTIONS
    using MET = MakeEmptyT;
    {
        using V = std::variant<int, long, MET>;
        V v1(std::in_place_index<0>); makeEmpty(v1);
        V v2(std::in_place_index<0>); makeEmpty(v2);
        V& vref = (v1 = v2);
        assert(&vref == &v1);
        assert(v1.valueless_by_exception());
        assert(v1.index() == std::variant_npos);
    }
#endif
}

void test_copy_assignment_non_empty_empty()
{
#ifndef TEST_HAS_NO_EXCEPTIONS
    using MET = MakeEmptyT;
    {
        using V = std::variant<int, MET>;
        V v1(std::in_place_index<0>, 42);
        V v2(std::in_place_index<0>); makeEmpty(v2);
        V& vref = (v1 = v2);
        assert(&vref == &v1);
        assert(v1.valueless_by_exception());
        assert(v1.index() == std::variant_npos);
    }
    {
        using V = std::variant<int, MET, std::string>;
        V v1(std::in_place_index<2>, "hello");
        V v2(std::in_place_index<0>); makeEmpty(v2);
        V& vref = (v1 = v2);
        assert(&vref == &v1);
        assert(v1.valueless_by_exception());
        assert(v1.index() == std::variant_npos);
    }
#endif
}


void test_copy_assignment_empty_non_empty()
{
#ifndef TEST_HAS_NO_EXCEPTIONS
    using MET = MakeEmptyT;
    {
        using V = std::variant<int, MET>;
        V v1(std::in_place_index<0>); makeEmpty(v1);
        V v2(std::in_place_index<0>, 42);
        V& vref = (v1 = v2);
        assert(&vref == &v1);
        assert(v1.index() == 0);
        assert(std::get<0>(v1) == 42);
    }
    {
        using V = std::variant<int, MET, std::string>;
        V v1(std::in_place_index<0>); makeEmpty(v1);
        V v2(std::in_place_type<std::string>, "hello");
        V& vref = (v1 = v2);
        assert(&vref == &v1);
        assert(v1.index() == 2);
        assert(std::get<2>(v1) == "hello");
    }
#endif
}

void test_copy_assignment_same_index()
{
    {
        using V = std::variant<int>;
        V v1(43);
        V v2(42);
        V& vref = (v1 = v2);
        assert(&vref == &v1);
        assert(v1.index() == 0);
        assert(std::get<0>(v1) == 42);
    }
    {
        using V = std::variant<int, long, unsigned>;
        V v1(43l);
        V v2(42l);
        V& vref = (v1 = v2);
        assert(&vref == &v1);
        assert(v1.index() == 1);
        assert(std::get<1>(v1) == 42);
    }
    {
        using V = std::variant<int, CopyAssign, unsigned>;
        V v1(std::in_place_type<CopyAssign>, 43);
        V v2(std::in_place_type<CopyAssign>, 42);
        CopyAssign::reset();
        V& vref = (v1 = v2);
        assert(&vref == &v1);
        assert(v1.index() == 1);
        assert(std::get<1>(v1).value == 42);
        assert(CopyAssign::copy_construct == 0);
        assert(CopyAssign::move_construct == 0);
        assert(CopyAssign::copy_assign == 1);
    }
#ifndef TEST_HAS_NO_EXCEPTIONS
    using MET = MakeEmptyT;
    {
        using V = std::variant<int, MET, std::string>;
        V v1(std::in_place_type<MET>);
        MET& mref = std::get<1>(v1);
        V v2(std::in_place_type<MET>);
        try {
            v1 = v2;
            assert(false);
        } catch (...) {
        }
        assert(v1.index() == 1);
        assert(&std::get<1>(v1) == &mref);
    }
#endif
}

void test_copy_assignment_different_index()
{
    {
        using V = std::variant<int, long, unsigned>;
        V v1(43);
        V v2(42l);
        V& vref = (v1 = v2);
        assert(&vref == &v1);
        assert(v1.index() == 1);
        assert(std::get<1>(v1) == 42);
    }
    {
        using V = std::variant<int, CopyAssign, unsigned>;
        V v1(std::in_place_type<unsigned>, 43);
        V v2(std::in_place_type<CopyAssign>, 42);
        CopyAssign::reset();
        V& vref = (v1 = v2);
        assert(&vref == &v1);
        assert(v1.index() == 1);
        assert(std::get<1>(v1).value == 42);
        assert(CopyAssign::copy_construct == 1);
        assert(CopyAssign::move_construct == 1);
        assert(CopyAssign::copy_assign == 0);
    }
#ifndef TEST_HAS_NO_EXCEPTIONS
    using MET = MakeEmptyT;
    {
        using V = std::variant<int, MET, std::string>;
        V v1(std::in_place_type<int>);
        V v2(std::in_place_type<MET>);
        try {
            v1 = v2;
            assert(false);
        } catch (...) {
        }
        assert(v1.valueless_by_exception());
        assert(v1.index() == std::variant_npos);
    }
    {
        using V = std::variant<int, MET, std::string>;
        V v1(std::in_place_type<MET>);
        V v2(std::in_place_type<std::string>, "hello");
        V& vref = (v1 = v2);
        assert(&vref == &v1);
        assert(v1.index() == 2);
        assert(std::get<2>(v1) == "hello");
    }
    {
        // Test that if copy construction throws then original value is
        // unchanged.
        using V = std::variant<int, CopyThrows, std::string>;
        V v1(std::in_place_type<std::string>, "hello");
        V v2(std::in_place_type<CopyThrows>);
        try {
            v1 = v2;
            assert(false);
        } catch (...) { /* ... */ }
        assert(v1.index() == 2);
        assert(std::get<2>(v1) == "hello");
    }
#endif
}

int main()
{
    test_copy_assignment_empty_empty();
    test_copy_assignment_non_empty_empty();
    test_copy_assignment_empty_non_empty();
    test_copy_assignment_same_index();
    test_copy_assignment_different_index();
    test_copy_assignment_sfinae();
    test_copy_assignment_not_noexcept();
}
