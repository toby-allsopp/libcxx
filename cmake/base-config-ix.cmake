# The CompilerRT build system requires CMake version 2.8.8 or higher in order
# to use its support for building convenience "libraries" as a collection of
# .o files. This is particularly useful in producing larger, more complex
# runtime libraries.

include(CheckIncludeFile)
check_include_file(unwind.h HAVE_UNWIND_H)

# Top level target used to build all compiler-rt libraries.
add_custom_target(libcxx ALL)
set_target_properties(libcxx PROPERTIES FOLDER "Libc++ Misc")

# Require out of source build.
include(MacroEnsureOutOfSourceBuild)
MACRO_ENSURE_OUT_OF_SOURCE_BUILD(
 "${PROJECT_NAME} requires an out of source build. Please create a separate
 build directory and run 'cmake /path/to/${PROJECT_NAME} [options]' there."
 )

if (CMAKE_SOURCE_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR OR LIBCXX_STANDALONE_BUILD)
  include(HandleOutOfTreeLLVM)
  handle_out_of_tree_llvm()
endif()

# Setting these variables from an LLVM build is sufficient that compiler-rt can
# construct the output paths, so it can behave as if it were in-tree here.
if (LLVM_LIBRARY_OUTPUT_INTDIR AND LLVM_RUNTIME_OUTPUT_INTDIR AND PACKAGE_VERSION)
  set(LLVM_TREE_AVAILABLE ON)
endif()

if (LLVM_TREE_AVAILABLE)
  # Compute the Clang version from the LLVM version.
  # FIXME: We should be able to reuse CLANG_VERSION variable calculated
  #        in Clang cmake files, instead of copying the rules here.
  string(REGEX MATCH "[0-9]+\\.[0-9]+(\\.[0-9]+)?" CLANG_VERSION
         ${PACKAGE_VERSION})
  # Setup the paths where compiler-rt runtimes and headers should be stored.
  set(LIBCXX_OUTPUT_DIR ${LLVM_LIBRARY_OUTPUT_INTDIR}/clang/${CLANG_VERSION})
  set(LIBCXX_INSTALL_PATH lib${LLVM_LIBDIR_SUFFIX}/clang/${CLANG_VERSION})
else()
    # Take output dir and install path from the user.
  set(LIBCXX_OUTPUT_DIR ${CMAKE_CURRENT_BINARY_DIR} CACHE PATH
    "Path where built libc++ libraries should be stored.")
  set(LIBCXX_INSTALL_PATH ${CMAKE_INSTALL_PREFIX} CACHE PATH
    "Path where built libc++ libraries should be installed.")
endif()

string(TOLOWER ${CMAKE_SYSTEM_NAME} LIBCXX_OS_DIR)
set(LIBCXX_LIBRARY_OUTPUT_DIR
  ${LIBCXX_OUTPUT_DIR}/lib/${LIBCXX_OS_DIR})
set(LIBCXX_LIBRARY_INSTALL_DIR
  ${LIBCXX_INSTALL_PATH}/lib/${LIBCXX_OS_DIR})

if(APPLE)
  # On Darwin if /usr/include doesn't exist, the user probably has Xcode but not
  # the command line tools. If this is the case, we need to find the OS X
  # sysroot to pass to clang.
  if(NOT EXISTS /usr/include)
    execute_process(COMMAND xcodebuild -version -sdk macosx Path
       OUTPUT_VARIABLE OSX_SYSROOT
       ERROR_QUIET
       OUTPUT_STRIP_TRAILING_WHITESPACE)
    set(OSX_SYSROOT_FLAG "-isysroot${OSX_SYSROOT}")
  endif()

endif()
