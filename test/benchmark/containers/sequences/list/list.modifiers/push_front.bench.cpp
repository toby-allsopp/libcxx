#include "benchmark/benchmark_api.h"
#include "ContainerBenchmarks.hpp"
#include "Generators.hpp"

#include <list>

using IntList = std::list<int>;
using Stride = StrideGenerator<int>;

BENCHMARK_TEMPLATE(container_push_front, IntList, Stride);

BENCHMARK_MAIN()

