#include "Generators.hpp"
#include "TestArray.hpp"

#include <algorithm>

template <class Generator>
void BM_adjacent_find(benchmark::State& st) {
    auto test_arr = generate_test_array<Generator>(st.range_x());
    Generator g;
    while (st.KeepRunning()) {
        auto val = g();
        test_arr[st.range_x() - 1] = val;
        test_arr[st.range_x() - 2] = val;
        DoNotOptimize(std::adjacent_find(test_arr.begin(), test_arr.end(), val));
    }
}
BENCHMARK_TEMPLATE(BM_adjacent_find, StrideGenerator<int>)->Arg(1<<14);

BENCHMARK_MAIN()
