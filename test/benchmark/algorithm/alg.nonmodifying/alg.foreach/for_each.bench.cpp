#include "benchmark/benchmark_api.h"

#include "Generators.hpp"
#include "TestArray.hpp"

#include <algorithm>

using benchmark::DoNotOptimize;

void inc(int& i) { i += 1; }

void BM_for_each(benchmark::State& st) {
    auto test_arr = make_test_array<int>(st.range_x(), 0);
    while (st.KeepRunning()) {
        DoNotOptimize(std::for_each(test_arr.begin(), test_arr.end(), &inc));
        DoNotOptimize(test_arr);
    }
}
BENCHMARK(BM_for_each)->Arg(1<<14);

BENCHMARK_MAIN()
