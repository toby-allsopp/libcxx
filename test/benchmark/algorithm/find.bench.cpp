
#include <algorithm>
#include "TestArray.hpp"
#include "Generators.hpp"

#include "benchmark/benchmark_api.h"

template <class Generator>
void BM_find(benchmark::State& state) {
    auto arr = generate_test_array<Generator>(state.range_x());
    auto val = arr[arr.size() - 1];
    auto beg = arr.begin();
    auto end = arr.end();
    while (state.KeepRunning()) {
        auto volatile result = std::find(beg, end, val);
        ((void)result);
    }
}
BENCHMARK_TEMPLATE(BM_find, StrideGenerator<int>)->Arg(10000);

BENCHMARK_MAIN()