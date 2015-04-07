#include "benchmark/benchmark_api.h"

#include "Generators.hpp"
#include "TestArray.hpp"

#include <algorithm>

using benchmark::DoNotOptimize;

void BM_search(benchmark::State& st) {
    StrideGenerator<int> g(0, st.range_y());
    StrideGenerator<int> g2(0, st.range_y() + 1);
    auto test_arr = generate_test_array<int>(st.range_x(), g);
    auto test_arr1 = generate_test_array<int>(st.range_y() + 1, g2);
    for (int i=st.range_x() - (st.range_y() + 1); i < st.range_x(); ++i) {
        test_arr[i] = test_arr1[i];
    }
    while (st.KeepRunning()) {
        DoNotOptimize(std::search(test_arr.begin(), test_arr.end(), test_arr1.begin(), test_arr1.end()));
        DoNotOptimize(test_arr);
        DoNotOptimize(test_arr1);
    }
}
BENCHMARK(BM_search)->ArgPair(1<<14, 1<<4);
BENCHMARK(BM_search)->ArgPair(1<<14, 1<<14);


void BM_search_single_length_pattern(benchmark::State& st) {
    StrideGenerator<int> g(0, st.range_y());
    auto test_arr = generate_test_array<int>(st.range_x(), g);
    auto test_arr1 = make_test_array<int>(1, -1);
    while (st.KeepRunning()) {
        DoNotOptimize(std::search(test_arr.begin(), test_arr.end(),
                                  test_arr1.begin(), test_arr1.end()));
        DoNotOptimize(test_arr);
        DoNotOptimize(test_arr1);
    }
}
BENCHMARK(BM_search_single_length_pattern)->Arg(1<<14);


BENCHMARK_MAIN()
