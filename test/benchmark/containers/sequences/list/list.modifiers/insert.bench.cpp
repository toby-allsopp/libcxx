#include "benchmark/benchmark_api.h"
#include "ContainerBenchmarks.hpp"
#include "Generators.hpp"

#include <list>

using IntList = std::list<int>;
using Stride = StrideGenerator<int>;

BENCHMARK_TEMPLATE(container_insert_range_begin, IntList, Stride, Stride)->ArgPair(1<<8, 1<<8);
BENCHMARK_TEMPLATE(container_insert_range_end, IntList, Stride, Stride)->ArgPair(1<<8, 1<<8);

BENCHMARK_MAIN()

