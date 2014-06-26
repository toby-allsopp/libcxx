//===------------------------ any.cpp -------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#include "experimental/any"

namespace std  // purposefully not using versioning namespace
{ namespace experimental {

#ifdef _LIBCPP_HAS_NO_DEFAULTED_FUNCTIONS

bad_any_cast::~bad_any_cast() _NOEXCEPT {}

#else

bad_any_cast::~bad_any_cast() _NOEXCEPT = default;

#endif

const char* bad_any_cast::what() const _NOEXCEPT
{
    return "bad any cast";
}

}}  // std::experimental
