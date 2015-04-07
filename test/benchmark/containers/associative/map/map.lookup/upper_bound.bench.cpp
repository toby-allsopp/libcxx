#include "benchmark/benchmark_api.h"
#include "ContainerBenchmarks.hpp"
#include "Generators.hpp"

#include "../map_helper.hpp"

#include <map>

BENCHMARK_TEMPLATE(container_upper_bound, std::map<int, int>, StrideMapGen<int>, StrideGenerator<int>)->Arg(1<<14);
BENCHMARK_TEMPLATE(container_upper_bound, std::map<int, int>, StrideMapGen<int>, ConstantStrideGenerator<int, -1, 0, -1>)->Arg(1<<14);
BENCHMARK_TEMPLATE(container_upper_bound, std::map<int, int>, StrideMapGen<int>, ConstantStrideGenerator<int, (1<<14)>)->Arg(1<<14);

BENCHMARK_MAIN()

