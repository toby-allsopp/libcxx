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
// ValueType const* any_cast(any const *) noexcept;
//
// template <class ValueType>
// ValueType * any_cast(any *) noexcept;

#include <experimental/any>
#include <type_traits>

int main() 
{
#if _LIBCPP_STD_VER > 11
    using std::experimental::any;
    using std::experimental::any_cast;
    {
        any a;
        static_assert(
            noexcept(any_cast<int>(&a))
          , "any_cast(any*) must be noexcept"
          );
    }
    {
        any const a;
        static_assert(
            noexcept(any_cast<int const>(&a))
          , "any_cast(any const *) must be noexcept"
          );
    }
    
#endif
}