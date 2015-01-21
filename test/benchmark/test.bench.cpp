#include "libcxx-benchmark.h"
#include <string>

static void BM_test_empty(benchmark::State& state) {
    while (state.KeepRunning()) {}
}
BENCHMARK(BM_test_empty);

static void BM_test_spin(benchmark::State& state) {
    while(state.KeepRunning()) {
        for (int i=0; i < state.range_x(); ++i) {
            volatile int z = i;
        }
    }
}
BENCHMARK(BM_test_spin)->Range(8, 8<<10);

BENCHMARK_MAIN()
