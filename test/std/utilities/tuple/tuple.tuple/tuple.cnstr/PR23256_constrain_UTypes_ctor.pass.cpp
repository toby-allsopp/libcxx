//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// UNSUPPORTED: c++98, c++03

// <tuple>

// template <class... Types> class tuple;

// template <class ...UTypes>
//    EXPLICIT(...) tuple(UTypes&&...)

// Check that the UTypes... ctor is properly disabled before evaluating any
// SFINAE when the tuple-like copy/move ctor should *clearly* be selected
// instead. This happens 'sizeof...(UTypes) == 1' and the first element of
// 'UTypes...' is an instance of the tuple itself. See PR23256.

#include <tuple>
#include <memory>
#include <type_traits>


class UnconstrainedCtor {
public:
  UnconstrainedCtor() : value_(0) {}

  template <typename T>
  constexpr UnconstrainedCtor(T value) : value_(static_cast<int>(value)) {
      static_assert(std::is_same<int, T>::value, "");
  }

private:
  int value_;
};

int main() {
    typedef UnconstrainedCtor A;
    {
        static_assert(std::is_trivially_copy_constructible<std::tuple<A>>::value, "");
        static_assert(std::is_trivially_move_constructible<std::tuple<A>>::value, "");
    }
    {
        static_assert(std::is_constructible<
            std::tuple<A>,
            std::allocator_arg_t, std::allocator<void>,
            std::tuple<A> const&
        >::value, "");
        static_assert(std::is_constructible<
            std::tuple<A>,
            std::allocator_arg_t, std::allocator<void>,
            std::tuple<A> &&
        >::value, "");
    }
}
