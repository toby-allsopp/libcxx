#include "benchmark/benchmark_api.h"
#include "ContainerBenchmarks.hpp"

#include <vector>

BENCHMARK_TEMPLATE(container_copy_assignment, std::vector<int>, ConstantGenerator<int, 42>)->Arg(8<<10);

BENCHMARK_MAIN()
