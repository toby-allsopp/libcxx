#include "benchmark/benchmark_api.h"

#include "Generators.hpp"
#include "TestArray.hpp"

#include <algorithm>

using benchmark::DoNotOptimize;

bool is_equal(int x, int y) { return x == y; }

void BM_find_first_of_pred(benchmark::State& st) {
    auto test_arr = make_test_array<int>(st.range_x(), 0);
    test_arr[st.range_x() - 1] = -1;
    auto test_arr1 = make_test_array<int>(st.range_y(), -2);
    test_arr1[st.range_y() - 1] = -1;
    auto test_arr2 = make_test_array<int>(1, -1);
    while (st.KeepRunning()) {
        DoNotOptimize(std::find_first_of(test_arr.begin(), test_arr.end(), test_arr1.begin(), test_arr1.end(), &is_equal));
        DoNotOptimize(std::find_first_of(test_arr.begin(), test_arr.end(), test_arr2.begin(), test_arr2.end(), &is_equal));
        DoNotOptimize(test_arr);
        DoNotOptimize(test_arr1);
        DoNotOptimize(test_arr2);
    }
}
BENCHMARK(BM_find_first_of_pred)->ArgPair(1<<14, 1<<4);
BENCHMARK(BM_find_first_of_pred)->ArgPair(1<<14, 1<<14);


BENCHMARK_MAIN()
