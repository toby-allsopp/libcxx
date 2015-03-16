#include "benchmark/benchmark.h"

static void BM_test_empty(benchmark::State& state) {
    while (state.KeepRunning()) {}
}
BENCHMARK(BM_test_empty);

BENCHMARK_MAIN()
