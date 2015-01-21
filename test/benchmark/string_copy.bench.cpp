#include "libcxx-benchmark.h"
#include <string>

static void BM_string_copy(benchmark::State& state) {
  while (state.KeepRunning()) {
    state.PauseTiming();
    std::string s(state.range_x(), 'a');
    state.ResumeTiming();
    std::string y = s;
    volatile const char* yptr = y.c_str();
  }
}
BENCHMARK(BM_string_copy)->Range(8, 8<<10);

BENCHMARK_MAIN()
