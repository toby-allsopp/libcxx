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

// variant& operator=(variant&&) noexcept(see below);

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
  MoveOnly& operator=(MoveOnly const&) = delete;
  MoveOnly& operator=(MoveOnly&&) = default;
};

struct MoveOnlyNT {
  MoveOnlyNT(MoveOnlyNT const&) = delete;
  MoveOnlyNT(MoveOnlyNT&&) {}
  MoveOnlyNT& operator=(MoveOnlyNT const&) = delete;
  MoveOnlyNT& operator=(MoveOnlyNT&&) = default;
};

struct MoveOnlyOddNothrow {
  MoveOnlyOddNothrow(MoveOnlyOddNothrow&&) noexcept(false) {}
  MoveOnlyOddNothrow(MoveOnlyOddNothrow const&) = delete;
  MoveOnlyOddNothrow& operator=(MoveOnlyOddNothrow&&) noexcept = default;
  MoveOnlyOddNothrow& operator=(MoveOnlyOddNothrow const&) = delete;
};

struct MoveAssignOnly {
  MoveAssignOnly(MoveAssignOnly &&) = delete;
  MoveAssignOnly& operator=(MoveAssignOnly&&) = default;
};

struct MoveAssign {
  static int move_construct;
  static int move_assign;
  static void reset() {
      move_construct = move_assign = 0;
  }
  MoveAssign(int v) : value(v) {}
  MoveAssign(MoveAssign&& o) : value(o.value) { ++move_construct; o.value = -1; }
  MoveAssign& operator=(MoveAssign&& o)  { value = o.value; ++move_assign; o.value = -1; return *this; }
  int value;
};

int MoveAssign::move_construct = 0;
int MoveAssign::move_assign = 0;

#ifndef TEST_HAS_NO_EXCEPTIONS
struct MakeEmptyT {
  MakeEmptyT() = default;
  MakeEmptyT(MakeEmptyT&&) {
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
        v = std::move(v2);
        assert(false);
    }  catch (...) {
        assert(v.valueless_by_exception());
    }
}
#endif // TEST_HAS_NO_EXCEPTIONS

void test_move_assignment_noexcept() {
    {
        using V = std::variant<int>;
        static_assert(std::is_nothrow_move_assignable<V>::value, "");
    }
    {
        using V = std::variant<MoveOnly>;
        static_assert(std::is_nothrow_move_assignable<V>::value, "");
    }
    {
        using V = std::variant<int, long>;
        static_assert(std::is_nothrow_move_assignable<V>::value, "");
    }
    {
        using V = std::variant<int, MoveOnly>;
        static_assert(std::is_nothrow_move_assignable<V>::value, "");
    }
    {
        using V = std::variant<MoveOnlyNT>;
        static_assert(!std::is_nothrow_move_assignable<V>::value, "");
    }
    {
        using V = std::variant<MoveOnlyOddNothrow>;
        static_assert(!std::is_nothrow_move_assignable<V>::value, "");
    }
}

void test_move_assignment_sfinae() {
    {
        using V = std::variant<int, long>;
        static_assert(std::is_move_assignable<V>::value, "");
    }
    {
        // variant only provides move assignment when beth the move and move
        // constructors are well formed
        using V = std::variant<int, CopyOnly>;
        static_assert(!std::is_move_assignable<V>::value, "");
    }
    {
        using V = std::variant<int, NoCopy>;
        static_assert(!std::is_move_assignable<V>::value, "");
    }
    {
        using V = std::variant<int, MoveOnly>;
        static_assert(std::is_move_assignable<V>::value, "");
    }
    {
        using V = std::variant<int, MoveOnlyNT>;
        static_assert(std::is_move_assignable<V>::value, "");
    }
    {
        // variant only provides move assignment when the types also provide
        // a move constructor.
        using V = std::variant<int, MoveAssignOnly>;
        static_assert(!std::is_move_assignable<V>::value, "");
    }
}

void test_move_assignment_empty_empty()
{
#ifndef TEST_HAS_NO_EXCEPTIONS
    using MET = MakeEmptyT;
    {
        using V = std::variant<int, long, MET>;
        V v1(std::in_place_index<0>); makeEmpty(v1);
        V v2(std::in_place_index<0>); makeEmpty(v2);
        V& vref = (v1 = std::move(v2));
        assert(&vref == &v1);
        assert(v1.valueless_by_exception());
        assert(v1.index() == std::variant_npos);
    }
#endif
}

