#ifndef CONTAINER_BENCHMARKS_HPP
#define CONTAINER_BENCHMARKS_HPP

#include "benchmark/benchmark_api.h"
#include "Generators.hpp"
#include "TestArray.hpp"

#include <algorithm>
#include <iterator>

using benchmark::DoNotOptimize;

template <class Container, class Generator>
Container generate_container(std::size_t size) {
    auto arr = generate_test_array<Generator>(size);
    return Container(arr.begin(), arr.end());
}

template <class Container, class Generator>
void container_fill_constructor(benchmark::State& st) {
    Generator g;
    while (st.KeepRunning()) {
        volatile Container c(st.range_x(), g());
    }
}

template <class Container, class Generator>
void container_range_constructor(benchmark::State& st) {
    auto arr = generate_test_array<Generator>(st.range_x());
    while (st.KeepRunning()) {
        volatile Container v(arr.begin(), arr.end());
    }
}

template <class Container, class Generator>
void container_copy_constructor(benchmark::State& st) {
    Container c = generate_container<Container, Generator>(st.range_x());
    while (st.KeepRunning()) {
        volatile Container v(c);
    }
}

template <class Container, class Generator>
void container_copy_assignment(benchmark::State& st) {
    Container c1 = generate_container<Container, Generator>(st.range_x());
    while (st.KeepRunning()) {
        Container c2;
        c2 = c1;
        DoNotOptimize((const Container&)c2);
    }
}

template <class Container, class Generator1, class Generator2>
void container_swap(benchmark::State& st) {
    Container c1 = generate_container<Container, Generator1>(st.range_x());
    Container c2 = generate_container<Container, Generator2>(st.range_y());
    while (st.KeepRunning()) {
        c1.swap(c2);
        DoNotOptimize(c1);
    }
}

template <class Container, class Generator1, class Generator2>
void container_equal(benchmark::State& st) {
    Container c1 = generate_container<Container, Generator1>(st.range_x());
    Container c2 = generate_container<Container, Generator2>(st.range_y());
    while (st.KeepRunning()) {
        DoNotOptimize(c1 == c2);
        DoNotOptimize(c2 == c1);
    }
}

template <class Container, class Generator1, class Generator2>
void container_not_equal(benchmark::State& st) {
    Container c1 = generate_container<Container, Generator1>(st.range_x());
    Container c2 = generate_container<Container, Generator2>(st.range_y());
    while (st.KeepRunning()) {
        DoNotOptimize(c1 != c2);
        DoNotOptimize(c2 != c1);
    }
}

template <class Container, class Generator1, class Generator2>
void container_less(benchmark::State& st) {
    Container c1 = generate_container<Container, Generator1>(st.range_x());
    Container c2 = generate_container<Container, Generator2>(st.range_y());
    while (st.KeepRunning()) {
        DoNotOptimize(c1 < c2);
        DoNotOptimize(c2 < c1);
    }
}

template <class Container, class Generator1, class Generator2>
void container_greater(benchmark::State& st) {
    Container c1 = generate_container<Container, Generator1>(st.range_x());
    Container c2 = generate_container<Container, Generator2>(st.range_y());
    while (st.KeepRunning()) {
        DoNotOptimize(c1 > c2);
        DoNotOptimize(c2 > c1);
    }
}

template <class Container, class Generator1, class Generator2>
void container_less_equal(benchmark::State& st) {
    Container c1 = generate_container<Container, Generator1>(st.range_x());
    Container c2 = generate_container<Container, Generator2>(st.range_y());
    while (st.KeepRunning()) {
        DoNotOptimize(c1 <= c2);
        DoNotOptimize(c2 <= c1);
    }
}

template <class Container, class Generator1, class Generator2>
void container_greater_equal(benchmark::State& st) {
    Container c1 = generate_container<Container, Generator1>(st.range_x());
    Container c2 = generate_container<Container, Generator2>(st.range_y());
    while (st.KeepRunning()) {
        DoNotOptimize(c1 >= c2);
        DoNotOptimize(c2 >= c1);
    }
}

