#include "benchmark/benchmark_api.h"

#include "Generators.hpp"
#include "TestArray.hpp"

#include <algorithm>

using benchmark::DoNotOptimize;

bool is_equal(int x, int y) { return x == y; }

void BM_equal_pred(benchmark::State& st) {
    auto test_arr = make_test_array<int>(st.range_x(), 0);
    auto test_arr1 = make_test_array<int>(st.range_x(), 0);
    auto test_arr2 = make_test_array<int>(st.range_x() + 1, 0);
    test_arr2[st.range_x() - 1] = -1;
    while (st.KeepRunning()) {
        DoNotOptimize(std::equal(test_arr.begin(), test_arr.end(), test_arr2.begin(), &is_equal));
        DoNotOptimize(std::equal(test_arr.begin(), test_arr.end(), test_arr1.begin(), &is_equal));
        DoNotOptimize(std::equal(test_arr2.begin(), test_arr2.end(), test_arr.begin(), &is_equal));
        DoNotOptimize(test_arr);
        DoNotOptimize(test_arr1);
        DoNotOptimize(test_arr2);
    }
}
BENCHMARK(BM_equal_pred)->Arg(1<<14);

BENCHMARK_MAIN()
