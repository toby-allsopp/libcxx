
# Architectures.
# List of all architectures we can target.
set(LIBCXX_SUPPORTED_ARCH)

# Try to compile a very simple source file to ensure we can target the given
# platform. We use the results of these tests to build only the various target
# runtime libraries supported by our current compilers cross-compiling
# abilities.
set(SIMPLE_SOURCE ${LIBCXX_BINARY_DIR}${CMAKE_FILES_DIRECTORY}/simple.c)
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

# Test each possible supported arch
test_targets()

# Returns a list of architecture specific target cflags in @out_var list.
function(get_target_flags_for_arch arch out_var)
  list(FIND LIBCXX_SUPPORTED_ARCH ${arch} ARCH_INDEX)
  if(ARCH_INDEX EQUAL -1)
    message(FATAL_ERROR "Unsupported architecture: ${arch}")
  else()
    if (NOT APPLE)
      set(${out_var} ${TARGET_${arch}_CFLAGS} PARENT_SCOPE)
    else()
      # This is only called in constructing cflags for tests executing on the
      # host. This will need to all be cleaned up to support building tests
      # for cross-targeted hardware (i.e. iOS).
      set(${out_var} -arch ${arch} PARENT_SCOPE)
    endif()
  endif()
endfunction()

set(ARM64 aarch64)
set(ARM32 arm armhf)
set(X86 i386 i686)
set(X86_64 x86_64)
set(MIPS32 mips mipsel)
set(MIPS64 mips64 mips64el)
set(PPC64 powerpc64 powerpc64le)
set(S390X s390x)
set(WASM32 wasm32)
set(WASM64 wasm64)

if(APPLE)
  set(ARM64 arm64)
  set(ARM32 armv7 armv7s armv7k)
  set(X86_64 x86_64 x86_64h)
endif()

set(ALL_SANITIZER_COMMON_SUPPORTED_ARCH ${X86} ${X86_64} ${PPC64}
    ${ARM32} ${ARM64} ${MIPS32} ${MIPS64} ${S390X})
set(ALL_ASAN_SUPPORTED_ARCH ${X86} ${X86_64} ${ARM32} ${ARM64}
    ${MIPS32} ${MIPS64} ${PPC64})
set(ALL_DFSAN_SUPPORTED_ARCH ${X86_64} ${MIPS64} ${ARM64})
set(ALL_LSAN_SUPPORTED_ARCH ${X86_64} ${MIPS64} ${ARM64})
set(ALL_MSAN_SUPPORTED_ARCH ${X86_64} ${MIPS64} ${ARM64} ${PPC64})
set(ALL_PROFILE_SUPPORTED_ARCH ${X86} ${X86_64} ${ARM32} ${ARM64} ${PPC64}
    ${MIPS32} ${MIPS64})
set(ALL_TSAN_SUPPORTED_ARCH ${X86_64} ${MIPS64} ${ARM64} ${PPC64})
set(ALL_UBSAN_SUPPORTED_ARCH ${X86} ${X86_64} ${ARM32} ${ARM64}
    ${MIPS32} ${MIPS64} ${PPC64} ${S390X})
set(ALL_SAFESTACK_SUPPORTED_ARCH ${X86} ${X86_64} ${ARM64} ${MIPS32} ${MIPS64})
set(ALL_CFI_SUPPORTED_ARCH ${X86} ${X86_64} ${MIPS64})
set(ALL_ESAN_SUPPORTED_ARCH ${X86_64})
set(ALL_SCUDO_SUPPORTED_ARCH ${X86_64})
set(ALL_XRAY_SUPPORTED_ARCH ${X86_64})

