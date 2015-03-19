
if (LIBCXX_ENABLE_BENCHMARKS)
  configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/Toolchain.cmake.in
    ${CMAKE_CURRENT_BINARY_DIR}/Toolchain.cmake
    @ONLY)

  include(ExternalProject)

  list(APPEND BENCHMARK_CMAKE_ARGS
        -DCMAKE_INSTALL_PREFIX:PATH=${CMAKE_CURRENT_BINARY_DIR}
        -DCMAKE_TOOLCHAIN_FILE:PATH=${CMAKE_CURRENT_BINARY_DIR}/Toolchain.cmake
        -DCMAKE_BUILD_TYPE=RELEASE
        -DBENCHMARK_ENABLE_TESTING:BOOL=OFF
        -DBENCHMARK_ENABLE_SHARED:BOOL=ON
  )

  if (LIBCXX_BENCHMARK_SOURCE_PATH)
    ExternalProject_Add(
      Benchmark
      PREFIX ""
      SOURCE_DIR ${LIBCXX_BENCHMARK_SOURCE_PATH}
      CMAKE_ARGS ${BENCHMARK_CMAKE_ARGS}
    )
  else()
    # TODO(ericwf) Fix this. There is no way to pull the trunk directly from
    # github.
    set(SRC_DIR "${CMAKE_CURRENT_BINARY_DIR}/Benchmark-Source")
    ExternalProject_Add(
      Benchmark
      SOURCE_DIR ${SRC_DIR}
      SVN_REPOSITORY https://github.com/google/benchmark
      PATCH_COMMAND ${CMAKE_COMMAND} -E copy_directory ${SRC_DIR}/trunk/ ${SRC_DIR}/
      CMAKE_ARGS ${BENCHMARK_CMAKE_ARGS}
    )
  endif()

endif()
