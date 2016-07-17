#ifndef BENCHMARK_GENERATE_INPUT_HPP
#define BENCHMARK_GENERATE_INPUT_HPP

#include <algorithm>
#include <random>
#include <vector>
#include <string>
#include <cstddef>

static const char Letters[] = {
    '0','1','2','3','4',
    '5','6','7','8','9',
    'A','B','C','D','E','F',
    'G','H','I','J','K',
    'L','M','N','O','P',
    'Q','R','S','T','U',
    'V','W','X','Y','Z',
    'a','b','c','d','e','f',
    'g','h','i','j','k',
    'l','m','n','o','p',
    'q','r','s','t','u',
    'v','w','x','y','z'
};
static const std::size_t LettersSize = sizeof(Letters);

inline std::default_random_engine& getRandomEngine() {
    static std::default_random_engine RandEngine(std::random_device{}());
    return RandEngine;
}

inline char getRandomChar() {
    std::uniform_int_distribution<> LettersDist(0, LettersSize-1);
    return Letters[LettersDist(getRandomEngine())];
}

template <class IntT>
inline IntT getRandomInteger() {
    std::uniform_int_distribution<IntT> dist;
    return dist(getRandomEngine());
}

inline std::string getRandomString(std::size_t Len) {
    std::string str(Len, 0);
    std::generate_n(str.begin(), Len, &getRandomChar);
    return str;
}

template <class IntT>
inline std::vector<IntT> getIntegerInputs(size_t N) {
    std::vector<IntT> inputs;
    for (size_t i=0; i < N; ++i) {
        inputs.push_back(i);
    }
    return inputs;
}

template <class IntT>
std::vector<IntT> getLargeIntegerInputs(size_t N) {
    std::vector<IntT> inputs;
    for (size_t i=0; i < N; ++i) {
        inputs.push_back(i + N);
    }
    return inputs;
}


template <class IntT>
std::vector<IntT> getRandomIntegerInputs(size_t N) {
    std::vector<IntT> inputs;
    for (size_t i=0; i < N; ++i) {
        inputs.push_back(getRandomInteger<IntT>());
    }
    return inputs;
}

inline std::vector<std::string> getRandomStringInputs(size_t N) {
    std::vector<std::string> inputs;
    for (int i=0; i < N; ++i) {
        inputs.push_back(getRandomString(1024));
    }
    return inputs;
}

#endif // BENCHMARK_GENERATE_INPUT_HPP