if (NOT APPLE)
# Architectures supported by compiler-rt libraries.
  filter_available_targets(SANITIZER_COMMON_SUPPORTED_ARCH
    ${ALL_SANITIZER_COMMON_SUPPORTED_ARCH})
  # LSan and UBSan common files should be available on all architectures
  # supported by other sanitizers (even if they build into dummy object files).
  filter_available_targets(LSAN_COMMON_SUPPORTED_ARCH
    ${SANITIZER_COMMON_SUPPORTED_ARCH})
  filter_available_targets(UBSAN_COMMON_SUPPORTED_ARCH
    ${SANITIZER_COMMON_SUPPORTED_ARCH})
  filter_available_targets(ASAN_SUPPORTED_ARCH ${ALL_ASAN_SUPPORTED_ARCH})
  filter_available_targets(DFSAN_SUPPORTED_ARCH ${ALL_DFSAN_SUPPORTED_ARCH})
  filter_available_targets(LSAN_SUPPORTED_ARCH ${ALL_LSAN_SUPPORTED_ARCH})
  filter_available_targets(MSAN_SUPPORTED_ARCH ${ALL_MSAN_SUPPORTED_ARCH})
  filter_available_targets(PROFILE_SUPPORTED_ARCH ${ALL_PROFILE_SUPPORTED_ARCH})
  filter_available_targets(TSAN_SUPPORTED_ARCH ${ALL_TSAN_SUPPORTED_ARCH})
  filter_available_targets(UBSAN_SUPPORTED_ARCH ${ALL_UBSAN_SUPPORTED_ARCH})
  filter_available_targets(SAFESTACK_SUPPORTED_ARCH
    ${ALL_SAFESTACK_SUPPORTED_ARCH})
  filter_available_targets(CFI_SUPPORTED_ARCH ${ALL_CFI_SUPPORTED_ARCH})
  filter_available_targets(ESAN_SUPPORTED_ARCH ${ALL_ESAN_SUPPORTED_ARCH})
  filter_available_targets(SCUDO_SUPPORTED_ARCH
    ${ALL_SCUDO_SUPPORTED_ARCH})
  filter_available_targets(XRAY_SUPPORTED_ARCH ${ALL_XRAY_SUPPORTED_ARCH})
endif()

message(STATUS "Libcxx supported architectures: ${LIBCXX_SUPPORTED_ARCH}")

if(ANDROID)
  set(OS_NAME "Android")
else()
  set(OS_NAME "${CMAKE_SYSTEM_NAME}")
endif()

if (SANITIZER_COMMON_SUPPORTED_ARCH AND NOT LLVM_USE_SANITIZER AND
    (OS_NAME MATCHES "Android|Darwin|Linux|FreeBSD" OR
    (OS_NAME MATCHES "Windows" AND MSVC)))
  set(LIBCXX_HAS_SANITIZER_COMMON TRUE)
else()
  set(LIBCXX_HAS_SANITIZER_COMMON FALSE)
endif()

if (LIBCXX_HAS_SANITIZER_COMMON AND ASAN_SUPPORTED_ARCH)
  set(LIBCXX_HAS_ASAN TRUE)
else()
  set(LIBCXX_HAS_ASAN FALSE)
endif()
# TODO: Add builtins support.

if (LIBCXX_HAS_SANITIZER_COMMON AND DFSAN_SUPPORTED_ARCH AND
    OS_NAME MATCHES "Linux")
  set(LIBCXX_HAS_DFSAN TRUE)
else()
  set(LIBCXX_HAS_DFSAN FALSE)
endif()

if (LIBCXX_HAS_SANITIZER_COMMON AND LSAN_SUPPORTED_ARCH AND
    OS_NAME MATCHES "Linux|FreeBSD")
  set(LIBCXX_HAS_LSAN TRUE)
else()
  set(LIBCXX_HAS_LSAN FALSE)
endif()

if (LIBCXX_HAS_SANITIZER_COMMON AND MSAN_SUPPORTED_ARCH AND
    OS_NAME MATCHES "Linux")
  set(LIBCXX_HAS_MSAN TRUE)
else()
  set(LIBCXX_HAS_MSAN FALSE)
endif()

if (PROFILE_SUPPORTED_ARCH AND
    OS_NAME MATCHES "Darwin|Linux|FreeBSD|Windows")
  set(LIBCXX_HAS_PROFILE TRUE)
else()
  set(LIBCXX_HAS_PROFILE FALSE)
endif()

if (LIBCXX_HAS_SANITIZER_COMMON AND TSAN_SUPPORTED_ARCH AND
    OS_NAME MATCHES "Darwin|Linux|FreeBSD")
  set(LIBCXX_HAS_TSAN TRUE)
else()
  set(LIBCXX_HAS_TSAN FALSE)
endif()

if (LIBCXX_HAS_SANITIZER_COMMON AND UBSAN_SUPPORTED_ARCH AND
    OS_NAME MATCHES "Darwin|Linux|FreeBSD|Windows")
  set(LIBCXX_HAS_UBSAN TRUE)
else()
  set(LIBCXX_HAS_UBSAN FALSE)
endif()
