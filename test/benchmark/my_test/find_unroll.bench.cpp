#include "TestArray.hpp"
#include "Generators.hpp"

#include <string>

#include "benchmark/benchmark_api.h"

using benchmark::DoNotOptimize;


template <class Iter, class Tp>
Iter find0(Iter first, Iter last, Tp const& value) {
    for(; first != last; ++first)
        if (*first == value)
            break;
    return first;
}

template <class Iter, class Tp>
Iter find2(Iter first, Iter last, Tp const& value) {
    std::ptrdiff_t count = last - first;
    if (count == 0) return first;
    std::size_t n = (count + 1) / 2;
    switch (count % 2) {
    case 0:
        do {
                if (*first == value) break;
                ++first;
            case 1:
                if (*first == value) break;
                ++first;
        } while(--n > 0);
    }
    return first;
}

template <class Iter, class Tp>
Iter find4(Iter first, Iter last, Tp const& value) {
    std::ptrdiff_t count = last - first;
    if (count == 0) return first;
    std::size_t n = (count + 3) / 4;
    switch (count % 4) {
    case 0:
        do {
                if (*first == value) break;
                ++first;
            case 3:
                if (*first == value) break;
                ++first;
            case 2:
                if (*first == value) break;
                ++first;
            case 1:
                if (*first == value) break;
                ++first;
        } while(--n > 0);
    }
    return first;
}

template <class Iter, class Tp>
Iter find8(Iter first, Iter last, Tp const& value) {
    std::ptrdiff_t count = last - first;
    if (count == 0) return first;
    std::size_t n = (count + 7) / 8;
    switch (count % 8) {
    case 0:
        do {
                if (*first == value) break;
                ++first;
            case 7:
                if (*first == value) break;
                ++first;
            case 6:
                if (*first == value) break;
                ++first;
            case 5:
                if (*first == value) break;
                ++first;
            case 4:
                if (*first == value) break;
                ++first;
            case 3:
                if (*first == value) break;
                ++first;
            case 2:
                if (*first == value) break;
                ++first;
            case 1:
                if (*first == value) break;
                ++first;
        } while(--n > 0);
    }
    return first;
}

template <class Iter, class Tp>
Iter find12(Iter first, Iter last, Tp const& value) {
    std::ptrdiff_t count = last - first;
    if (count == 0) return first;
    std::size_t n = (count + 11) / 12;
    switch (count % 12) {
    case 0:
        do {
                if (*first == value) break;
                ++first;
            case 11:
                if (*first == value) break;
                ++first;
            case 10:
                if (*first == value) break;
                ++first;
            case 9:
                if (*first == value) break;
                ++first;
            case 8:
                if (*first == value) break;
                ++first;
            case 7:
                if (*first == value) break;
                ++first;
            case 6:
                if (*first == value) break;
                ++first;
            case 5:
                if (*first == value) break;
                ++first;
            case 4:
                if (*first == value) break;
                ++first;
            case 3:
                if (*first == value) break;
                ++first;
            case 2:
                if (*first == value) break;
                ++first;
            case 1:
                if (*first == value) break;
                ++first;
        } while(--n > 0);
    }
    return first;
}

template <class Iter, class Tp>
Iter find16(Iter first, Iter last, Tp const& value) {
    std::ptrdiff_t count = last - first;
    if (count == 0) return first;
    std::size_t n = (count + 15) / 16;
    switch (count % 16) {
    case 0:
        do {
                if (*first == value) break;
                ++first;
            case 15:
                if (*first == value) break;
                ++first;
            case 14:
                if (*first == value) break;
                ++first;
            case 13:
                if (*first == value) break;
                ++first;
            case 12:
                if (*first == value) break;
                ++first;
            case 11:
                if (*first == value) break;
                ++first;
            case 10:
                if (*first == value) break;
                ++first;
            case 9:
                if (*first == value) break;
                ++first;
            case 8:
                if (*first == value) break;
                ++first;
            case 7:
                if (*first == value) break;
                ++first;
            case 6:
                if (*first == value) break;
                ++first;
            case 5:
                if (*first == value) break;
                ++first;
            case 4:
                if (*first == value) break;
                ++first;
            case 3:
                if (*first == value) break;
                ++first;
            case 2:
                if (*first == value) break;
                ++first;
            case 1:
                if (*first == value) break;
                ++first;
        } while(--n > 0);
    }
    return first;
}


