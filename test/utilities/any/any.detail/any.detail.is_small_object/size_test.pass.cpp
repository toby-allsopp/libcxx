//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/any>

// __any::__is_small_object

#include <experimental/any>
#include <type_traits>
#include <memory>
#include <cassert>


struct empty_type {};
struct size_one { void* arr[1]; };
struct size_two { void* arr[2]; };
struct size_three { void* arr[3]; };

// no longer a small object
struct size_four { void* arr[4]; };

int main()
{
#if _LIBCPP_STD_VER > 11
    using std::experimental::__any::__is_small_object;
    using std::experimental::__any::__storage;
    {
        using T = __storage<empty_type, std::allocator<empty_type>>;
        static_assert(
            __is_small_object<T>::value
          , "Must be small object"
          );
    }
    {
        using T = __storage<size_one, std::allocator<size_one>>;
        static_assert(
            __is_small_object<T>::value
          , "Must be small object"
          );
    }
    {
        using T = __storage<size_two, std::allocator<size_two>>;
        static_assert(
            __is_small_object<T>::value
          , "Must be small object"
          );
    }
    {
        using T = __storage<size_three, std::allocator<size_three>>;
        static_assert(
            __is_small_object<T>::value
          , "must be small object"
          );
    }
    {
        using T = __storage<size_four, std::allocator<size_four>>;
        static_assert(
            !__is_small_object<T>::value
          , "Is not small object"
          );
    }
#endif /* _LIBCPP_STD_VER > 11 */
}