void test_move_assignment_non_empty_empty()
{
#ifndef TEST_HAS_NO_EXCEPTIONS
    using MET = MakeEmptyT;
    {
        using V = std::variant<int, MET>;
        V v1(std::in_place_index<0>, 42);
        V v2(std::in_place_index<0>); makeEmpty(v2);
        V& vref = (v1 = std::move(v2));
        assert(&vref == &v1);
        assert(v1.valueless_by_exception());
        assert(v1.index() == std::variant_npos);
    }
    {
        using V = std::variant<int, MET, std::string>;
        V v1(std::in_place_index<2>, "hello");
        V v2(std::in_place_index<0>); makeEmpty(v2);
        V& vref = (v1 = std::move(v2));
        assert(&vref == &v1);
        assert(v1.valueless_by_exception());
        assert(v1.index() == std::variant_npos);
    }
#endif
}


void test_move_assignment_empty_non_empty()
{
#ifndef TEST_HAS_NO_EXCEPTIONS
    using MET = MakeEmptyT;
    {
        using V = std::variant<int, MET>;
        V v1(std::in_place_index<0>); makeEmpty(v1);
        V v2(std::in_place_index<0>, 42);
        V& vref = (v1 = std::move(v2));
        assert(&vref == &v1);
        assert(v1.index() == 0);
        assert(std::get<0>(v1) == 42);
    }
    {
        using V = std::variant<int, MET, std::string>;
        V v1(std::in_place_index<0>); makeEmpty(v1);
        V v2(std::in_place_type<std::string>, "hello");
        V& vref = (v1 = std::move(v2));
        assert(&vref == &v1);
        assert(v1.index() == 2);
        assert(std::get<2>(v1) == "hello");
    }
#endif
}

void test_move_assignment_same_index()
{
    {
        using V = std::variant<int>;
        V v1(43);
        V v2(42);
        V& vref = (v1 = std::move(v2));
        assert(&vref == &v1);
        assert(v1.index() == 0);
        assert(std::get<0>(v1) == 42);
    }
    {
        using V = std::variant<int, long, unsigned>;
        V v1(43l);
        V v2(42l);
        V& vref = (v1 = std::move(v2));
        assert(&vref == &v1);
        assert(v1.index() == 1);
        assert(std::get<1>(v1) == 42);
    }
    {
        using V = std::variant<int, MoveAssign, unsigned>;
        V v1(std::in_place_type<MoveAssign>, 43);
        V v2(std::in_place_type<MoveAssign>, 42);
        MoveAssign::reset();
        V& vref = (v1 = std::move(v2));
        assert(&vref == &v1);
        assert(v1.index() == 1);
        assert(std::get<1>(v1).value == 42);
        assert(MoveAssign::move_construct == 0);
        assert(MoveAssign::move_assign == 1);
    }
#ifndef TEST_HAS_NO_EXCEPTIONS
    using MET = MakeEmptyT;
    {
        using V = std::variant<int, MET, std::string>;
        V v1(std::in_place_type<MET>);
        MET& mref = std::get<1>(v1);
        V v2(std::in_place_type<MET>);
        try {
            v1 = std::move(v2);
            assert(false);
        } catch (...) {
        }
        assert(v1.index() == 1);
        assert(&std::get<1>(v1) == &mref);
    }
#endif
}

void test_move_assignment_different_index()
{
    {
        using V = std::variant<int, long, unsigned>;
        V v1(43);
        V v2(42l);
        V& vref = (v1 = std::move(v2));
        assert(&vref == &v1);
        assert(v1.index() == 1);
        assert(std::get<1>(v1) == 42);
    }
    {
        using V = std::variant<int, MoveAssign, unsigned>;
        V v1(std::in_place_type<unsigned>, 43);
        V v2(std::in_place_type<MoveAssign>, 42);
        MoveAssign::reset();
        V& vref = (v1 = std::move(v2));
        assert(&vref == &v1);
        assert(v1.index() == 1);
        assert(std::get<1>(v1).value == 42);
        assert(MoveAssign::move_construct == 1);
        assert(MoveAssign::move_assign == 0);
    }
#ifndef TEST_HAS_NO_EXCEPTIONS
    using MET = MakeEmptyT;
    {
        using V = std::variant<int, MET, std::string>;
        V v1(std::in_place_type<int>);
        V v2(std::in_place_type<MET>);
        try {
            v1 = std::move(v2);
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
        V& vref = (v1 = std::move(v2));
        assert(&vref == &v1);
        assert(v1.index() == 2);
        assert(std::get<2>(v1) == "hello");
    }
#endif
}

int main()
{
    test_move_assignment_empty_empty();
    test_move_assignment_non_empty_empty();
    test_move_assignment_empty_non_empty();
    test_move_assignment_same_index();
    test_move_assignment_different_index();
    test_move_assignment_sfinae();
    test_move_assignment_noexcept();
}
