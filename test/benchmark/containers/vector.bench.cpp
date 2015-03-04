#include "benchmark/minimal_benchmark.h"
#include "ContainerBenchmarks.hpp"

#include <set>

BENCHMARK_TEMPLATE(container_range_constructor, std::vector<int>, ConstantGenerator<int, 42>)->Arg(8<<10);
BENCHMARK_TEMPLATE(container_range_constructor, std::vector<int>, ConstantStrideGenerator<int, 0, 8>)->Range(64, 8<<10);
BENCHMARK_TEMPLATE(container_range_constructor, std::vector<int>, ConstantStrideGenerator<int, 0, 512>)->Range(64, 8<<10);
BENCHMARK_TEMPLATE(container_range_constructor, std::vector<int>, StrideGenerator<int>)->Range(64, 8<<10);

BENCHMARK_TEMPLATE(container_copy_constructor, std::vector<int>, StrideGenerator<int>)->Range(64, 8<<10);
BENCHMARK_TEMPLATE(container_copy_constructor, std::vector<int>, ConstantStrideGenerator<int, 0, 8>)->Range(8, 8<<10);
BENCHMARK_TEMPLATE(container_copy_constructor, std::vector<int>, ConstantStrideGenerator<int, 0, 512>)->Range(64, 8<<10);
BENCHMARK_TEMPLATE(container_copy_constructor, std::vector<int>, RandomGenerator<int>)->Range(64, 8<<10);

BENCHMARK_TEMPLATE(container_copy_assignment, std::vector<int>, ConstantStrideGenerator<int, 0, 8>)->Range(8, 8<<10);
BENCHMARK_TEMPLATE(container_copy_assignment, std::vector<int>, ConstantStrideGenerator<int, 0, 512>)->Range(64, 8<<10);
BENCHMARK_TEMPLATE(container_copy_assignment, std::vector<int>, RandomGenerator<int>)->Range(64, 8<<10);


BENCHMARK_MAIN()
