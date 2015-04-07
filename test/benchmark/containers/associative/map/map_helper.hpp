#ifndef MAP_HELPER_HPP
#define MAP_HELPER_HPP

#include "Generators.hpp"


using ValueGen = ConstantGenerator<int, 42>;

template <class ValueType, ValueType value>
using ConstantMapGen = KeyValueGenerator<ConstantGenerator<ValueType, value>, ValueGen>;

template <class ValueType>
using StrideMapGen = KeyValueGenerator<StrideGenerator<ValueType>, ValueGen>;

template <class ValueType, ValueType Start, ValueType End>
using ConstantStrideMapGen = KeyValueGenerator<ConstantStrideGenerator<ValueType, Start, End>, ValueGen>;

#endif
