#include "benchmark/benchmark_api.h"
#include "ContainerBenchmarks.hpp"
#include "Generators.hpp"

#include <list>

using IntList = std::list<int>;
using Stride = StrideGenerator<int>;

BENCHMARK_TEMPLATE(container_pop_back, IntList, Stride)->Arg(1<<8);

BENCHMARK_MAIN()

