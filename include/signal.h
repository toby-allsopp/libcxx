// -*- C++ -*-
//===--------------------------- signal.h ----------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#if defined(__need_sig_atomic_t) || defined(__need_sigset_t)

#if !defined(_LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER)
#pragma GCC system_header
#endif

#include_next <signal.h>

#elif !defined(_LIBCPP_SIGNAL_H)
#define _LIBCPP_SIGNAL_H

/*
    signal.h synopsis

Macros:

    SIG_DFL
    SIG_ERR
    SIG_IGN
    SIGABRT
    SIGFPE
    SIGILL
    SIGINT
    SIGSEGV
    SIGTERM
*/

#include <__config>

#if !defined(_LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER)
#pragma GCC system_header
#endif

#include_next <signal.h>

#endif  // _LIBCPP_SIGNAL_H
