#include "benchmark/benchmark_api.h"
#include "ContainerBenchmarks.hpp"

#include <list>

BENCHMARK_TEMPLATE(container_range_constructor, std::list<int>, ConstantGenerator<int, 42>)->Arg(8<<10);

BENCHMARK_MAIN()
