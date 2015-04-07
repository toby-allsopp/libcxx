#include "benchmark/benchmark_api.h"

#include "Generators.hpp"
#include "TestArray.hpp"

#include <algorithm>

using benchmark::DoNotOptimize;

bool is_neg1(int x) { return x == -1; }

void BM_all_of(benchmark::State& st) {
    auto test_arr = make_test_array<int>(st.range_x(), -1);
    auto test_arr2 = make_test_array<int>(st.range_x(), -1);
    test_arr2[st.range_x() - 1] = 0;
    while (st.KeepRunning()) {
        DoNotOptimize(std::all_of(test_arr.begin(), test_arr.end(), &is_neg1));
        DoNotOptimize(std::all_of(test_arr2.begin(), test_arr2.end(), &is_neg1));
        DoNotOptimize(test_arr);
        DoNotOptimize(test_arr2);
    }
}
BENCHMARK(BM_all_of)->Arg(1<<14);

BENCHMARK_MAIN()
