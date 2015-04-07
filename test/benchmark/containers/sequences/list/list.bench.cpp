#include "benchmark/benchmark_api.h"
#include "ContainerBenchmarks.hpp"

#include <list>

BENCHMARK_TEMPLATE(container_iterate, std::list<int>, ConstantGenerator<int, 42>)->Arg(8<<12);

BENCHMARK_MAIN()
