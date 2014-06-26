//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/any>

// any() noexcept;

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
        static_assert(
            std::is_nothrow_default_constructible<any>::value
          , "Must be default constructible"
          ); 
    }
    {
        any const a;
        assert(a.empty());
        assert(a.type() == typeid(void));
        assert(new_called == 0);
    }
    assert(new_called == 0);
#endif  // _LIBCPP_STD_VER > 11
}