#include "benchmark/benchmark_api.h"
#include "ContainerBenchmarks.hpp"

#include <set>


BENCHMARK_TEMPLATE(container_iterate, std::set<int>, StrideGenerator<int>)->Arg(8<<12);


BENCHMARK_MAIN()
