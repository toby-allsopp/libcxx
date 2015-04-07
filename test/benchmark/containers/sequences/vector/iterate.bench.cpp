#include "benchmark/benchmark_api.h"
#include "ContainerBenchmarks.hpp"

#include <vector>

BENCHMARK_TEMPLATE(container_iterate, std::vector<int>, ConstantGenerator<int, 42>)->Arg(8<<12);

BENCHMARK_MAIN()
