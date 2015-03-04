#ifndef GENERATORS_HPP
#define GENERATORS_HPP

#include <limits>
#include <random>
#include <type_traits>

template <class ValueType>
bool IsBetween(ValueType value, ValueType start, ValueType end) {
    if (start < end) {
        return value >= start && value <= end;
    } else {
        return value <= start && value >= end;
    }
}

template <class ValueType>
struct StrideGenerator {

    typedef ValueType value_type;

    StrideGenerator(ValueType start = 0,
                    ValueType end = std::numeric_limits<ValueType>::max(),
                    ValueType stride = 1)
      : m_start(start), m_end(end), m_stride(stride), m_value(m_start)
    {}

    ValueType operator()() {
        ValueType old_val = m_value;
        m_value += m_stride;
        if (!IsBetween(m_value, m_start, m_end)) {
            m_value = m_start;
        }
        return old_val;
    }

private:
    ValueType m_start;
    ValueType m_end;
    ValueType m_stride;
    ValueType m_value;
};

template <class ValueType, ValueType Start = static_cast<ValueType>(0),
                           ValueType End = std::numeric_limits<ValueType>::max(),
                           ValueType Stride = static_cast<ValueType>(1)>
struct ConstantStrideGenerator : public StrideGenerator<ValueType> {

    typedef ValueType value_type;

    ConstantStrideGenerator()
      : StrideGenerator<ValueType>(Start, End, Stride) {
    }
};

template <class ValueType>
struct ValueGenerator {

    typedef ValueType value_type;

    template <class Tp>
    ValueGenerator(Tp&& value) : m_value(std::forward<Tp>(value)) {}

    ValueType const & operator()() const {
        return m_value;
    }
private:
    ValueType m_value;
};

template <class ValueType, ValueType value>
struct ConstantGenerator {

    typedef ValueType value_type;

    ConstantGenerator() {}

    ValueType operator()() const {
        return value;
    }
};

typedef std::mt19937    RandomEngine;
typedef std::mt19937_64 RandomEngine64;

template <class IntType = int>
using IntDistribution = std::uniform_int_distribution<IntType>;

template <class RealType = double>
using RealDistribution = std::uniform_real_distribution<RealType>;

template <class ValueType, bool = std::is_floating_point<ValueType>::value>
struct NumberDistributionImp {
    using type = IntDistribution<ValueType>;
};

template <class ValueType>
struct NumberDistributionImp<ValueType, true> {
    using type = RealDistribution<ValueType>;
};

template <class ValueType>
using NumberDistribution = typename NumberDistributionImp<ValueType>::type;


template <class ValueType,
          class Engine = RandomEngine,
          class Distribution = NumberDistribution<ValueType>>
struct RandomGenerator {

    typedef ValueType value_type;

    RandomGenerator() {
        std::random_device rd;
        m_gen.seed(rd());
    }

    RandomGenerator(ValueType min, ValueType max)
      : m_dist(min, max) {
        std::random_device rd;
        m_gen.seed(rd());
    }

    ValueType operator()() {
        return m_dist(m_gen);
    }

private:
    Engine m_gen;
    Distribution m_dist;
};


#endif // GENERATORS_HPP