template <class Container, class Generator>
void container_iterate(benchmark::State& st) {
    typedef typename Container::iterator Iter;
    Container c1 = generate_container<Container, Generator>(st.range_x());
    while (st.KeepRunning()) {
        Iter e = c1.end();
        Iter b = c1.begin();
        while (b != e) {
            DoNotOptimize(++b);
        }
    }
}

template <class Container, class Generator>
void container_reverse_iterate(benchmark::State& st) {
    typedef typename Container::reverse_iterator Iter;
    Container c1 = generate_container<Container, Generator>(st.range_x());
    while (st.KeepRunning()) {
        Iter e = c1.rend();
        Iter b = c1.rbegin();
        while (b != e) {
            DoNotOptimize(++b);
        }
    }
}

template <class Container, class Generator>
void container_clear(benchmark::State& st) {
    Container const c1 = generate_test_array<Generator>(st.range_x());
    while (st.KeepRunning()) {
        st.PauseTiming();
        Container c2 = c1;
        st.ResumeTiming();
        DoNotOptimize(c2);
        c2.clear();
        // TODO(ericwf): Put DoNotOptimize(...) here?
    }
}

template <class Container, class Generator1, class Generator2>
void container_insert_range(benchmark::State& st) {
    Container initial_cont = generate_container<Container, Generator1>(st.range_x());
    auto to_insert = generate_test_array<Generator2>(st.range_y());
    while (st.KeepRunning()) {
        st.PauseTiming();
        Container c(initial_cont);
        st.ResumeTiming();
        c.insert(to_insert.begin(), to_insert.end());
        DoNotOptimize(c);
    }
}


template <class Container, class Generator1, class Generator2>
void container_insert_range_begin(benchmark::State& st) {
    Container c = generate_container<Container, Generator1>(st.range_x());
    auto to_insert = generate_test_array<Generator2>(st.range_y());
    while (st.KeepRunning()) {
        DoNotOptimize(
            c.insert(c.begin(), to_insert.begin(), to_insert.end()));
    }
}


template <class Container, class Generator1, class Generator2>
void container_insert_range_end(benchmark::State& st) {
    Container c = generate_container<Container, Generator1>(st.range_x());
    auto to_insert = generate_test_array<Generator2>(st.range_y());
    while (st.KeepRunning()) {
        DoNotOptimize(
            c.insert(c.end(), to_insert.begin(), to_insert.end()));
    }
}


template <class Container, class Generator1, class Generator2>
void container_insert_value(benchmark::State& st) {
    Container initial_cont = generate_container<Container, Generator1>(st.range_x());
    Generator2 g;
    while (st.KeepRunning()) {
        st.PauseTiming();
        Container c(initial_cont);
        st.ResumeTiming();
        for (int i=st.range_y(); i >= 0; --i) {
            DoNotOptimize(c.insert(g()));
        }
    }
}


template <class Container, class Generator>
void container_push_back(benchmark::State& st) {
    Container c;
    Generator g;
    while (st.KeepRunning()) {
        c.push_back(g());
    }
    DoNotOptimize(c);
}


template <class Container, class Generator>
void container_push_front(benchmark::State& st) {
    Container c;
    Generator g;
    while (st.KeepRunning()) {
        c.push_front(g());
    }
    DoNotOptimize(c);
}


template <class Container, class Generator1>
void container_pop_back(benchmark::State& st) {
    Container initial_cont = generate_container<Container, Generator1>(st.range_x());
    while (st.KeepRunning()) {
        st.PauseTiming();
        Container c(initial_cont);
        st.ResumeTiming();
        while (!c.empty())
            c.pop_back();
        DoNotOptimize(c);
    }
}


template <class Container, class Generator1>
void container_pop_front(benchmark::State& st) {
    Container initial_cont = generate_container<Container, Generator1>(st.range_x());
    while (st.KeepRunning()) {
        st.PauseTiming();
        Container c(initial_cont);
        st.ResumeTiming();
        while (!c.empty())
            c.pop_front();
        DoNotOptimize(c);
    }
}


