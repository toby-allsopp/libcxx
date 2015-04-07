#ifndef TEST_ARRAY_HPP
#define TEST_ARRAY_HPP

#include <algorithm>
#include <memory>
#include <utility>

template <class ArrayType>
class TestArray;

template <class ValueType>
class TestArray<ValueType[]> {
public:
    using value_type = ValueType;
    using iterator = ValueType*;

    TestArray()
      : m_holder(), m_size() {
    }

    TestArray(std::nullptr_t)
      : m_holder(), m_size() {
    }

    TestArray(std::size_t size)
      : m_holder(new ValueType[size]), m_size(size) {
    }

    TestArray(ValueType* ptr, std::size_t size)
      : m_holder(ptr), m_size(size) {
    }

    TestArray(TestArray&& other)
      : m_holder(), m_size() {
        this->swap(other);
    }

    TestArray& operator=(TestArray&& other) {
        this->swap(other);
    }

    void swap(TestArray& other) {
        using std::swap;
        swap(m_holder, other.m_holder);
        swap(m_size, other.m_size);
    }

    std::size_t size() const {
        return m_size;
    }

    ValueType* data() const {
        return m_holder.get();
    }

    ValueType* begin() const {
        return m_holder.get();
    }

    ValueType* end() const {
        return m_holder.get() + m_size;
    }

    ValueType& operator[](std::size_t i) const{
        return m_holder[i];
    }
private:
    std::unique_ptr<ValueType[]> m_holder;
    std::size_t m_size;
};

template <class ValueType>
void swap(TestArray<ValueType>& lhs, TestArray<ValueType>& rhs) {
    lhs.swap(rhs);
}

template <class ValueType>
TestArray<ValueType[]> make_test_array(std::size_t size) {
    return TestArray<ValueType[]>(new ValueType[size], size);
}


template <class ValueType, class FromValue>
TestArray<ValueType[]> make_test_array(std::size_t size, FromValue const & v) {
    TestArray<ValueType[]> arr(new ValueType[size], size);
    std::fill(arr.begin(), arr.end(), v);
    return arr;
}

template <class ValueType, class FromValue>
TestArray<ValueType[]> generate_test_array(std::size_t size, FromValue const & v) {
    TestArray<ValueType[]> arr(new ValueType[size], size);
    std::fill(arr.begin(), arr.end(), v);
    return arr;
}

template <class ValueType, class Generator>
TestArray<ValueType[]> generate_test_array(std::size_t size, Generator g) {
    TestArray<ValueType[]> arr(new ValueType[size], size);
    std::generate(arr.begin(), arr.end(), g);
    return arr;
}

template <class Generator>
TestArray<typename Generator::value_type[]> generate_test_array(std::size_t size) {
    typedef typename Generator::value_type ValueType;
    TestArray<ValueType[]> arr(new ValueType[size], size);
    Generator g;
    std::generate(arr.begin(), arr.end(), g);
    return arr;
}

#endif // TEST_ARRAY_HPP
