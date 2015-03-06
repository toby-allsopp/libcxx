#ifndef CONTAINER_BENCHMARKS_HPP
#define CONTAINER_BENCHMARKS_HPP

#include "benchmark/minimal_benchmark.h"
#include "Generators.hpp"
#include "TestArray.hpp"

#include <algorithm>
#include <iterator>

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
        volatile Container& cref = (c2 = c1);
    }
}

template <class Container, class Generator1, class Generator2>
void container_swap(benchmark::State& st) {
    Container c1 = generate_container<Container, Generator1>(st.range_x());
    Container c2 = generate_container<Container, Generator2>(st.range_y());
    while (st.KeepRunning()) {
        c1.swap(c2);
        volatile Container* dummy1 = &c1;
        volatile Container* dummy2 = &c2;
    }
}

template <class Container, class Generator1, class Generator2>
void container_equal(benchmark::State& st) {
    Container c1 = generate_container<Container, Generator1>(st.range_x());
    Container c2 = generate_container<Container, Generator2>(st.range_y());
    while (st.KeepRunning()) {
        volatile bool ret;
        ret = c1 == c2;
        ret = c2 == c1;
    }
}

template <class Container, class Generator1, class Generator2>
void container_not_equal(benchmark::State& st) {
    Container c1 = generate_container<Container, Generator1>(st.range_x());
    Container c2 = generate_container<Container, Generator2>(st.range_y());
    while (st.KeepRunning()) {
        volatile bool ret;
        ret = c1 != c2;
        ret = c2 != c1;
    }
}

template <class Container, class Generator1, class Generator2>
void container_less(benchmark::State& st) {
    Container c1 = generate_container<Container, Generator1>(st.range_x());
    Container c2 = generate_container<Container, Generator2>(st.range_y());
    while (st.KeepRunning()) {
        volatile bool ret;
        ret = c1 < c2;
        ret = c2 < c1;
    }
}

template <class Container, class Generator1, class Generator2>
void container_greater(benchmark::State& st) {
    Container c1 = generate_container<Container, Generator1>(st.range_x());
    Container c2 = generate_container<Container, Generator2>(st.range_y());
    while (st.KeepRunning()) {
        volatile bool ret;
        ret = c1 > c2;
        ret = c2 > c1;
    }
}

template <class Container, class Generator1, class Generator2>
void container_less_equal(benchmark::State& st) {
    Container c1 = generate_container<Container, Generator1>(st.range_x());
    Container c2 = generate_container<Container, Generator2>(st.range_y());
    while (st.KeepRunning()) {
        volatile bool ret;
        ret = c1 <= c2;
        ret = c2 <= c1;
    }
}

template <class Container, class Generator1, class Generator2>
void container_greater_equal(benchmark::State& st) {
    Container c1 = generate_container<Container, Generator1>(st.range_x());
    Container c2 = generate_container<Container, Generator2>(st.range_y());
    while (st.KeepRunning()) {
        volatile bool ret;
        ret = c1 >= c2;
        ret = c2 >= c1;
    }
}

template <class Container, class Generator>
void container_iterate(benchmark::State& st) {
    typedef typename Container::iterator Iter;
    typedef std::iterator_traits<Iter> IterTraits;
    typedef typename IterTraits::reference Ref;
    typedef typename IterTraits::pointer Ptr;
    Container c1 = generate_container<Container, Generator>(st.range_x());
    while (st.KeepRunning()) {
        Iter e = c1.end();
        for (Iter b = c1.begin(); b != e; ++b) {
            Ref ref = *b;
            volatile Ptr p = &ref;
        }
    }
}

template <class Container, class Generator>
void container_reverse_iterate(benchmark::State& st) {
    typedef typename Container::reverse_iterator Iter;
    typedef std::iterator_traits<Iter> IterTraits;
    typedef typename IterTraits::reference Ref;
    typedef typename IterTraits::pointer Ptr;
    Container c1 = generate_container<Container, Generator>(st.range_x());
    while (st.KeepRunning()) {
        Iter e = c1.rend();
        for (Iter b = c1.rbegin(); b != e; ++b) {
            Ref ref = *b;
            volatile Ptr p = &ref;
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
        volatile Container* dummy = &c2;
        c2.clear();
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
        volatile Container* dummy = &c;
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
            c.insert(g());
        }
        volatile Container* dummy = &c;
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
            c.erase(*b);
        }
        volatile Container* cptr = &c;
    }
}

template <class Container, class Generator1>
void container_erase_range_by_size(benchmark::State& st) {
    Container initial_cont = generate_container<Container, Generator1>(st.range_x());
    int range_size = st.range_y();
    while (st.KeepRunning()) {
        st.PauseTiming();
        Container c(initial_cont);
        auto b = c.begin();
        auto e = std::advance(c.begin(), range_size);
        st.ResumeTiming();
        c.erase(b, e);
        volatile Container* cptr = &c;
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
            c.erase(c.begin());
        }
        volatile Container* cptr = &c;
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
            c.erase(--c.end());
        }
        volatile Container* cptr = &c;
    }
}

template <class Container, class Generator1, class Generator2>
void container_find(benchmark::State& st) {
    Container c = generate_container<Container, Generator1>(st.range_x());
    Generator2 g2;
    while (st.KeepRunning()) {
        volatile typename Container::iterator found = c.find(g2());
        ((void)found);
    }
}

template <class Container, class Generator1, class Generator2>
void container_count(benchmark::State& st) {
    Container c = generate_container<Container, Generator1>(st.range_x());
    Generator2 g2;
    while (st.KeepRunning()) {
        volatile std::size_t found = c.find(g2());
        ((void)found);
    }
}

#endif // CONTAINER_BENCHMARKS_HPP
