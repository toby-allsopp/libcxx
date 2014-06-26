//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/any>

// namespace __any::__is_small_object

#include <experimental/any>
#include <type_traits>
#include <memory>
#include <cassert>

struct noexcept_moveable
{
    noexcept_moveable(noexcept_moveable &&) noexcept {}
};

struct throws_moveable
{
    throws_moveable(throws_moveable &&) noexcept(false) {}
};

int main()
{
#if _LIBCPP_STD_VER > 11
    using std::experimental::__any::__is_small_object;
    using std::experimental::__any::__storage;
    {
        using T = __storage<noexcept_moveable, std::allocator<noexcept_moveable>>;
        static_assert(
            __is_small_object<T>::value
          , "must be small object"
          );
    }
    {
        using T = __storage<throws_moveable, std::allocator<throws_moveable>>;
        static_assert(
            !__is_small_object<T>::value
          , "must NOT be small object"
          );
    }
#endif /* _LIBCPP_STD_VER > 11 */
}