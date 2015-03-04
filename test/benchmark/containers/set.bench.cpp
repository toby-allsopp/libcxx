#include "benchmark/minimal_benchmark.h"
#include "ContainerBenchmarks.hpp"

#include <set>

BENCHMARK_TEMPLATE(container_range_constructor, std::set<int>, ConstantGenerator<int, 42>)->Arg(8<<10);
BENCHMARK_TEMPLATE(container_range_constructor, std::set<int>, ConstantStrideGenerator<int, 0, 8>)->Range(64, 8<<10);
BENCHMARK_TEMPLATE(container_range_constructor, std::set<int>, ConstantStrideGenerator<int, 0, 512>)->Range(64, 8<<10);
BENCHMARK_TEMPLATE(container_range_constructor, std::set<int>, StrideGenerator<int>)->Range(64, 8<<10);

BENCHMARK_TEMPLATE(container_copy_constructor, std::set<int>, StrideGenerator<int>)->Range(64, 8<<10);
BENCHMARK_TEMPLATE(container_copy_constructor, std::set<int>, ConstantStrideGenerator<int, 0, 8>)->Range(8, 8<<10);
BENCHMARK_TEMPLATE(container_copy_constructor, std::set<int>, ConstantStrideGenerator<int, 0, 512>)->Range(64, 8<<10);
BENCHMARK_TEMPLATE(container_copy_constructor, std::set<int>, RandomGenerator<int>)->Range(64, 8<<10);

BENCHMARK_TEMPLATE(container_copy_assignment, std::set<int>, ConstantStrideGenerator<int, 0, 8>)->Range(8, 8<<10);
BENCHMARK_TEMPLATE(container_copy_assignment, std::set<int>, ConstantStrideGenerator<int, 0, 512>)->Range(64, 8<<10);
BENCHMARK_TEMPLATE(container_copy_assignment, std::set<int>, RandomGenerator<int>)->Range(64, 8<<10);


BENCHMARK_MAIN()
