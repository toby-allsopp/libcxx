#include <unordered_set>
#include <vector>
#include <cstdint>

#include "benchmark/benchmark_api.h"
#include "ContainerBenchmarks.hpp"
#include "GenerateInput.hpp"

constexpr std::size_t TestNumInputs = 1024;

BENCHMARK_CAPTURE(BM_ContainerInsertValue,
    unordered_set_uint32_smaller_than_bucket_count,
    std::unordered_set<uint32_t>{}, getIntegerInputs<uint32_t>)->Arg(TestNumInputs);

BENCHMARK_CAPTURE(BM_ContainerInsertValue,
    unordered_set_uint32_larger_than_bucket_count,
    std::unordered_set<uint32_t>{}, getLargeIntegerInputs<uint32_t>)->Arg(TestNumInputs);

BENCHMARK_CAPTURE(BM_ContainerInsertValue,
    unordered_set_uint32,
    std::unordered_set<uint32_t>{}, getRandomIntegerInputs<uint32_t>)->Arg(TestNumInputs);

BENCHMARK_CAPTURE(BM_ContainerInsertValue,
    unordered_set_string,
    std::unordered_set<std::string>{}, getRandomStringInputs)->Arg(TestNumInputs);

//----------------------------------------------------------------------------//

BENCHMARK_CAPTURE(BM_ContainerFind, unordered_set_uint32_smaller_than_bucket_count,
    std::unordered_set<uint32_t>{}, getIntegerInputs<uint32_t>)->Arg(TestNumInputs);

BENCHMARK_CAPTURE(BM_ContainerFind,
    unordered_set_uint32_larger_than_bucket_count,
    std::unordered_set<uint32_t>{}, getLargeIntegerInputs<uint32_t>)->Arg(TestNumInputs);

BENCHMARK_CAPTURE(BM_ContainerFind,
    unordered_set_uint32,
    std::unordered_set<uint32_t>{}, getRandomIntegerInputs<uint32_t>)->Arg(TestNumInputs);

BENCHMARK_CAPTURE(BM_ContainerFind, unordered_set_string,
    std::unordered_set<std::string>{}, getRandomStringInputs)->Arg(TestNumInputs);


BENCHMARK_MAIN()
