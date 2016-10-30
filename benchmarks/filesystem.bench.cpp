#include <experimental/filesystem>

#include "benchmark/benchmark_api.h"
#include "GenerateInput.hpp"

namespace fs = std::experimental::filesystem;

static const size_t NumTestInputs = 1024;

template <class GenInputs>
void BM_PathIterate(benchmark::State &st, GenInputs gen) {
  using namespace fs;
  const auto in = gen(st.range(0));
  path PP(in.begin(), in.end());
  benchmark::DoNotOptimize(PP.native().data());
  while (st.KeepRunning()) {
    for (auto &E : *it) {
      benchmark::DoNotOptimize(E.data());
    }
    benchmark::ClobberMemory();
  }
}
BENCHMARK_CAPTURE(BM_PathIterate, iterate_elements,
  getRandomStringInputs)->Arg(TestNumInputs);


BENCHMARK_MAIN()
