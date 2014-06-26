//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/any>

// template <class ValueType>
// ValueType any_cast(any const &);
//
// template <class ValueType>
// ValueType any_cast(any &);
//
// template <class ValueType>
// ValueType any_cast(any &&);


#include <experimental/any>
#include <cassert>

struct no_copy
{
    no_copy() {}
    no_copy(no_copy &&) {}

private:
    no_copy(no_copy const &);
};

// Even though you can't get a non-copyable class into std::any
// the standard requires that these overloads compile and function.
int main() 
{
#if _LIBCPP_STD_VER > 11
    using std::experimental::any;
    using std::experimental::any_cast;
    using std::experimental::bad_any_cast;
    // const lvalue
    {
        any const a;
        try {
            any_cast<no_copy const &>(a);
            assert(false);
        } catch (bad_any_cast const &) {
            // do nothing
        } catch (...) {
            assert(false);
        }
        assert(a.empty());
        assert(a.type() == typeid(void));
    }
    // lvalue
    {
        any a;
        try {
            any_cast<no_copy &>(a);
            assert(false);
        } catch (bad_any_cast const &) {
            // do nothing
        } catch (...) {
            assert(false);
        }
        assert(a.empty());
        assert(a.type() == typeid(void));
    }
    // rvalue
    {
        any a;
        try {
            any_cast<no_copy &>(std::move(a));
            assert(false);
        } catch (bad_any_cast const &) {
            // do nothing
        } catch (...) {
            assert(false);
        }
        assert(a.empty());
        assert(a.type() == typeid(void));
    }
#endif
}