template <class Generator>
void BM_find0(benchmark::State& state) {
    auto arr = generate_test_array<Generator>(state.range_x());
    auto index = arr.begin();
    while (state.KeepRunning()) {
        auto pos = find0(arr.begin(), arr.end(), *index);
        assert(pos == index);
        DoNotOptimize(pos);
        DoNotOptimize(arr);
        ++index;
        if (index == arr.end())
            index = arr.begin();
    }
}

template <class Generator>
void BM_find2(benchmark::State& state) {
    auto arr = generate_test_array<Generator>(state.range_x());
    auto index = arr.begin();
    while (state.KeepRunning()) {
        auto pos = find2(arr.begin(), arr.end(), *index);
        assert(pos == index);
        DoNotOptimize(pos);
        DoNotOptimize(arr);
        ++index;
        if (index == arr.end())
            index = arr.begin();
    }
}


template <class Generator>
void BM_find4(benchmark::State& state) {
    auto arr = generate_test_array<Generator>(state.range_x());
    auto index = arr.begin();
    while (state.KeepRunning()) {
        auto pos = find4(arr.begin(), arr.end(), *index);
        assert(pos == index);
        DoNotOptimize(pos);
        DoNotOptimize(arr);
        ++index;
        if (index == arr.end())
            index = arr.begin();
    }
}

template <class Generator>
void BM_find8(benchmark::State& state) {
    auto arr = generate_test_array<Generator>(state.range_x());
    auto index = arr.begin();
    while (state.KeepRunning()) {
        auto pos = find8(arr.begin(), arr.end(), *index);
        assert(pos == index);
        DoNotOptimize(pos);
        DoNotOptimize(arr);
        ++index;
        if (index == arr.end())
            index = arr.begin();
    }
}

template <class Generator>
void BM_find12(benchmark::State& state) {
    auto arr = generate_test_array<Generator>(state.range_x());
    auto index = arr.begin();
    while (state.KeepRunning()) {
        auto pos = find12(arr.begin(), arr.end(), *index);
        assert(pos == index);
        DoNotOptimize(pos);
        DoNotOptimize(arr);
        ++index;
        if (index == arr.end())
            index = arr.begin();
    }
}

template <class Generator>
void BM_find16(benchmark::State& state) {
    auto arr = generate_test_array<Generator>(state.range_x());
    auto index = arr.begin();
    while (state.KeepRunning()) {
        auto pos = find16(arr.begin(), arr.end(), *index);
        assert(pos == index);
        DoNotOptimize(pos);
        DoNotOptimize(arr);
        ++index;
        if (index == arr.end())
            index = arr.begin();
    }
}

BENCHMARK_TEMPLATE(BM_find0, StrideGenerator<int>)->Arg(1<<14);
BENCHMARK_TEMPLATE(BM_find2, StrideGenerator<int>)->Arg(1<<14);
BENCHMARK_TEMPLATE(BM_find4, StrideGenerator<int>)->Arg(1<<14);
BENCHMARK_TEMPLATE(BM_find8, StrideGenerator<int>)->Arg(1<<14);
BENCHMARK_TEMPLATE(BM_find12, StrideGenerator<int>)->Arg(1<<14);
BENCHMARK_TEMPLATE(BM_find16, StrideGenerator<int>)->Arg(1<<14);


BENCHMARK_TEMPLATE(BM_find0, StringStrideGenerator<>)->Arg(1<<14);
BENCHMARK_TEMPLATE(BM_find2, StringStrideGenerator<>)->Arg(1<<14);
BENCHMARK_TEMPLATE(BM_find4, StringStrideGenerator<>)->Arg(1<<14);
BENCHMARK_TEMPLATE(BM_find8, StringStrideGenerator<>)->Arg(1<<14);
BENCHMARK_TEMPLATE(BM_find12, StringStrideGenerator<>)->Arg(1<<14);
BENCHMARK_TEMPLATE(BM_find16, StringStrideGenerator<>)->Arg(1<<14);


BENCHMARK_MAIN()
