#include "benchmark/minimal_benchmark.h"
#include "ContainerBenchmarks.hpp"

#include <set>

BENCHMARK_TEMPLATE(container_range_constructor, std::vector<int>, ConstantGenerator<int, 42>)->Arg(8<<10);
BENCHMARK_TEMPLATE(container_copy_constructor, std::vector<int>, ConstantGenerator<int, 42>)->Arg(8<<10);
BENCHMARK_TEMPLATE(container_copy_assignment, std::vector<int>, ConstantGenerator<int, 42>)->Arg(8<<10);

BENCHMARK_MAIN()
