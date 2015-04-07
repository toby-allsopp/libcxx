#include "benchmark/benchmark_api.h"
#include "ContainerBenchmarks.hpp"
#include "Generators.hpp"

#include <unordered_set>

using IntSet = std::unordered_set<int>;
using Stride = StrideGenerator<int>;

BENCHMARK_TEMPLATE(container_erase_front, IntSet, Stride)->Arg(1<<14);

BENCHMARK_TEMPLATE(container_erase_front_key, IntSet, Stride)->Arg(1<<14);
BENCHMARK_TEMPLATE(container_erase_back_key, IntSet, Stride)->Arg(1<<14);

BENCHMARK_MAIN()