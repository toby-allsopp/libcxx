#include "benchmark/benchmark_api.h"
#include "ContainerBenchmarks.hpp"
#include "Generators.hpp"

#include <unordered_set>

using IntSet = std::unordered_set<int>;
using Stride = StrideGenerator<int>;

BENCHMARK_TEMPLATE(container_insert_range, IntSet, Stride, Stride)->ArgPair(1<<14, 1<<8);
BENCHMARK_TEMPLATE(container_insert_value, IntSet, Stride, Stride)->ArgPair(1<<14, 1<<14);

BENCHMARK_MAIN()

