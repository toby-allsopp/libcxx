#ifndef BENCHMARK_CONTAINER_BENCHMARKS_HPP
#define BENCHMARK_CONTAINER_BENCHMARKS_HPP


template <class Container, class GenInputs>
void BM_ContainerInsertValue(benchmark::State& st, Container c, GenInputs gen) {
    auto in = gen(st.range_x());
    const auto end = in.end();
    while (st.KeepRunning()) {
        c.clear();
        for (auto it = in.begin(); it != end; ++it) {
            benchmark::DoNotOptimize(c.insert(*it));
        }
        benchmark::DoNotOptimize(c);
    }
}

template <class Container, class GenInputs>
void BM_ContainerFind(benchmark::State& st, Container c, GenInputs gen) {
    auto in = gen(st.range_x());
    c.insert(in.begin(), in.end());
    const auto end = in.end();
    while (st.KeepRunning()) {
        for (auto it = in.begin(); it != end; ++it) {
            benchmark::DoNotOptimize(c.find(*it));
        }
    }
}

#endif // BENCHMARK_CONTAINER_BENCHMARKS_HPP
