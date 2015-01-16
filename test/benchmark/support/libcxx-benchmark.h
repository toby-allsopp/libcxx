#ifndef LIBCXX_BENCHMARK_H
#define LIBCXX_BENCHMARK_H

#include "benchmark/minimal_benchmark.h"

#define BENCHMARK_MAIN()               \
int main(int argc, const char** argv)  \
{                                      \
  benchmark::Initialize(&argc, argv);  \
  benchmark::RunSpecifiedBenchmarks(); \
}

#endif // LIBCXX_BENCHMARK_H
