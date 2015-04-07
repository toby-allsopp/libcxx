#include "benchmark/benchmark_api.h"
#include "ContainerBenchmarks.hpp"
#include "Generators.hpp"

#include <set>

BENCHMARK_TEMPLATE(container_erase_front, std::set<int>, StrideGenerator<int>)->Arg(1<<14);
BENCHMARK_TEMPLATE(container_erase_back, std::set<int>, StrideGenerator<int>)->Arg(1<<14);

BENCHMARK_TEMPLATE(container_erase_front_key, std::set<int>, StrideGenerator<int>)->Arg(1<<14);
BENCHMARK_TEMPLATE(container_erase_back_key, std::set<int>, StrideGenerator<int>)->Arg(1<<14);

BENCHMARK_TEMPLATE(container_erase_range_by_size, std::set<int>, StrideGenerator<int>)->ArgPair(1<<14, 1<<4);

BENCHMARK_MAIN()

