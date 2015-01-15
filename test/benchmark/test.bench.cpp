#include "libcxx-benchmark.h"
#include <string>

static void BM_test(benchmark::State& state) {
    std::string x = "hello";
    while (state.KeepRunning())
        std::string copy(x);
}
BENCHMARK(BM_test);

BENCHMARK_MAIN()
