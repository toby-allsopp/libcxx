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
// template <class Visitor, class... Variants>
// constexpr see below visit(Visitor&& vis, Variants&&... vars);

#include <variant>
#include <type_traits>
#include <string>
#include <cassert>

#include "test_macros.h"
#include "type_id.h"


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
    Variant v2(std::in_place<MakeEmptyT>);
    try {
        v = std::move(v2);
        assert(false);
    }  catch (...) {
        assert(v.valueless_by_exception());
    }
}
#endif // TEST_HAS_NO_EXCEPTIONS


enum CallType : unsigned {
  CT_None,
  CT_NonConst = 1,
  CT_Const = 2,
  CT_LValue = 4,
  CT_RValue = 8
};

inline constexpr CallType operator|(CallType LHS, CallType RHS) {
    return static_cast<CallType>(static_cast<unsigned>(LHS) | static_cast<unsigned>(RHS));
}

struct ForwardingCallObject {

  template <class ...Args>
  bool operator()(Args&&... args) & {
      set_call<Args&&...>(CT_NonConst | CT_LValue);
      return true;
  }

  template <class ...Args>
  bool operator()(Args&&... args) const & {
      set_call<Args&&...>(CT_Const | CT_LValue);
      return true;
  }

  // Don't allow the call operator to be invoked as an rvalue.
  template <class ...Args>
  bool operator()(Args&&... args) && {
      set_call<Args&&...>(CT_NonConst | CT_RValue);
      return true;
  }

  template <class ...Args>
  bool operator()(Args&&... args) const && {
      set_call<Args&&...>(CT_Const | CT_RValue);
      return true;
  }

  template <class ...Args>
  static void set_call(CallType type) {
      assert(last_call_type == CT_None);
      assert(last_call_args == nullptr);
      last_call_type = type;
      last_call_args = std::addressof(makeArgumentID<Args...>());
  }

  template <class ...Args>
  static bool check_call(CallType type) {
      bool result =
           last_call_type == type
        && last_call_args
        && *last_call_args == makeArgumentID<Args...>();
      last_call_type = CT_None;
      last_call_args = nullptr;
      return result;
  }

  static CallType      last_call_type;
  static TypeID const* last_call_args;
};

CallType ForwardingCallObject::last_call_type = CT_None;
TypeID const* ForwardingCallObject::last_call_args = nullptr;


void test_call_operator_forwarding()
{
    using Fn = ForwardingCallObject;
    Fn obj{};
    Fn const& cobj = obj;
    { // test call operator forwarding - single variant, single arg
        using V = std::variant<int>;
        V v(42);
        std::visit(obj, v);
        assert(Fn::check_call<int&>(CT_NonConst | CT_LValue));
        std::visit(cobj, v);
        assert(Fn::check_call<int&>(CT_Const | CT_LValue));
        std::visit(std::move(obj), v);
        assert(Fn::check_call<int&>(CT_NonConst | CT_RValue));
        std::visit(std::move(cobj), v);
        assert(Fn::check_call<int&>(CT_Const | CT_RValue));
    }
    { // test call operator forwarding - single variant, multi arg
        using V = std::variant<int, long, double>;
        V v(42l);
        std::visit(obj, v);
        assert(Fn::check_call<long&>(CT_NonConst | CT_LValue));
        std::visit(cobj, v);
        assert(Fn::check_call<long&>(CT_Const | CT_LValue));
        std::visit(std::move(obj), v);
        assert(Fn::check_call<long&>(CT_NonConst | CT_RValue));
        std::visit(std::move(cobj), v);
        assert(Fn::check_call<long&>(CT_Const | CT_RValue));
    }
    { // test call operator forwarding - multi variant, multi arg
        using V = std::variant<int, long, double>;
        using V2 = std::variant<int*, std::string>;
        V v(42l);
        V2 v2("hello");
        std::visit(obj, v, v2);
        assert((Fn::check_call<long&, std::string&>(CT_NonConst | CT_LValue)));
        std::visit(cobj, v, v2);
        assert((Fn::check_call<long&, std::string&>(CT_Const | CT_LValue)));
        std::visit(std::move(obj), v, v2);
        assert((Fn::check_call<long&, std::string&>(CT_NonConst | CT_RValue)));
        std::visit(std::move(cobj), v, v2);
        assert((Fn::check_call<long&, std::string&>(CT_Const | CT_RValue)));
    }
}

