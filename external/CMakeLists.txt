
if (LIBCXX_ENABLE_BENCHMARKS)
  configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/Toolchain.cmake.in
    ${CMAKE_CURRENT_BINARY_DIR}/Toolchain.cmake
    @ONLY)

  include(ExternalProject)

  ExternalProject_Add(
    Benchmark
    SVN_REPOSITORY https://github.com/google/benchmark/branches/api-merge
    CMAKE_ARGS -DCMAKE_INSTALL_PREFIX:PATH=${CMAKE_CURRENT_BINARY_DIR}
               -DCMAKE_TOOLCHAIN_FILE:PATH=${CMAKE_CURRENT_BINARY_DIR}/Toolchain.cmake
               -DCMAKE_BUILD_TYPE=RELEASE
               -DBENCHMARK_ENABLE_TESTING:BOOL=OFF
               -DBENCHMARK_ENABLE_SHARED:BOOL=ON
  )
endif()