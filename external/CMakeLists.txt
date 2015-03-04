include(ExternalProject)

if (LIBCXX_ENABLE_BENCHMARKS)

set(LINKER_FLAGS)
if (LIBCXX_HAS_STDLIB_LIBCXX_FLAG)
  list(APPEND LINKER_FLAGS "-stdlib=libc++")
else()
  list(APPEND LINKER_FLAGS "-lc++")
endif()
list(APPEND LINKER_FLAGS "-L${LIBCXX_LIBRARY_DIR}")
list(APPEND LINKER_FLAGS "-Wl,-rpath,${LIBCXX_LIBRARY_DIR}")
if (DEFINED LIBCXX_CXX_ABI_LIBRARY_PATH)
    list(APPEND LINKER_FLAGS "-L${LIBCXX_CXX_ABI_LIBRARY_PATH}")
    list(APPEND LINKER_FLAGS "-Wl,-rpath,${LIBCXX_CXX_ABI_LIBRARY_PATH}")
endif()
if (${LIBCXX_CXX_ABI_LIBRARY} STREQUAL "c++abi"
    OR ${LIBCXX_CXX_ABI_LIBRARY} STREQUAL "cxxabi")
    list(APPEND LINKER_FLAGS "-lc++abi")
endif()
if (${LIBCXX_CXX_ABI_LIBRARY} STREQUAL "cxxabi")
    set(ABI_DEPENDS "cxxabi")
else()
    set(ABI_DEPENDS "")
endif()
string(REPLACE ";" " " LINKER_FLAGS "${LINKER_FLAGS}")

configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/Toolchain.cmake.in
    ${CMAKE_CURRENT_BINARY_DIR}/Toolchain.cmake
    @ONLY)

  ExternalProject_Add(
      Benchmark
      SVN_REPOSITORY https://github.com/google/benchmark/branches/api-merge
      DEPENDS cxx ${ABI_DEPENDS}
      CMAKE_ARGS -DCMAKE_INSTALL_PREFIX:PATH=${CMAKE_CURRENT_BINARY_DIR}
                 -DCMAKE_TOOLCHAIN_FILE:PATH=${CMAKE_CURRENT_BINARY_DIR}/Toolchain.cmake
                 -DCMAKE_BUILD_TYPE=RELEASE
                 -DBENCHMARK_ENABLE_TESTING:BOOL=OFF
                 -DBENCHMARK_ENABLE_SHARED:BOOL=ON
  )
endif()