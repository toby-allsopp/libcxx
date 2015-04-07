#include "benchmark/benchmark_api.h"
#include "ContainerBenchmarks.hpp"
#include "Generators.hpp"

#include <unordered_set>

BENCHMARK_TEMPLATE(container_equal_range, std::unordered_set<int>, StrideGenerator<int>, StrideGenerator<int>)->Arg(1<<14);
BENCHMARK_TEMPLATE(container_equal_range, std::unordered_set<int>, StrideGenerator<int>, ConstantStrideGenerator<int, -1, 0, -1>)->Arg(1<<14);
BENCHMARK_TEMPLATE(container_equal_range, std::unordered_set<int>, StrideGenerator<int>, ConstantStrideGenerator<int, (1<<14)>)->Arg(1<<14);

BENCHMARK_MAIN()

