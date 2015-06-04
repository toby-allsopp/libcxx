#ifndef INVOKE_SUPPORT_HPP
#define INVOKE_SUPPORT_HPP

//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

/// C++14 [func.def] 20.9.0
/// (1) The following definitions apply to this Clause:
/// (2) A call signature is the name of a return type followed by a parenthesized
///     comma-separated list of zero or more argument types.
/// (3) A callable type is a function object type (20.9) or a pointer to member.
/// (4) A callable object is an object of a callable type.
/// (5) A call wrapper type is a type that holds a callable object and supports
///     a call operation that forwards to that object.
/// (6) A call wrapper is an object of a call wrapper type.
/// (7) A target object is the callable object held by a call wrapper.

/// C++14 [func.require] 20.9.1 
///
/// Define INVOKE (f, t1, t2, ..., tN) as follows:
///   (1.1) — (t1.*f)(t2, ..., tN) when f is a pointer to a member function of a class T and t1 is an object of
///   type T or a reference to an object of type T or a reference to an object of a type derived from T;
///   (1.2) — ((*t1).*f)(t2, ..., tN) when f is a pointer to a member function of a class T and t1 is not one of
///   the types described in the previous item;
///   (1.3) — t1.*f when N == 1 and f is a pointer to member data of a class T and t1 is an object of type T or a
///   reference to an object of type T or a reference to an object of a type derived from T;
///   (1.4) — (*t1).*f when N == 1 and f is a pointer to member data of a class T and t1 is not one of the types
///   described in the previous item;
///   (1.5) — f(t1, t2, ..., tN) in all other cases.


///============================================================================
///                           TEST PLAN
///----------------------------------------------------------------------------
///                           (General)
/// Overview:
///     TODO
///----------------------------------------------------------------------------
/// Concerns:
///     TODO
///----------------------------------------------------------------------------
/// Plan:
///     TODO


// [func.require]
#include <functional>
#include <type_traits>
#include <cassert>

#include "test_macros.h"


////////////////////////////////////////////////////////////////////////////////
//                          TEST UTILITIES
////////////////////////////////////////////////////////////////////////////////

/// The #define decltype provided by libc++ in c++03 mode is actually __typeof__
/// which provides different semantics. These tests use the builtin decltype instead.
#define TestDecltype(...) __decltype(__VA_ARGS__)

// libstdc++ doesn't have an __invoke_return metafunction. This workaround
// allows the tests to be used against libstdc++.
#if _LIBCPP_VERSION
using std::__invoke_return;
#else
template <class Fn, class...Args>
using __invoke_return = std::result_of<Fn(Args...)>;
#endif

/// PrintAssert - A utility for printing the types used in a failing static
/// assertion.
template <class Tp, bool = Tp::value>
struct PrintAssert {};

template <class Tp>
struct PrintAssert<Tp, false>;

/// RawType - Remove all CV-Ref qualifiers from a type.
template <class Tp>
struct RawType : std::remove_cv<typename std::remove_reference<Tp>::type> {};

template <class Ret>
struct AddOptRef {
    typedef typename std::conditional<
        std::is_class<Ret>::value,
#if TEST_STD_VER >= 11
        typename std::add_rvalue_reference<Ret>::type,
#else
        typename std::add_lvalue_reference<Ret>::type,
#endif
       Ret
    >::type type;
};

/// Convert T to the specified return type Ret. The primary use of this function
/// is to change the value-category for a variable. Since __invoke(...) is only
/// ever called on lvalues we don't test __invoke(Value).
template <class Ret, class Tp>
typename AddOptRef<Ret>::type
ValueCast(Tp& t) {
    return static_cast<typename AddOptRef<Ret>::type>(t);
}

/// GetValue provides a uniform interface that returns the value stored in a
/// test-type or integer.
template <class Tp>
decltype(std::declval<Tp>().value())
GetValue(Tp const volatile& x) {
    return x.value();
}

template <class Tp>
typename std::enable_if<
    std::is_convertible<Tp, int>::value,
    int
>::type
GetValue(Tp const volatile& x) {
    return x;
}

template <class ClassType>
typename std::enable_if<
    !std::is_pointer<ClassType>::value,
    int
>::type
makeTestType(int id) { return id; }

template <class ClassType>
typename std::enable_if<
    std::is_pointer<ClassType>::value,
    ClassType
>::type
makeTestType(int id) {
    typedef typename std::remove_pointer<ClassType>::type RawType;
    return new RawType(id);
}

////////////////////////////////////////////////////////////////////////////////
/// TypeTag is a template used to create unique types that store a value.
/// Two TypeTags are equal iff they have the same type, tag and stored value.
/// TypeTags are copy constructible.
template <int Tag, class T>
struct TypeTag {
  explicit TypeTag(T t) : m_value(t) {}
  TypeTag(TypeTag const& t) : m_value(t.m_value) {}
  TypeTag(TypeTag const volatile& t) : m_value(t.m_value) {}
#if TEST_STD_VER >= 11
  TypeTag(TypeTag const volatile&& t) : m_value(t.m_value) {}
#endif

