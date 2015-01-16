include(ExternalProject)

if (LIBCXX_ENABLE_BENCHMARKS)
  ExternalProject_Add(
      BenchMark
      SVN_REPOSITORY https://github.com/efcs/benchmark/branches/libcxx-changes
      CMAKE_ARGS -DCMAKE_INSTALL_PREFIX:PATH=${CMAKE_CURRENT_BINARY_DIR}
                 -DCMAKE_BUILD_TYPE=RELEASE
                 -DBENCHMARK_ENABLE_TESTING:BOOL=OFF
  )
endif()