=================================================
Supporting Capturing Custom Configuration Options
=================================================

.. contents::
   :local:

The Problem
===========

Currently the libc++ CMake build supports many different configuration options.
Some of which need to be captured and stored inside the libc++ headers in order
to work correctly after libc++ is installed.

For example the CMake option "-DLIBCXX_ENABLE_THREADS=OFF" is used to build
libc++ on platforms that have no pthread support. A library built without threading
support can only be used with headers that also disable threading support. In order
to support these kind of options libc++ needs to be able to capture configuration
time decisions and store them in the libc++ headers.

This document describes how libc++ captures configuration options in
the headers and the rational for the design.


Design Goals
============

* Configuration macros should be automatically captured and stored in the
  libc++ headers.

* The solution should not require any new headers.

* The in-tree headers should still just work. The solution should not make any
  files in the source tree dependant on generated files. They should work out of
  the box with no need for any extra configuration options or generated files.
  It should just work.

* The in-source headers should be used when building and testing libc++. Developers
  expect that changes they make to the source tree to take affect without the need
  to rebuild.

* The solution should not introduce a new header. Including a small configuration
  header will slow down builds and complicate the way the libc++ headers work.

* The source tree cannot be modified for any reason.


Solution
========

The simplest way to capture the configuration options in CMake is to generate
a C++ header containing macro definitions for the options. In libc++'s case we
create a header called "__config_site" and store it in the "build/include"
directory. The `__config_site` header is never installed or included by any
libc++ headers. Instead it is prepended to the "__config" header during installation.
The resulting __config header contains all of the captured configuration options
and the "__config_site" header is discarded.

Note that we only generate the new "__config" header for installation and not
before that. While building and testing we manually include "__config_site"
on the command line. This allows us to use the __config header in the source tree
directly with no need for modification.


Step by Step Explanation
========================

Each step in the build process handles the "__config_site" slightly differently.
The descriptions below explains what happens during each step.


Configuration Time
------------------

1. At CMake configuration time we generate a "__config_site" header from the
   "src/include/__config_site.in" file. The generated file contains a macro
   definition for each configuration option passed to CMake. This header will
   never be installed or directly included by another file.

Build Time
----------

1. Build libc++ using the headers in "src/include" and use "-include" to
   to manually include "build/include/__config_site" header.

Test Time
---------

1. Build the libc++ tests using the headers in "src/include" and use "-include"
   to manually include "build/include/__config_site" header.

Installation Time
-----------------

This is where the real magic happens. The trick is to prepend the "__config_site"
header to the "__config" header you plan to install.

1. First we copy the headers from "libcxx/include" to "build/include/c++/v1".

2. We then prepend the contents of "__config_site" to "build/include/c++/v1/__config".
   By doing this we remove the need for an extra configuration header.

3. Finally we install the headers in "build/include/c++/v1". The installed
   "__config" header contains all of the required configuration options at the
   top of the file.

Although steps #1 and #2 actually happen during build time their purpose is to
support the installation rule.