  int value() const volatile {
    return m_value;
  }
  T m_value;
};

template <int LHS, int RHS, class LHS_T, class RHS_T>
inline bool operator==(TypeTag<LHS, LHS_T> const&, TypeTag<RHS, RHS_T> const&) {
    return false;
}

template <int LHS, int RHS, class T>
inline bool operator==(TypeTag<LHS, T> const& lhs, TypeTag<RHS, T> const& rhs) {
  return LHS == RHS && lhs.value() == rhs.value();
}

typedef TypeTag<0, int> Tag1;
typedef TypeTag<0, int> IntTag0;
typedef TypeTag<1, int> IntTag1;
typedef TypeTag<2, int> IntTag2;
typedef TypeTag<3, int> IntTag3;
typedef TypeTag<4, int> IntTag4;


////////////////////////////////////////////////////////////////////////////////
/// StrictTag is a template used to create unique types that store a value.
/// Two StrictTags are equal iff they have the same type, tag and stored value.
/// StrictTags are not copyable or moveable.
template <int Tag, class T>
struct StrictTag {
  explicit StrictTag(T t) : m_value(t) {}

  int value() const volatile { return m_value; }

private:
#if TEST_STD_VER >= 11
  StrictTag(StrictTag const&) = delete;
  StrictTag& operator=(StrictTag const&) = delete;
#else
  StrictTag(StrictTag const&);
  StrictTag& operator=(StrictTag const&);
#endif

private:
  T m_value;
};

template <int LHS, int RHS, class LHS_T, class RHS_T>
inline bool operator==(StrictTag<LHS, LHS_T> const&, StrictTag<RHS, RHS_T> const&) {
    return false;
}

template <int LHS, int RHS, class T>
inline bool operator==(StrictTag<LHS, T> const& lhs, StrictTag<RHS, T> const& rhs) {
  return LHS == RHS && lhs.value() == rhs.value();
}

typedef StrictTag<0, int> STag1;

///////////////////////////////////////////////////////////////////////////////
/// ReturnTag - The type returned by functors passed to __invoke. The template
/// parameter 'T' is used to encode the call signature of the functor called.
/// Tests can check that __invoke called the correct overload by checking the
/// type of 'T'. NOTE: The callee cant always determine the correct value for
/// ReturnTag because it might use VarArgs.
template <class T>
struct ReturnTag {
  explicit ReturnTag(int xid, int xa1 = -1, int xa2 = -1, int xa3 = -1)
    : id(xid), a1(xa1), a2(xa2), a3(xa3) {}
  ReturnTag(ReturnTag const& t)  { setValues(t.id, t.a1, t.a2, t.a3); }
  ReturnTag(ReturnTag const volatile& t)  { setValues(t.id, t.a1, t.a2, t.a3); }
#if TEST_STD_VER >= 11
  ReturnTag(ReturnTag const volatile&& t) { setValues(t.id, t.a1, t.a2, t.a3); }
#endif
  void setValues(int xid, int xa1, int xa2, int xa3) {
    id = xid;
    a1 = xa1;
    a2 = xa2;
    a3 = xa3;
  }

  int callArity() const volatile {
    if (a1 == -1) return 0;
    if (a2 == -1) return 1;
    if (a3 == -1) return 2;
    return 3;
  }

  int id;
  int a1;
  int a2;
  int a3;
};

template <class LHS, class RHS>
inline bool operator==(ReturnTag<LHS> const&, ReturnTag<RHS> const&) {
    return false;
}

template <class T>
inline bool operator==(ReturnTag<T> const& lhs, ReturnTag<T> const& rhs) {
  const int minArity = lhs.callArity() < rhs.callArity()
    ? lhs.callArity() : rhs.callArity();
  return lhs.id == rhs.id
    && (minArity < 1 || lhs.a1 == rhs.a1)
    && (minArity < 2 || lhs.a2 == rhs.a2)
    && (minArity < 3 || lhs.a3 == rhs.a3);
}


////////////////////////////////////////////////////////////////////////////////
//                           TEST TYPES
////////////////////////////////////////////////////////////////////////////////
/**
 * The test types in this section define either Functor types or Functor
 * instance types. Each test type satisfies the following list of requirements.
 * 1. ID-able: The type has an explicit constructor from an integer ID and
 *      a value() method to access that value. The ID is stored by the type and
 *      is used to construct the TypeTags it returns. The ID constructor is the
 *      only way to construct new test types.
 * 2. Non-copyable: The type has a accessable, undefined, copy constructor and
 *      assignment operator.
 * 3. Non-moveable: The type does not have a move constructor or assignment
 *      operator.
 * 4. MoveWrapper-Moveable: The type is convertible and constructible from a
 *      MoveWrapper for that type. This functionality is used by "get(...)" and
 *      make_test_class to return test-types by value.
 */

////////////////////////////////////////////////////////////////////////////////

