#include <unordered_set>
#include <vector>
#include <cstdint>

#include "benchmark/benchmark_api.h"
#include "ContainerBenchmarks.hpp"

template <class IntT>
std::vector<IntT> getInputs(size_t N) {
    std::vector<IntT> inputs;
    for (size_t i=0; i < N; ++i) {
        inputs.push_back(i);
    }
    return inputs;
}

BENCHMARK_CAPTURE(BM_ContainerInsertValue, unordered_set_uint32,
    std::unordered_set<uint32_t>{}, &getInputs<uint32_t>)->Arg(1024);

BENCHMARK_CAPTURE(BM_ContainerFind, unordered_set_uint32,
    std::unordered_set<uint32_t>{}, getInputs<uint32_t>)->Arg(1024);


BENCHMARK_MAIN()
