#include "benchmark/benchmark_api.h"
#include "ContainerBenchmarks.hpp"
#include "Generators.hpp"

#include <set>

using IntSet = std::set<int>;
using Stride = StrideGenerator<int>;

BENCHMARK_TEMPLATE(container_erase_front, IntSet, Stride)->Arg(1<<14);
BENCHMARK_TEMPLATE(container_erase_back, IntSet, Stride)->Arg(1<<14);

BENCHMARK_TEMPLATE(container_erase_front_key, IntSet, Stride)->Arg(1<<14);
BENCHMARK_TEMPLATE(container_erase_back_key, IntSet, Stride)->Arg(1<<14);

BENCHMARK_TEMPLATE(container_erase_range_by_size, IntSet, Stride)->ArgPair(1<<14, 1<<4);

BENCHMARK_MAIN()