/// A test-type that derives from the class specified as Base. This is used
/// to test bullets 1 and 3.
template <class Base>
class DerivedFrom : public Base
{
public:
    explicit DerivedFrom(int x) : Base(x) {}
    // Provide a deref function that should never be called because
    // derived types should be chosen before deref.
    Base& operator*() const volatile { assert(false); }
private:
    DerivedFrom(DerivedFrom const&);
    DerivedFrom& operator=(DerivedFrom const&);
};

/// A test-type that dereferences to the type specified as its template parameter.
/// This is used to test bullets 2 and 4.
/// NOTE: DerefTo does not propogate top level cv-qualifiers to the stored type.
///       This means that DerefTo acts similar to pointers when applying cv-qualifiers.
template <class To>
class DerefTo {
public:
    explicit DerefTo(int x) : to(x) {}
    To& operator*() const volatile { return const_cast<To&>(to); }

    // Provide conversions to the deref type. These functions should never be
    // called because bullets 1 and 2 don't check for conversions.
    operator To&() const volatile { assert(false); }
#if TEST_STD_VER >= 11
    operator To&&() const volatile { assert(false); }
#endif

private:
    DerefTo(DerefTo const &);
    DerefTo& operator=(DerefTo const&);
    To to;
};

/// A test-type that dereferences to the type specified as its template parameter.
/// NOTE: DerefToProp DOES propogate top level cv-ref-qualifiers to the stored type.
template <class To>
class DerefToProp {
public:
    explicit DerefToProp(int x) : to(x) {}

#if TEST_STD_VER < 11
    To& operator*()            { return to; }
    To const& operator*() const { return to; }
    To volatile& operator*() volatile { return to; }
    To const volatile& operator*() const volatile { return to; }
#else
    To& operator*()            &{ return to; }
    To const& operator*() const &{ return to; }
    To volatile& operator*() volatile &{ return to; }
    To const volatile& operator*() const volatile &{ return to; }

    To&& operator*()            && { return std::move(to); }
    To const&& operator*() const && { return std::move(to); }
    To volatile&& operator*() volatile && { return std::move(to); }
    To const volatile&& operator*() const volatile && { return std::move(to); }
#endif
private:
    DerefToProp(DerefToProp const &);
    DerefToProp& operator=(DerefToProp const&);

    To to;
};

///////////////////////////////////////////////////////////////////////////////
//                    TEST MEMBER OBJECT POINTERS
///////////////////////////////////////////////////////////////////////////////
/// MemObj is a test-type that can be used as the Functor type for bullets 3
/// and 4. It provides all of the cv-qualified variants for pointer to member
/// data.
class MemObj
{
public:
  explicit MemObj(int x) : Obj(x), ObjC(x), ObjV(x), ObjCV(x) {}

  IntTag1 Obj;
  IntTag2 const ObjC;
  IntTag3 volatile ObjV;
  IntTag4 const volatile ObjCV;
private:
  MemObj(MemObj const&);
  MemObj& operator=(MemObj const&);
};

typedef IntTag1 ObjRet;
typedef IntTag2 const ObjCRet;
typedef IntTag3 volatile ObjVRet;
typedef IntTag4 const volatile ObjCVRet;

// typedef used in generated tests.
typedef MemObj MemObj11;


#if TEST_STD_VER >= 11
struct FunctorForward11 {
    FunctorForward11(int xid) : id(xid) {}
    int value() const volatile { return id; }

    template <class ...Args>
    ReturnTag<void(Args&&...) &> operator()(Args&&...) & {
        return ReturnTag<void(Args&&...) &>(id);
    }
    template <class ...Args>
    ReturnTag<void(Args&&...) const &> operator()(Args&&...) const & {
        return ReturnTag<void(Args&&...) const &>(id);
    }
    template <class ...Args>
    ReturnTag<void(Args&&...) volatile &> operator()(Args&&...) volatile & {
        return ReturnTag<void(Args&&...) volatile &>(id);
    }
    template <class ...Args>
    ReturnTag<void(Args&&...) const volatile &> operator()(Args&&...) const volatile & {
        return ReturnTag<void(Args&&...) const volatile &>(id);
    }
    template <class ...Args>
    ReturnTag<void(Args&&...) &&> operator()(Args&&...) && {
        return ReturnTag<void(Args&&...) &&>(id);
    }
    template <class ...Args>
    ReturnTag<void(Args&&...) const &&> operator()(Args&&...) const && {
        return ReturnTag<void(Args&&...) const &&>(id);
    }
    template <class ...Args>
    ReturnTag<void(Args&&...) volatile &&> operator()(Args&&...) volatile && {
        return ReturnTag<void(Args&&...) volatile &&>(id);
    }
    template <class ...Args>
    ReturnTag<void(Args&&...) const volatile &&> operator()(Args&&...) const volatile && {
        return ReturnTag<void(Args&&...) const volatile &&>(id);
    }

private:
    FunctorForward11(FunctorForward11 const&);
    FunctorForward11& operator=(FunctorForward11 const&);
    int id;
};
#endif


#include "generated/invoke-support-cxx03.inl"
#if TEST_STD_VER >= 11
#include "generated/invoke-support-cxx11.inl"
#endif

#endif // INVOKE_SUPPORT_HPP
