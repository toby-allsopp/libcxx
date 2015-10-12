//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <utility>

// template <class T1, class T2> struct pair

// constexpr pair();

#include <utility>
#include <type_traits>
#include <cassert>

#include "test_macros.h"


#if TEST_STD_VER >= 11
struct DeletedDefault {
    // A class with a deleted default constructor. Used to test the SFINAE
    // on std::pairs default constructor.
    constexpr explicit DeletedDefault(int x) : value(x) {}
    constexpr DeletedDefault() = delete;
    int value;
};
#endif

template <class T>
struct IllFormedDefaultImp {
  TEST_CONSTEXPR explicit IllFormedDefaultImp(int v) : value(v) {}
  TEST_CONSTEXPR IllFormedDefaultImp() : value(T::DoesNotExistAndShouldNotCompile) {}
  int value;
};

typedef IllFormedDefaultImp<int> IllFormedDefault;
    // A class which provides a default constructor with a valid signature but
    // an ill-formed body. A compile error will be emitted if the default
    // constructor is instantiated.


// Test that the defaulted constructor does not participate in overload
// resolution when either of the types in the pair is not default constructible.
// See LWG issue #2367
void test_deleted_default()
{
#if TEST_STD_VER >= 110
    {
    typedef std::pair<int, int> P;
    static_assert(std::is_default_constructible<P>::value, "");
    static_assert(std::is_constructible<P>::value, "");
    }
    {
    typedef std::pair<DeletedDefault, int> P;
    static_assert(!std::is_default_constructible<P>::value, "");
    static_assert(!std::is_constructible<P>::value, "");
    static_assert(std::is_constructible<P, DeletedDefault, int>::value, "");
    constexpr P p(DeletedDefault(42), -5);
    static_assert(p.first.value == 42 && p.second == -5, "");
    }
    {
    typedef std::pair<int, DeletedDefault> P;
    static_assert(!std::is_default_constructible<P>::value, "");
    static_assert(!std::is_constructible<P>::value, "");
    static_assert(std::is_constructible<P, int, DeletedDefault>::value, "");
    constexpr DeletedDefault dd(-5);
    constexpr P p(42, dd);
    static_assert(p.first == 42 && p.second.value == -5, "");
    }
    {
    typedef std::pair<DeletedDefault, DeletedDefault> P;
    static_assert(!std::is_default_constructible<P>::value, "");
    static_assert(std::is_constructible<P, DeletedDefault, DeletedDefault>::value, "");
    constexpr P p(DeletedDefault(42), DeletedDefault(-5));
    static_assert(p.first.value == 42 && p.second.value == -5, "");
    }
#endif
}


#if TEST_STD_VER > 11
#define CONSTEXPR_CXX14 constexpr
    // Expands to 'constexpr' in C++14 and greater and '' otherwise.
#define STATIC_ASSERT_CXX14(Pred) static_assert(Pred, "")
    // Assert the specified expression 'Pred' using a static_assert in C++14 and
    // greater and using assert(...) otherwise.
#else
#define CONSTEXPR_CXX14
#define STATIC_ASSERT_CXX14(Pred) assert(Pred)
#endif
    
#if TEST_STD_VER >= 11
#define ASSERT_CXX03_ONLY(Pred) ((void)0)
    // Assert the specified expression 'Pred' only in C++98 and C++03. In C++11
    // and greater 'ASSERT_CXX03_ONLY' expands to a nop expression.
#else
#define ASSERT_CXX03_ONLY(Pred) assert(Pred)
#endif

// Check that the SFINAE on the default constructor is not evaluated when
// it isn't needed. If the default constructor of 'IllFormedDefault' is evaluated
// in C++11, even with is_default_constructible, then this test should fail to
// compile. In C++14 and greater evaluate each test is evaluated as a constant
// expression. In C++03 evaluating is_default_constructible will compile return the
// wrong answer because libc++ does not back-port this behavior.
// See LWG issue #2367
void test_illformed_default()
{
    {
    typedef std::pair<IllFormedDefault, int> P;
    static_assert((std::is_constructible<P, IllFormedDefault, int>::value), "");
    CONSTEXPR_CXX14 P p(IllFormedDefault(42), -5);
    STATIC_ASSERT_CXX14(p.first.value == 42 && p.second == -5);
    ASSERT_CXX03_ONLY(std::is_default_constructible<P>::value); // ASSERTS BUG IN C++03
    }
    {
    typedef std::pair<int, IllFormedDefault> P;
    static_assert((std::is_constructible<P, int, IllFormedDefault>::value), "");
    CONSTEXPR_CXX14 IllFormedDefault dd(-5);
    CONSTEXPR_CXX14 P p(42, dd);
    STATIC_ASSERT_CXX14(p.first == 42 && p.second.value == -5);
    ASSERT_CXX03_ONLY(std::is_default_constructible<P>::value); // ASSERTS BUG IN C++03
    }
    {
    typedef std::pair<IllFormedDefault, IllFormedDefault> P;
    static_assert((std::is_constructible<P, IllFormedDefault, IllFormedDefault>::value), "");
    CONSTEXPR_CXX14 P p(IllFormedDefault(42), IllFormedDefault(-5));
    STATIC_ASSERT_CXX14(p.first.value == 42 && p.second.value == -5);
    ASSERT_CXX03_ONLY(std::is_default_constructible<P>::value); // ASSERTS BUG IN C++03
    }
}

int main()
{
    {
    typedef std::pair<float, short*> P;
    P p;
    assert(p.first == 0.0f);
    assert(p.second == nullptr);
    }
#if TEST_STD_VER >= 11
    {
    typedef std::pair<float, short*> P;
    constexpr P p;
    static_assert(p.first == 0.0f, "");
    static_assert(p.second == nullptr, "");
    }
#endif
    test_deleted_default();
    test_illformed_default();
}
