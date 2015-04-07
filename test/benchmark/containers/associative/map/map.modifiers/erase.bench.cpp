#include "benchmark/benchmark_api.h"
#include "ContainerBenchmarks.hpp"
#include "Generators.hpp"

#include "../map_helper.hpp"

#include <map>

BENCHMARK_TEMPLATE(container_erase_front, std::map<int, int>, StrideMapGen<int>)->Arg(1<<14);
BENCHMARK_TEMPLATE(container_erase_back, std::map<int, int>, StrideMapGen<int>)->Arg(1<<14);

BENCHMARK_TEMPLATE(container_erase_front_key, std::map<int, int>, StrideMapGen<int>, StrideGenerator<int>)->Arg(1<<14);
BENCHMARK_TEMPLATE(container_erase_back_key, std::map<int, int>, StrideMapGen<int>, StrideGenerator<int>)->Arg(1<<14);

BENCHMARK_TEMPLATE(container_erase_range_by_size, std::map<int, int>, StrideMapGen<int>)->ArgPair(1<<14, 1<<4);

BENCHMARK_MAIN()

