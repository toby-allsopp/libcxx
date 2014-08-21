//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// REQUIRES: locale.en_US.UTF-8
// REQUIRES: locale.fr_FR.UTF-8

// <locale>

// template <class charT> class numpunct_byname;

// char_type thousands_sep() const;

#include <locale>
#include <cassert>

#include "platform_support.h" // locale name macros

int main()
{
    {
        std::locale l("C");
        {
            typedef char C;
            const std::numpunct<C>& np = std::use_facet<std::numpunct<C> >(l);
            assert(np.thousands_sep() == ',');
        }
        {
            typedef wchar_t C;
            const std::numpunct<C>& np = std::use_facet<std::numpunct<C> >(l);
            assert(np.thousands_sep() == L',');
        }
    }
    {
        std::locale l(LOCALE_en_US_UTF_8);
        {
            typedef char C;
            const std::numpunct<C>& np = std::use_facet<std::numpunct<C> >(l);
            assert(np.thousands_sep() == ',');
        }
        {
            typedef wchar_t C;
            const std::numpunct<C>& np = std::use_facet<std::numpunct<C> >(l);
            assert(np.thousands_sep() == L',');
        }
    }
    {
        std::locale l(LOCALE_fr_FR_UTF_8);
        {
            typedef char C;
            const std::numpunct<C>& np = std::use_facet<std::numpunct<C> >(l);
        // GLIBC uses ' ' as the thousands_sep. That seems to be inline with
        // http://docs.oracle.com/cd/E19455-01/806-0169/overview-9/index.html
#       if !defined(__GLIBC__)
            assert(np.thousands_sep() == ',');
#       else
            assert(np.thousands_sep() == ' ');
#       endif
        }
        {
            typedef wchar_t C;
            const std::numpunct<C>& np = std::use_facet<std::numpunct<C> >(l);
#       if !defined(__GLIBC__)
            assert(np.thousands_sep() == L',');
#       else
            assert(np.thousands_sep() == L' ');
#       endif
        }
    }
}
