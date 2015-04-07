#include "benchmark/benchmark_api.h"
#include "ContainerBenchmarks.hpp"
#include "../map_helper.hpp"

#include <map>

BENCHMARK_TEMPLATE(container_range_constructor, std::map<int, int>, ConstantMapGen<int, 42>)->Arg(8<<12);
BENCHMARK_TEMPLATE(container_range_constructor, std::map<int, int>, StrideMapGen<int>)->Arg(8<<12);

BENCHMARK_TEMPLATE(container_range_constructor, std::map<int, int>, ConstantStrideMapGen<int, 0, 512>)->Arg(64);
BENCHMARK_TEMPLATE(container_range_constructor, std::map<int, int>, ConstantStrideMapGen<int, 0, 512>)->Arg(512);
BENCHMARK_TEMPLATE(container_range_constructor, std::map<int, int>, ConstantStrideMapGen<int, 0, 512>)->Arg(8<<12);

BENCHMARK_MAIN()
