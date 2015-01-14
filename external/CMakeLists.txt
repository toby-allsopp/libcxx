include(ExternalProject)

if (LIBCXX_ENABLE_BENCHMARKS)
  ExternalProject_Add(
      BenchMark
      SVN_REPOSITORY http://github.com/google/benchmark/trunk
      CMAKE_ARGS -DCMAKE_INSTALL_PREFIX:PATH=${CMAKE_CURRENT_BINARY_DIR}
  )
endif()