#ifndef SUPPORT_TEST_TYPES_H
#define SUPPORT_TEST_TYPES_H

#include <functional>

#include "test_macros.h"

struct CountingCtorTagT {};
static CountingCtorTagT CountingCtorTag = CountingCtorTagT();


struct CountingTypeBase {
    mutable int allow_moves;
    mutable int allow_copies;
    mutable int allow_value_construction;

    void reset() const {
      allow_copies = 0;
      allow_moves = 0;
      allow_value_construction = 0;
    }

    void allow_all() const {
      allow_copies = 100000;
      allow_moves = 100000;
    }

    void clone(CountingTypeBase const& b) {
      allow_moves = b.allow_moves;
      allow_copies = b.allow_copies;
      allow_value_construction = b.allow_value_construction;
    }

    void move_constructed(CountingTypeBase& b) {
      clone(b); b.reset();
      assert(allow_moves > 0);
      --allow_moves;
    }

    void copy_constructed(CountingTypeBase const& b) {
      clone(b);
      assert(allow_copies > 0);
      --allow_copies;
    }
};

template <int Dummy = 0>
struct CountingType : CountingTypeBase {
  mutable int data;
  CountingType() : data(0) { reset(); }
  explicit CountingType(CountingCtorTagT, int d) : data(d) { reset(); }
  CountingType(CountingType const& other) : data(other.data) {
    copy_constructed(other);
  }
#if TEST_STD_VER >= 11
  CountingType(CountingType && other) : data(other.data) {
    move_constructed(other); other.data = -1;
  }
#endif

  CountingType& operator=(CountingType const& other) {
    copy_constructed(other); return *this;
  }
};

template <int I>
inline bool operator==(CountingType<I> const& LHS, CountingType<I> const& RHS) {
  return LHS.data == RHS.data;
}

template <int I>
inline bool operator!=(CountingType<I> const& LHS, CountingType<I> const& RHS) {
  return LHS.data != RHS.data;
}

template <int I>
inline bool operator <(CountingType<I> const& LHS, CountingType<I> const& RHS) {
  return LHS.data < RHS.data;
}

namespace std {
  template <int I>
  struct hash<CountingType<I> > {
    typedef CountingType<I> argument_type;
    typedef size_t result_type;

    size_t operator()(argument_type const& a) const {
      return a.data;
    }
  };
}


#endif // SUPPORT_TEST_TYPES_H
