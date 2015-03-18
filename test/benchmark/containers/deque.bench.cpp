#include "benchmark/benchmark_api.h"
#include "ContainerBenchmarks.hpp"

#include <deque>

BENCHMARK_TEMPLATE(container_range_constructor, std::deque<int>, ConstantGenerator<int, 42>)->Arg(8<<10);
BENCHMARK_TEMPLATE(container_copy_constructor, std::deque<int>, ConstantGenerator<int, 42>)->Arg(8<<10);
BENCHMARK_TEMPLATE(container_copy_assignment, std::deque<int>, ConstantGenerator<int, 42>)->Arg(8<<10);
BENCHMARK_TEMPLATE(container_iterate, std::deque<int>, ConstantGenerator<int, 42>)->Arg(8<<12);

BENCHMARK_MAIN()
