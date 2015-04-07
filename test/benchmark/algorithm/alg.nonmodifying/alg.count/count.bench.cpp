#include "benchmark/benchmark_api.h"

#include "Generators.hpp"
#include "TestArray.hpp"

#include <algorithm>

using benchmark::DoNotOptimize;

bool is_neg1(int x) { return x == -1; }
bool is_zero(int x) { return x == 0; }

void BM_count(benchmark::State& st) {
    auto test_arr = make_test_array<int>(st.range_x(), -1);
    test_arr[st.range_x() - 1] = 0;
    while (st.KeepRunning()) {
        DoNotOptimize(std::count(test_arr.begin(), test_arr.end(), -1));
        DoNotOptimize(std::count(test_arr.begin(), test_arr.end(), 0));
        DoNotOptimize(test_arr);
    }
}
BENCHMARK(BM_count)->Arg(1<<14);

BENCHMARK_MAIN()
