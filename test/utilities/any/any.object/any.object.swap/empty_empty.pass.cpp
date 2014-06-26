//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/any>

// any::swap(any &) noexcept

#include <experimental/any>
#include <new>
#include <type_traits>
#include <cstdlib>
#include <cassert>

int new_called = 0;

void* operator new(std::size_t s) throw(std::bad_alloc)
{
    ++new_called;
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
    {
        any a1;
        assert(a1.empty());
        any a2;
        assert(a2.empty());
        assert(new_called == 0);
        a1.swap(a2);
        assert(a1.empty());
        assert(a1.type() == typeid(void));
        assert(a2.empty());
        assert(a2.type() == typeid(void));
        assert(new_called == 0);
    }
    assert(new_called == 0);
#endif  // _LIBCPP_STD_VER > 11
}