#include "benchmark/benchmark_api.h"
#include "ContainerBenchmarks.hpp"
#include "Generators.hpp"

#include <list>

using IntList = std::list<int>;
using Stride = StrideGenerator<int>;

BENCHMARK_TEMPLATE(container_erase_front, IntList, Stride)->Arg(1<<14);
BENCHMARK_TEMPLATE(container_erase_back, IntList, Stride)->Arg(1<<14);

BENCHMARK_TEMPLATE(container_erase_range_by_size, IntList, Stride)->ArgPair(1<<14, 1<<4);

BENCHMARK_TEMPLATE(container_insert_range_begin, IntList, Stride, Stride)->ArgPair(1<<8, 1<<8);
BENCHMARK_TEMPLATE(container_insert_range_end, IntList, Stride, Stride)->ArgPair(1<<8, 1<<8);

    
BENCHMARK_MAIN()

