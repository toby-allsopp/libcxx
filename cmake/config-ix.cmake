include(CheckLibraryExists)
include(CheckCXXCompilerFlag)
include(CheckLibcxxAtomic)


# Architectures.

# List of all architectures we can target.
set(LIBCXX_SUPPORTED_ARCH)

# Try to compile a very simple source file to ensure we can target the given
# platform. We use the results of these tests to build only the various target
# runtime libraries supported by our current compilers cross-compiling
# abilities.
set(SIMPLE_SOURCE ${CMAKE_BINARY_DIR}${CMAKE_FILES_DIRECTORY}/simple.c)
file(WRITE ${SIMPLE_SOURCE} "#include <stdlib.h>\n#include <stdio.h>\nint main() { printf(\"hello, world\"); }\n")

# Add $arch as supported with no additional flags.
macro(add_default_target_arch arch)
  set(TARGET_${arch}_CFLAGS "")
  set(CAN_TARGET_${arch} 1)
  list(APPEND LIBCXX_SUPPORTED_ARCH ${arch})
endmacro()

# Detect whether the current target platform is 32-bit or 64-bit, and setup
# the correct commandline flags needed to attempt to target 32-bit and 64-bit.
if (NOT CMAKE_SIZEOF_VOID_P EQUAL 4 AND
    NOT CMAKE_SIZEOF_VOID_P EQUAL 8)
  message(FATAL_ERROR "Please use architecture with 4 or 8 byte pointers.")
endif()

test_targets()

# Check compiler flags

check_cxx_compiler_flag(/WX                     LIBCXX_HAS_WX_FLAG)
check_cxx_compiler_flag(/WX-                    LIBCXX_HAS_NO_WX_FLAG)
check_cxx_compiler_flag(/EHsc                   LIBCXX_HAS_EHSC_FLAG)
check_cxx_compiler_flag(/EHs-                   LIBCXX_HAS_NO_EHS_FLAG)
check_cxx_compiler_flag(/EHa-                   LIBCXX_HAS_NO_EHA_FLAG)
check_cxx_compiler_flag(/GR-                    LIBCXX_HAS_NO_GR_FLAG)


# Check libraries
check_library_exists(pthread pthread_create "" LIBCXX_HAS_PTHREAD_LIB)
check_library_exists(c fopen "" LIBCXX_HAS_C_LIB)
check_library_exists(m ccos "" LIBCXX_HAS_M_LIB)
check_library_exists(rt clock_gettime "" LIBCXX_HAS_RT_LIB)
check_library_exists(gcc_s __gcc_personality_v0 "" LIBCXX_HAS_GCC_S_LIB)