void test_argument_forwarding()
{
    using Fn = ForwardingCallObject;
    Fn obj{};
    const auto Val = CT_LValue | CT_NonConst;
    { // single argument - value type
        using V = std::variant<int>;
        V v(42);
        V const& cv = v;
        std::visit(obj, v);
        assert(Fn::check_call<int &>(Val));
        std::visit(obj, cv);
        assert(Fn::check_call<int const&>(Val));
        std::visit(obj, std::move(v));
        assert(Fn::check_call<int &&>(Val));
        std::visit(obj, std::move(cv));
        assert(Fn::check_call<const int &&>(Val));
    }
    { // single argument - lvalue reference
        using V = std::variant<int&>;
        int x = 42;
        V v(x);
        V const& cv = v;
        std::visit(obj, v);
        assert(Fn::check_call<int &>(Val));
        std::visit(obj, cv);
        assert(Fn::check_call<int &>(Val));
        std::visit(obj, std::move(v));
        assert(Fn::check_call<int &>(Val));
        std::visit(obj, std::move(cv));
        assert(Fn::check_call<int &>(Val));
    }
    { // single argument - rvalue reference
        using V = std::variant<int&&>;
        int x = 42;
        V v(std::move(x));
        V const& cv = v;
        std::visit(obj, v);
        assert(Fn::check_call<int &>(Val));
        std::visit(obj, cv);
        assert(Fn::check_call<int &>(Val));
        std::visit(obj, std::move(v));
        assert(Fn::check_call<int &&>(Val));
        std::visit(obj, std::move(cv));
        assert(Fn::check_call<int &&>(Val));
    }
    { // multi argument - multi variant
        using S = std::string const&;
        using V = std::variant<int, S, long&&>;
        std::string const str = "hello";
        long l = 43;
        V v1(42);           V const& cv1 = v1;
        V v2(str);          V const& cv2 = v2;
        V v3(std::move(l)); V const& cv3 = v3;
        std::visit(obj, v1, v2, v3);
        assert((Fn::check_call<int&, S, long&>(Val)));
        std::visit(obj, cv1, cv2, std::move(v3));
        assert((Fn::check_call<const int&, S, long&&>(Val)));
    }
}

struct ReturnFirst {
  template <class ...Args>
  constexpr int operator()(int f, Args&&...) const {
      return f;
  }
};

struct ReturnArity {
  template <class ...Args>
  constexpr int operator()(Args&&...) const {
      return sizeof...(Args);
  }
};

void test_constexpr() {
    constexpr ReturnFirst obj{};
    constexpr ReturnArity aobj{};
    {
        using V = std::variant<int>;
        constexpr V v(42);
        static_assert(std::visit(obj, v) == 42, "");
    }
    {
        using V = std::variant<short, long, char>;
        constexpr V v(42l);
        static_assert(std::visit(obj, v) == 42, "");
    }
    {
        using V1 = std::variant<int>;
        using V2 = std::variant<int, char*, long long>;
        using V3 = std::variant<bool, int, int>;
        constexpr V1 v1;
        constexpr V2 v2(nullptr);
        constexpr V3 v3;
        static_assert(std::visit(aobj, v1, v2, v3) == 3, "");
    }
    {
        using V1 = std::variant<int>;
        using V2 = std::variant<int, char*, long long>;
        using V3 = std::variant<void*, int, int>;
        constexpr V1 v1;
        constexpr V2 v2(nullptr);
        constexpr V3 v3;
        static_assert(std::visit(aobj, v1, v2, v3) == 3, "");
    }
}

void test_exceptions() {
#ifndef TEST_HAS_NO_EXCEPTIONS
    ReturnArity obj{};
    auto test = [&](auto&&... args) {
      try {
          std::visit(obj, args...);
      } catch (std::bad_variant_access const&) {
          return true;
      } catch (...) {}
      return false;
    };
    {
        using V = std::variant<int, MakeEmptyT>;
        V v; makeEmpty(v);
        assert(test(v));
    }
    {
        using V = std::variant<int, MakeEmptyT>;
        using V2 = std::variant<long, std::string, void*>;
        V v; makeEmpty(v);
        V2 v2("hello");
        assert(test(v, v2));
    }
    {
        using V = std::variant<int, MakeEmptyT>;
        using V2 = std::variant<long, std::string, void*>;
        V v; makeEmpty(v);
        V2 v2("hello");
        assert(test(v2, v));
    }
    {
        using V = std::variant<int, MakeEmptyT>;
        using V2 = std::variant<long, std::string, void*, MakeEmptyT>;
        V v; makeEmpty(v);
        V2 v2; makeEmpty(v2);
        assert(test(v, v2));
    }
#endif
}

int main() {
    test_call_operator_forwarding();
    test_argument_forwarding();
    test_constexpr();
    test_exceptions();
}
