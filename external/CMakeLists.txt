include(ExternalProject)

if (LIBCXX_ENABLE_BENCHMARKS)

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