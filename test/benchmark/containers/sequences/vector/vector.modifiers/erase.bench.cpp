#include "benchmark/benchmark_api.h"
#include "ContainerBenchmarks.hpp"
#include "Generators.hpp"

#include <vector>

using IntVector = std::vector<int>;
using Stride = StrideGenerator<int>;

BENCHMARK_TEMPLATE(container_erase_front, IntVector, Stride)->Arg(1<<14);
BENCHMARK_TEMPLATE(container_erase_back, IntVector, Stride)->Arg(1<<14);

BENCHMARK_TEMPLATE(container_erase_range_by_size, IntVector, Stride)->ArgPair(1<<14, 1<<4);

BENCHMARK_TEMPLATE(container_insert_range_begin, IntVector, Stride, Stride)->ArgPair(1<<8, 1<<8);
BENCHMARK_TEMPLATE(container_insert_range_end, IntVector, Stride, Stride)->ArgPair(1<<8, 1<<8);

    
BENCHMARK_MAIN()

