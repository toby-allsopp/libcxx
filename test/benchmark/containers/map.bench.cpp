#include "benchmark/minimal_benchmark.h"
#include "ContainerBenchmarks.hpp"

#include <map>

using ValueGen = ConstantGenerator<int, 42>;

template <class ValueType, ValueType value>
using ConstantMapGen = KeyValueGenerator<ConstantGenerator<ValueType, value>, ValueGen>;

template <class ValueType>
using StrideMapGen = KeyValueGenerator<StrideGenerator<ValueType>, ValueGen>;

template <class ValueType, ValueType Start, ValueType End>
using ConstantStrideMapGen = KeyValueGenerator<ConstantStrideGenerator<ValueType, Start, End>, ValueGen>;

BENCHMARK_TEMPLATE(container_range_constructor, std::map<int, int>, ConstantMapGen<int, 42>)->Arg(8<<12);
BENCHMARK_TEMPLATE(container_range_constructor, std::map<int, int>, StrideMapGen<int>)->Arg(8<<12);

BENCHMARK_TEMPLATE(container_range_constructor, std::map<int, int>, ConstantStrideMapGen<int, 0, 512>)->Arg(64);
BENCHMARK_TEMPLATE(container_range_constructor, std::map<int, int>, ConstantStrideMapGen<int, 0, 512>)->Arg(512);
BENCHMARK_TEMPLATE(container_range_constructor, std::map<int, int>, ConstantStrideMapGen<int, 0, 512>)->Arg(8<<12);

BENCHMARK_TEMPLATE(container_copy_constructor, std::map<int, int>, ConstantMapGen<int, 42>)->Arg(8<<12);
BENCHMARK_TEMPLATE(container_copy_constructor, std::map<int, int>, StrideMapGen<int>)->Arg(8<<12);
BENCHMARK_TEMPLATE(container_copy_constructor, std::map<int, int>, ConstantStrideMapGen<int, 0, 512>)->Arg(8<<12);

BENCHMARK_TEMPLATE(container_copy_assignment, std::map<int, int>, ConstantMapGen<int, 42>)->Arg(8<<12);
BENCHMARK_TEMPLATE(container_copy_assignment, std::map<int, int>, StrideMapGen<int>)->Arg(8<<12);
BENCHMARK_TEMPLATE(container_copy_assignment, std::map<int, int>, ConstantStrideMapGen<int, 0, 512>)->Arg(8<<12);

BENCHMARK_TEMPLATE(container_equal, std::map<int, int>, StrideMapGen<int>, StrideMapGen<int>)->ArgPair(8<<12, 8<<12);
BENCHMARK_TEMPLATE(container_equal, std::map<int, int>, StrideMapGen<int>, StrideMapGen<int>)->ArgPair(8<<12, (8<<12) + 1);

BENCHMARK_TEMPLATE(container_not_equal, std::map<int, int>, StrideMapGen<int>, StrideMapGen<int>)->ArgPair(8<<12, 8<<12);
BENCHMARK_TEMPLATE(container_not_equal, std::map<int, int>, StrideMapGen<int>, StrideMapGen<int>)->ArgPair(8<<12, (8<<12) + 1);

BENCHMARK_TEMPLATE(container_less, std::map<int, int>, StrideMapGen<int>, StrideMapGen<int>)->ArgPair(8<<12, 8<<12);
BENCHMARK_TEMPLATE(container_less, std::map<int, int>, StrideMapGen<int>, StrideMapGen<int>)->ArgPair(8<<12, (8<<12) + 1);

BENCHMARK_TEMPLATE(container_iterate, std::map<int, int>, StrideMapGen<int>)->Arg(8<<12);


BENCHMARK_MAIN()
