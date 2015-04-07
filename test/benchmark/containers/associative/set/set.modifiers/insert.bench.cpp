#include "benchmark/benchmark_api.h"
#include "ContainerBenchmarks.hpp"
#include "Generators.hpp"

#include <set>

using IntSet = std::set<int>;
using Stride = StrideGenerator<int>;

BENCHMARK_TEMPLATE(container_insert_range, std::set<int>, StrideGenerator<int>, StrideGenerator<int>)->ArgPair(1<<14, 1<<8);
BENCHMARK_TEMPLATE(container_insert_value, std::set<int>, StrideGenerator<int>, StrideGenerator<int>)->ArgPair(1<<14, 1<<14);

BENCHMARK_MAIN()

