#include "benchmark/benchmark_api.h"
#include "ContainerBenchmarks.hpp"
#include "Generators.hpp"

#include "../map_helper.hpp"

#include <map>

BENCHMARK_TEMPLATE(container_insert_range, std::map<int, int>, StrideMapGen<int>, StrideMapGen<int>)->ArgPair(1<<14, 1<<8);
BENCHMARK_TEMPLATE(container_insert_value, std::map<int, int>, StrideMapGen<int>, StrideMapGen<int>)->ArgPair(1<<14, 1<<14);

BENCHMARK_MAIN()

