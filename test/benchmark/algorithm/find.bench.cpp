
#include <algorithm>
#include "TestArray.hpp"
#include "Generators.hpp"

#include "benchmark/benchmark_api.h"

template <class Generator>
void BM_find(benchmark::State& state) {
    auto arr = generate_test_array<Generator>(state.range_x());
    auto val = arr[arr.size() - 1];
    auto beg = arr.begin();
    auto end = arr.end();
    while (state.KeepRunning()) {
        auto volatile result = std::find(beg, end, val);
        ((void)result);
    }
}
BENCHMARK_TEMPLATE(BM_find, StrideGenerator<int>)->Arg(10000);
BENCHMARK_TEMPLATE(BM_find, StringStrideGenerator<>)->Arg(100000);

#if 0
template <class Generator>
void BM_find_if(benchmark::State& state) {
    auto arr = generate_test_array<Generator>(state.range_x());
    typedef typename Generator::value_type ValueType;
    auto val = arr[arr.size() - 1];
    auto beg = arr.begin();
    auto end = arr.end();
    auto pred = [=](ValueType const& lhs) { return lhs == val; };
    while (state.KeepRunning()) {
        auto volatile result = std::find_if(beg, end, pred);
        ((void)result);
    }
}
BENCHMARK_TEMPLATE(BM_find_if, StrideGenerator<int>)->Arg(10000);
BENCHMARK_TEMPLATE(BM_find_if, StringStrideGenerator<>)->Arg(100000);


template <class Generator>
void BM_find_if_not(benchmark::State& state) {
    auto arr = generate_test_array<Generator>(state.range_x());
    typedef typename Generator::value_type ValueType;
    auto val = arr[arr.size() - 1];
    auto beg = arr.begin();
    auto end = arr.end();
    auto pred = [=](ValueType const& lhs) { return lhs != val; };
    while (state.KeepRunning()) {
        auto volatile result = std::find_if_not(beg, end, pred);
        ((void)result);
    }
}
BENCHMARK_TEMPLATE(BM_find_if_not, StrideGenerator<int>)->Arg(10000);
BENCHMARK_TEMPLATE(BM_find_if_not, StringStrideGenerator<>)->Arg(100000);
#endif

BENCHMARK_MAIN()