template <class Container, class Generator1, class Generator2>
void container_erase_value(benchmark::State& st) {
    Container initial_cont = generate_container<Container, Generator1>(st.range_x());
    auto to_erase = generate_test_array<Generator2>(st.range_y());
    while (st.KeepRunning()) {
        st.PauseTiming();
        Container c(initial_cont);
        auto e = to_erase.end();
        st.ResumeTiming();
        for (auto b = to_erase.begin(); b != e; ++b) {
            DoNotOptimize(c.erase(*b));
        }
    }
}

template <class Container, class Generator1>
void container_erase_range_by_size(benchmark::State& st) {
    Container initial_cont = generate_container<Container, Generator1>(st.range_x());
    int range_size = st.range_y();
    while (st.KeepRunning()) {
        st.PauseTiming();
        Container c(initial_cont);
        st.ResumeTiming();
        while (c.size() >= range_size) {
            auto b = c.begin();
            auto e = c.begin();
            std::advance(e, range_size);
            DoNotOptimize(c.erase(b, e));
        }
    }
}

template <class Container, class Generator1>
void container_erase_front(benchmark::State& st) {
    Container initial_cont = generate_container<Container, Generator1>(st.range_x());
    while (st.KeepRunning()) {
        st.PauseTiming();
        Container c(initial_cont);
        st.ResumeTiming();
        while (!c.empty()) {
            DoNotOptimize(c.erase(c.begin()));
        }
    }
}

template <class Container, class Generator1>
void container_erase_back(benchmark::State& st) {
    Container initial_cont = generate_container<Container, Generator1>(st.range_x());
    while (st.KeepRunning()) {
        st.PauseTiming();
        Container c(initial_cont);
        st.ResumeTiming();
        while (!c.empty()) {
            DoNotOptimize(c.erase(--c.end()));
        }
    }
}


template <class Container, class Generator1, class Generator2 = Generator1>
void container_erase_front_key(benchmark::State& st) {
    Container initial_cont = generate_container<Container, Generator1>(st.range_x());
    auto keys = generate_test_array<Generator2>(st.range_x());
    while (st.KeepRunning()) {
        st.PauseTiming();
        Container c(initial_cont);
        st.ResumeTiming();
        for (auto it=keys.begin(); it != keys.end(); ++it) {
            DoNotOptimize(c.erase(*it));
        }
    }
}

template <class Container, class Generator1, class Generator2 = Generator1>
void container_erase_back_key(benchmark::State& st) {
    Container initial_cont = generate_container<Container, Generator1>(st.range_x());
    auto keys = generate_test_array<Generator2>(st.range_x());
    while (st.KeepRunning()) {
        st.PauseTiming();
        Container c(initial_cont);
        st.ResumeTiming();
        auto it = keys.end();
        do {
            --it;
            DoNotOptimize(c.erase(*it));
        } while (it != keys.begin());
    }
}


template <class Container, class Generator1, class Generator2>
void container_find(benchmark::State& st) {
    Container c = generate_container<Container, Generator1>(st.range_x());
    Generator2 g2;
    while (st.KeepRunning()) {
        DoNotOptimize(c.find(g2()));
    }
}

template <class Container, class Generator1, class Generator2>
void container_count(benchmark::State& st) {
    Container c = generate_container<Container, Generator1>(st.range_x());
    Generator2 g2;
    while (st.KeepRunning()) {
        DoNotOptimize(c.find(g2()));
    }
}


template <class Container, class Generator1, class Generator2>
void container_equal_range(benchmark::State& st) {
    Container c = generate_container<Container, Generator1>(st.range_x());
    Generator2 g2;
    while (st.KeepRunning()) {
        DoNotOptimize(c.equal_range(g2()));
    }
}

template <class Container, class Generator1, class Generator2>
void container_lower_bound(benchmark::State& st) {
    Container c = generate_container<Container, Generator1>(st.range_x());
    Generator2 g2;
    while (st.KeepRunning()) {
        DoNotOptimize(c.lower_bound(g2()));
    }
}

template <class Container, class Generator1, class Generator2>
void container_upper_bound(benchmark::State& st) {
    Container c = generate_container<Container, Generator1>(st.range_x());
    Generator2 g2;
    while (st.KeepRunning()) {
        DoNotOptimize(c.lower_bound(g2()));
    }
}

#endif // CONTAINER_BENCHMARKS_HPP
