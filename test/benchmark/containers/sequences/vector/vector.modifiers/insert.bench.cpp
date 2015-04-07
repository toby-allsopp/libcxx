#include "benchmark/benchmark_api.h"
#include "ContainerBenchmarks.hpp"
#include "Generators.hpp"

#include <vector>

using IntVector = std::vector<int>;
using Stride = StrideGenerator<int>;

BENCHMARK_TEMPLATE(container_insert_range_begin, IntVector, Stride, Stride)->ArgPair(1<<8, 1<<8);
BENCHMARK_TEMPLATE(container_insert_range_end, IntVector, Stride, Stride)->ArgPair(1<<8, 1<<8);

BENCHMARK_MAIN()

