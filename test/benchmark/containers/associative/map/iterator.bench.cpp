#include "benchmark/benchmark_api.h"
#include "ContainerBenchmarks.hpp"

#include "map_helper.hpp"

#include <map>

BENCHMARK_TEMPLATE(container_iterate, std::map<int, int>, StrideMapGen<int>)->Arg(8<<12);

BENCHMARK_MAIN()
