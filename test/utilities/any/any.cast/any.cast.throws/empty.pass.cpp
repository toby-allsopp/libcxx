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
#include <cstdlib>
#include <cassert>


int new_called = 0;
int total_new = 0;

void* operator new(std::size_t s) throw(std::bad_alloc)
{
    ++new_called; ++total_new;
    return std::malloc(s);
}

void  operator delete(void* p) throw()
{
    --new_called;
    std::free(p);
}

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
            any_cast<int>(a);
            assert(false);
        } catch (bad_any_cast const &) {
            // do nothing
        } catch (...) {
            assert(false);
        }
        
        assert(a.empty());
        assert(a.type() == typeid(void));
    }
    // non-const lvalue
    {
        any a;
        try {
            any_cast<int>(a);
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
            any_cast<int>(std::move(a));
            assert(false);
        } catch (bad_any_cast const &) {
            // do nothing
        } catch (...) {
            assert(false);
        }
        assert(a.empty());
        assert(a.type() == typeid(void));
    }
    assert(total_new == 0);
#endif
}