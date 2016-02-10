#ifndef SUPPORT_CONTAINER_TEST_TYPES_H
#define SUPPORT_CONTAINER_TEST_TYPES_H

#include <functional>
#include <cassert>

#include "test_macros.h"

struct TypeID {
  friend TEST_CONSTEXPR bool operator==(TypeID const& LHS, TypeID const& RHS)
  {return LHS.m_id == RHS.m_id; }
  friend TEST_CONSTEXPR bool operator!=(TypeID const& LHS, TypeID const& RHS)
  {return LHS.m_id != RHS.m_id; }
private:
  explicit TEST_CONSTEXPR TypeID(const int* xid) : m_id(xid) {}
  const int* const m_id;
  template <class T> friend class TypeInfo;
};


template <class T>
class TypeInfo {
public:
  typedef T value_type;
  typedef TypeID ID;
  static  ID const& GetID() { static ID id(&dummy_addr); return id; }

  template <class L, class R>
  friend TEST_CONSTEXPR bool operator==(TypeInfo<L> const&, TypeInfo<R> const&)
    { return std::is_same<L, R>::value; }
  template <class L, class R>
  friend TEST_CONSTEXPR bool operator!=(TypeInfo<L> const&, TypeInfo<R> const&)
    { return !std::is_same<L, R>::value; }
private:
  static const int dummy_addr;
};

template <class T>
const int TypeInfo<T>::dummy_addr = 42;

template <class T>
inline TEST_CONSTEXPR TypeID const& makeTypeID() { return TypeInfo<T>::GetID(); }

#if TEST_STD_VER >= 11
template <class ...Args>
struct ArgumentListID {};

template <class ...Args>
inline TEST_CONSTEXPR TypeID const& makeArgumentID() {
  return makeTypeID<ArgumentListID<Args...>>();
}
#else
template <class A1 = void, class A2 = void, class A3 = void>
struct ArgumentListID {};

template <class A1>
inline TypeID const& makeArgumentID() {
  return makeTypeID<ArgumentListID<A1> >();
}

template <class A1, class A2>
inline TypeID const& makeArgumentID() {
  return makeTypeID<ArgumentListID<A1, A2> >();
}

template <class A1, class A2, class A3>
inline TypeID const& makeArgumentID() {
  return makeTypeID<ArgumentListID<A1, A2, A3> >();
}
#endif


struct AllocatorConstructController {
  const TypeID* m_expected_args;
  bool m_allow_constructions;
  bool m_allow_unchecked;
  int m_expected_count;

  bool check(TypeID const& tid) {
    if (!m_expected_args)
      assert(m_allow_unchecked);
    bool res = *m_expected_args == tid;
    if (m_expected_count == -1 || --m_expected_count == -1)
      m_expected_args = nullptr;
    return res;
  }

  bool unchecked() {
    return m_expected_args != nullptr;
  }

  void expect(TypeID const& tid) {
    assert(!unchecked());
    m_expected_args = &tid;
  }

#if TEST_STD_VER >= 11
  template <class ...Args>
  void expect(int times = 1) {
    assert(!unchecked());
    assert(times > 0);
    m_expected_count = times - 1;
    m_expected_args = &makeArgumentID<Args...>();
  }
  template <class ...Args>
  bool check() {
    return check(makeArgumentID<Args...>());
  }
#else
  template <class A1>
  void expect(int times = 1) {
    assert(!unchecked());
    assert(times > 0);
    m_expected_count = times - 1;
    m_expected_args = &makeArgumentID<A1>();
  }
  template <class A1>
  bool check() {
    return check(makeArgumentID<A1>());
  }
#endif

  bool isEnabled() const {
    return m_allow_constructions;
  }

  void enable(bool value = true) {
    m_allow_constructions = value;
  }

  void allowUnchecked(bool value = true) {
    m_allow_unchecked = value;
  }

  void reset() {
    m_allow_constructions = false;
    m_expected_args = nullptr;
    m_allow_unchecked = false;
    m_expected_count = -1;
  }


  AllocatorConstructController()  { reset(); }
private:
  AllocatorConstructController(AllocatorConstructController const&);
  AllocatorConstructController& operator=(AllocatorConstructController const&);
};

typedef AllocatorConstructController ConstructController;

inline ConstructController* getGlobalController() {
  static ConstructController c;
  return &c;
}

struct EnableConstructionGuard {
  ConstructController *m_cc;
  bool m_old;
  EnableConstructionGuard(ConstructController* cc) : m_cc(cc) {
    if (m_cc) {
      m_old = m_cc->isEnabled();
      m_cc->enable(true);
    }
  }
  ~EnableConstructionGuard() {
    if (m_cc) m_cc->enable(m_old);
  }
private:
  EnableConstructionGuard(EnableConstructionGuard const&);
  EnableConstructionGuard& operator=(EnableConstructionGuard const&);
};

template <class T, class AllowConstructT>
class test_construct_allocator
{
public:
    typedef T value_type;

    int construct_called;
    int destroy_called;
    ConstructController* controller;

    test_construct_allocator() TEST_NOEXCEPT
        : controller(nullptr) {}

    explicit test_construct_allocator(ConstructController* c)
       : controller(c)
    {}

