# The CompilerRT build system requires CMake version 2.8.8 or higher in order
# to use its support for building convenience "libraries" as a collection of
# .o files. This is particularly useful in producing larger, more complex
# runtime libraries.

include(CheckIncludeFile)
check_include_file(unwind.h HAVE_UNWIND_H)

# Top level target used to build all compiler-rt libraries.
add_custom_target(compiler-rt ALL)
set_target_properties(compiler-rt PROPERTIES FOLDER "Compiler-RT Misc")

# Setting these variables from an LLVM build is sufficient that compiler-rt can
# construct the output paths, so it can behave as if it were in-tree here.
if (LLVM_LIBRARY_OUTPUT_INTDIR AND LLVM_RUNTIME_OUTPUT_INTDIR AND PACKAGE_VERSION)
  set(LLVM_TREE_AVAILABLE On)
endif()

if (LLVM_TREE_AVAILABLE)
  # Compute the Clang version from the LLVM version.
  # FIXME: We should be able to reuse CLANG_VERSION variable calculated
  #        in Clang cmake files, instead of copying the rules here.
  string(REGEX MATCH "[0-9]+\\.[0-9]+(\\.[0-9]+)?" CLANG_VERSION
         ${PACKAGE_VERSION})
  # Setup the paths where compiler-rt runtimes and headers should be stored.
  set(LIBCXX_MULTILIB_OUTPUT_DIR ${LLVM_LIBRARY_OUTPUT_INTDIR}/clang/${CLANG_VERSION})
  set(LIBCXX_MULTILIB_INSTALL_PATH lib${LLVM_LIBDIR_SUFFIX}/clang/${CLANG_VERSION})
else()
    # Take output dir and install path from the user.
  set(LIBCXX_MULTILIB_OUTPUT_DIR ${CMAKE_CURRENT_BINARY_DIR} CACHE PATH
    "Path where built compiler-rt libraries should be stored.")
  set(LIBCXX_MULTILIB_INSTALL_PATH ${CMAKE_INSTALL_PREFIX} CACHE PATH
    "Path where built compiler-rt libraries should be installed.")
endif()

string(TOLOWER ${CMAKE_SYSTEM_NAME} LIBCXX_OS_DIR)
set(LIBCXX_MULTILIB_LIBRARY_OUTPUT_DIR
  ${LIBCXX_MULTILIB_OUTPUT_DIR}/lib/${LIBCXX_OS_DIR})
set(LIBCXX_MULTILIB_LIBRARY_INSTALL_DIR
  ${LIBCXX_MULTILIB_INSTALL_PATH}/lib/${LIBCXX_OS_DIR})

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

macro(test_targets)

  if(NOT APPLE) # Supported archs for Apple platforms are generated later
    if("${LIBCXX_DEFAULT_TARGET_ARCH}" MATCHES "i[2-6]86|x86|amd64")
      if(NOT MSVC)
        test_target_arch(x86_64 "" "-m64")
        # FIXME: We build runtimes for both i686 and i386, as "clang -m32" may
        # target different variant than "$CMAKE_C_COMPILER -m32". This part should
        # be gone after we resolve PR14109.
        test_target_arch(i686 __i686__ "-m32")
        test_target_arch(i386 __i386__ "-m32")
      else()
        if (CMAKE_SIZEOF_VOID_P EQUAL 4)
          test_target_arch(i386 "" "")
        else()
          test_target_arch(x86_64 "" "")
        endif()
      endif()
    elseif("${LIBCXX_DEFAULT_TARGET_ARCH}" MATCHES "powerpc")
      TEST_BIG_ENDIAN(HOST_IS_BIG_ENDIAN)
      if(HOST_IS_BIG_ENDIAN)
        test_target_arch(powerpc64 "" "-m64")
      else()
        test_target_arch(powerpc64le "" "-m64")
      endif()
    elseif("${LIBCXX_DEFAULT_TARGET_ARCH}" MATCHES "s390x")
      test_target_arch(s390x "" "")
    elseif("${LIBCXX_DEFAULT_TARGET_ARCH}" MATCHES "mipsel|mips64el")
      # Gcc doesn't accept -m32/-m64 so we do the next best thing and use
      # -mips32r2/-mips64r2. We don't use -mips1/-mips3 because we want to match
      # clang's default CPU's. In the 64-bit case, we must also specify the ABI
      # since the default ABI differs between gcc and clang.
      # FIXME: Ideally, we would build the N32 library too.
      test_target_arch(mipsel "" "-mips32r2" "--target=mipsel-linux-gnu")
      test_target_arch(mips64el "" "-mips64r2" "--target=mips64el-linux-gnu" "-mabi=64")
    elseif("${LIBCXX_DEFAULT_TARGET_ARCH}" MATCHES "mips")
      test_target_arch(mips "" "-mips32r2" "--target=mips-linux-gnu")
      test_target_arch(mips64 "" "-mips64r2" "--target=mips64-linux-gnu" "-mabi=64")
    elseif("${LIBCXX_DEFAULT_TARGET_ARCH}" MATCHES "arm")
      if(WIN32)
        test_target_arch(arm "" "" "")
      else()
        test_target_arch(arm "" "-march=armv7-a" "-mfloat-abi=soft")
        test_target_arch(armhf "" "-march=armv7-a" "-mfloat-abi=hard")
      endif()
    elseif("${LIBCXX_DEFAULT_TARGET_ARCH}" MATCHES "aarch32")
      test_target_arch(aarch32 "" "-march=armv8-a")
    elseif("${LIBCXX_DEFAULT_TARGET_ARCH}" MATCHES "aarch64")
      test_target_arch(aarch64 "" "-march=armv8-a")
    elseif("${LIBCXX_DEFAULT_TARGET_ARCH}" MATCHES "wasm32")
      test_target_arch(wasm32 "" "--target=wasm32-unknown-unknown")
    elseif("${LIBCXX_DEFAULT_TARGET_ARCH}" MATCHES "wasm64")
      test_target_arch(wasm64 "" "--target=wasm64-unknown-unknown")
    endif()
    set(LIBCXX_OS_SUFFIX "")
  endif()
endmacro()
