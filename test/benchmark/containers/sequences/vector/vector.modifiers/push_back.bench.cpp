#include "benchmark/benchmark_api.h"
#include "ContainerBenchmarks.hpp"
#include "Generators.hpp"

#include <vector>

using IntVector = std::vector<int>;
using Stride = StrideGenerator<int>;

BENCHMARK_TEMPLATE(container_push_back, IntVector, Stride);

BENCHMARK_MAIN()

