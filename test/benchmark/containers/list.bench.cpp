#include "benchmark/minimal_benchmark.h"
#include "ContainerBenchmarks.hpp"

#include <list>

BENCHMARK_TEMPLATE(container_range_constructor, std::list<int>, ConstantGenerator<int, 42>)->Arg(8<<10);
BENCHMARK_TEMPLATE(container_copy_constructor, std::list<int>, ConstantGenerator<int, 42>)->Arg(8<<10);
BENCHMARK_TEMPLATE(container_copy_assignment, std::list<int>, ConstantGenerator<int, 42>)->Arg(8<<10);

BENCHMARK_TEMPLATE(container_iterate, std::list<int>, ConstantGenerator<int, 42>)->Arg(8<<12);

BENCHMARK_MAIN()
