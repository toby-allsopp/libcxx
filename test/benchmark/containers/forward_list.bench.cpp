#include "benchmark/benchmark_api.h"
#include "ContainerBenchmarks.hpp"

#include <forward_list>

BENCHMARK_TEMPLATE(container_range_constructor, std::forward_list<int>, ConstantGenerator<int, 42>)->Arg(8<<10);
BENCHMARK_TEMPLATE(container_copy_constructor, std::forward_list<int>, ConstantGenerator<int, 42>)->Arg(8<<10);
BENCHMARK_TEMPLATE(container_copy_assignment, std::forward_list<int>, ConstantGenerator<int, 42>)->Arg(8<<10);

BENCHMARK_TEMPLATE(container_iterate, std::forward_list<int>, ConstantGenerator<int, 42>)->Arg(8<<12);

BENCHMARK_MAIN()
