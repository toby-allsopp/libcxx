#include "benchmark/benchmark_api.h"
#include "ContainerBenchmarks.hpp"

#include <unordered_set>

BENCHMARK_TEMPLATE(container_iterate, std::unordered_set<int>, StrideGenerator<int>)->Arg(8<<12);

BENCHMARK_MAIN()