    template <class U>
    test_construct_allocator(test_construct_allocator<U, AllowConstructT> other) TEST_NOEXCEPT
      : controller(other.controller)
    {}

    T* allocate(std::size_t n)
    {
        return static_cast<T*>(::operator new(n*sizeof(T)));
    }

    void deallocate(T* p, std::size_t)
    {
        return ::operator delete(static_cast<void*>(p));
    }
#if TEST_STD_VER >= 11
    template <class Up, class ...Args>
    void construct(Up* p, Args&&... args) {
      static_assert((std::is_same<Up, AllowConstructT>::value),
                    "Only allowed to construct Up");
      if (controller) {
        assert(controller->check<Args&&...>());
      }
      {
        EnableConstructionGuard g(controller);
        ::new ((void*)p) Up(std::forward<Args>(args)...);
      }
    }
#else
    template <class Up, class Arg>
    void construct(Up* p, Arg& arg) {
      static_assert((std::is_same<Up, AllowConstructT>::value),
                    "Only allowed to construct Up");
      if (controller) {
        assert(controller->check<Arg&>());
      }
      {
        EnableConstructionGuard g(controller);
        ::new ((void*)p) Up(arg);
      }
    }
#endif

    template <class Up>
    void destroy(Up* p) {
      static_assert((std::is_same<Up, AllowConstructT>::value),
                    "Only allowed to destroy Up");
      {
        EnableConstructionGuard g(controller);
        p->~Up();
      }
    }

    friend bool operator==(test_construct_allocator, test_construct_allocator) {return true;}
    friend bool operator!=(test_construct_allocator x, test_construct_allocator y) {return !(x == y);}
};

template <int Dummy = 0>
struct CopyInsertible {
  int data;
  mutable bool copied_once;
  bool constructed_under_allocator;

  explicit CopyInsertible(int val) : data(val), copied_once(false),
                                     constructed_under_allocator(false) {}

  CopyInsertible(int val, int) : data(val), copied_once(false),
                                 constructed_under_allocator(false) {}

  CopyInsertible(CopyInsertible const& other) : data(other.data),
                                                copied_once(true),
                                                constructed_under_allocator(true) {
    assert(getGlobalController()->isEnabled());
    assert(other.copied_once == false);
    other.copied_once = true;
  }

  CopyInsertible(CopyInsertible& other) : data(other.data), copied_once(true),
                                          constructed_under_allocator(true) {
    assert(getGlobalController()->isEnabled());
    assert(other.copied_once == false);
    other.copied_once = true;
  }

#if TEST_STD_VER >= 11
  CopyInsertible(CopyInsertible&& other) : CopyInsertible(other) {}

  // Forgive pair for not downcasting this to an lvalue it its constructors.
   CopyInsertible(CopyInsertible const && other) : CopyInsertible(other) {}


  template <class ...Args>
  CopyInsertible(Args&&... args) {
    assert(false);
  }
#else
  template <class Arg>
  CopyInsertible(Arg&) {
    assert(false);
  }
#endif

  ~CopyInsertible() {
    if (constructed_under_allocator) {
      assert(getGlobalController()->isEnabled());
    }
  }

  void reset(int value) {
    data = value;
    copied_once = false;
    constructed_under_allocator = false;
  }
};

template <int ID>
bool operator==(CopyInsertible<ID> const& L, CopyInsertible<ID> const& R) {
  return L.data == R.data;
}


template <int ID>
bool operator!=(CopyInsertible<ID> const& L, CopyInsertible<ID> const& R) {
  return L.data != R.data;
}


template <int ID>
bool operator <(CopyInsertible<ID> const& L, CopyInsertible<ID> const& R) {
  return L.data < R.data;
}

template <class T>
struct DataHasher {
  typedef size_t result_type;
  typedef T const& argument_type;
  template <class U>
  size_t operator()(U const& t) const {
    return t.data;
  }
};

#if TEST_STD_VER >= 11

template <int Dummy = 0>
struct MoveInsertible {
  int data;
  mutable bool copied_once;
  bool constructed_under_allocator;
  explicit MoveInsertible(int val) : data(val), copied_once(false), constructed_under_allocator(false) {}
  MoveInsertible(MoveInsertible const& other) {
    assert(false);
  }

  MoveInsertible(MoveInsertible& other) {
    assert(false);
  }

  MoveInsertible(MoveInsertible&& other) : data(other.data), copied_once(true), constructed_under_allocator(true) {
    assert(getGlobalController()->isEnabled());
    assert(other.copied_once == false);
    other.copied_once = true;
  }

  template <class ...Args>
  MoveInsertible(Args&&... args) {
    assert(false);
  }


  ~MoveInsertible() {
    if (constructed_under_allocator) {
      assert(getGlobalController()->isEnabled());
    }
  }

  void reset(int value) {
    data = value;
    copied_once = false;
    constructed_under_allocator = false;
  }
};

template <int ID>
bool operator==(MoveInsertible<ID> const& L, MoveInsertible<ID> const& R) {
  return L.data == R.data;
}


template <int ID>
bool operator!=(MoveInsertible<ID> const& L, MoveInsertible<ID> const& R) {
  return L.data != R.data;
}

#endif // TEST_STD_VER >= 11

#endif // SUPPORT_CONTAINER_TEST_TYPES_H
