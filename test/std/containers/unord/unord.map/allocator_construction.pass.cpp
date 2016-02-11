//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <unordered_map>

// template <class Key, class T, class Hash = hash<Key>, class Pred = equal_to<Key>,
//           class Alloc = allocator<pair<const Key, T>>>
// class unordered_map

// pair<iterator, bool> insert(const value_type& x);

#include <unordered_map>
#include <unordered_set>
#include <iostream>
#include <cassert>

#include "count_new.hpp"
#include "min_allocator.h"
#include "test_macros.h"
#include "container_test_types.h"

#if TEST_STD_VER >= 11
template <class Arg>
void PrintInfo(int line, Arg&& arg)
#else
template <class Arg>
void PrintInfo(int line, Arg arg)
#endif
{
  std::cout << "In " << __FILE__ << ":" << line << ":\n    " << arg << "\n" << std::endl;
}
#define PRINT(...) PrintInfo(__LINE__, __VA_ARGS__)

template <class Container>
void testContainerInsertAndEmplaceValueType()
{
    typedef typename Container::value_type ValueTp;

    typedef Container C;
    typedef typename C::allocator_type Alloc;
    typedef std::pair<typename C::iterator, bool> R;
    ConstructController* cc = getConstructController();
    Alloc a(cc);
    {
        PRINT("Testing C::insert(const value_type&)");
        cc->reset();
        C c(a);
        int index = 1;
        {
          const int my_index = index++;
          const ValueTp v(my_index, 1);
          cc->expect<const ValueTp&>();
          assert(c.insert(v).second);
          assert(!cc->unchecked());
          {
            DisableAllocationGuard g;
            const ValueTp v2(my_index, 1);
            assert(c.insert(v2).second == false);
          }
        }
        c.clear();
        {
          PRINT("Testing C::insert(value_type&)");
          const int my_index = index++;
          ValueTp v(my_index, 1);
          cc->expect<const ValueTp&>();
          assert(c.insert(v).second);
          assert(!cc->unchecked());
          {
            DisableAllocationGuard g;
            ValueTp v2(my_index, 1);
            assert(c.insert(v2).second == false);
          }
        }
        c.clear();
        {
          PRINT("Testing C::insert(value_type&&)");
          const int my_index = index++;
          ValueTp v(my_index, 2);
          cc->expect<ValueTp&&>();
          assert(c.insert(std::move(v)).second);
          assert(!cc->unchecked());
          {
            DisableAllocationGuard g;
            ValueTp v2(my_index, 1);
            assert(c.insert(std::move(v2)).second == false);
          }
        }
        c.clear();
        {
          PRINT("Testing C::insert(value_type const&&)");
          const int my_index = index++;
          const ValueTp v(my_index, 2);
          cc->expect<ValueTp const&>();
          assert(c.insert(std::move(v)).second);
          assert(!cc->unchecked());
          {
            DisableAllocationGuard g;
            const ValueTp v2(my_index, 1);
            assert(c.insert(std::move(v2)).second == false);
          }
        }
        c.clear();
        {
          PRINT("Testing C::emplace(const value_type&)");
          const int my_index = index++;
          const ValueTp v(my_index, 1);
          cc->expect<const ValueTp&>();
          assert(c.emplace(v).second);
          assert(!cc->unchecked());
          {
            DisableAllocationGuard g;
            const ValueTp v2(my_index, 1);
            assert(c.emplace(v2).second == false);
          }
        }
        c.clear();
        {
          PRINT("Testing C::emplace(value_type&)");
          const int my_index = index++;
          ValueTp v(my_index, 1);
          cc->expect<ValueTp&>();
          assert(c.emplace(v).second);
          assert(!cc->unchecked());
          {
            DisableAllocationGuard g;
            ValueTp v2(my_index, 1);
            assert(c.emplace(v2).second == false);
          }
        }
        c.clear();
        {
          PRINT("Testing C::emplace(value_type&&)");
          const int my_index = index++;
          ValueTp v(my_index, 2);
          cc->expect<ValueTp&&>();
          assert(c.emplace(std::move(v)).second);
          assert(!cc->unchecked());
          {
            DisableAllocationGuard g;
            ValueTp v2(my_index, 1);
            assert(c.emplace(std::move(v2)).second == false);
          }
        }
        c.clear();
        {
          PRINT("Testing C::emplace(value_type const&&)");
          const int my_index = index++;
          const ValueTp v(my_index, 2);
          cc->expect<ValueTp const&&>();
          assert(c.emplace(std::move(v)).second);
          assert(!cc->unchecked());
          {
            DisableAllocationGuard g;
            const ValueTp v2(my_index, 1);
            assert(c.emplace(std::move(v2)).second == false);
          }
        }
        c.clear();
        {
          PRINT("Testing C::insert(std::initializer_list<ValueTp>)");
          std::initializer_list<ValueTp> il = { {1, 1}, {2, 1} };
          cc->expect<ValueTp const&>(2);
          c.insert(il);
          assert(!cc->unchecked());
          {
            DisableAllocationGuard g;
            c.insert(il);
          }
        }
        c.clear();
        {
          PRINT("Testing C::insert(Iter, Iter) for *Iter = value_type const&");
          const ValueTp ValueList[] = { {1, 1}, {2, 1} , {3, 1} };
          cc->expect<ValueTp const&>(3);
          c.insert(std::begin(ValueList), std::end(ValueList));
          assert(!cc->unchecked());
          {
            DisableAllocationGuard g;
            c.insert(std::begin(ValueList), std::end(ValueList));
          }
        }
        c.clear();
        {
          PRINT("Testing C::insert(Iter, Iter) for *Iter = value_type&&");
          ValueTp ValueList[] = { {1, 1}, {2, 1} , {3, 1} };
          cc->expect<ValueTp&&>(3);
          c.insert(std::move_iterator<ValueTp*>(std::begin(ValueList)),
                   std::move_iterator<ValueTp*>(std::end(ValueList)));
          assert(!cc->unchecked());
          {
            DisableAllocationGuard g;
            ValueTp ValueList2[] = { {1, 1}, {2, 1} , {3, 1} };
            c.insert(std::move_iterator<ValueTp*>(std::begin(ValueList2)),
                     std::move_iterator<ValueTp*>(std::end(ValueList2)));
          }
        }
        c.clear();
        {
          PRINT("Testing C::insert(Iter, Iter) for *Iter = value_type&");
          ValueTp ValueList[] = { {1, 1}, {2, 1} , {3, 1} };
          cc->expect<ValueTp &>(3);
          c.insert(std::begin(ValueList), std::end(ValueList));
          assert(!cc->unchecked());
          {
            DisableAllocationGuard g;
            c.insert(std::begin(ValueList), std::end(ValueList));
          }
        }
        c.clear();
      }
}


template <class Container, class ValueTp>
void testMapInsertAndEmplaceOtherType()
{
    typedef typename Container::key_type key_type;
    typedef typename Container::mapped_type mapped_type;
    typedef typename Container::value_type ContainerValueTp;
    static_assert((!std::is_same<ValueTp, ContainerValueTp>::value),
                  "This test requires a different value type");
    typedef typename ValueTp::first_type first_type;
    typedef typename ValueTp::second_type second_type;
    typedef Container C;
    typedef typename C::allocator_type Alloc;
    typedef std::pair<typename C::iterator, bool> R;
    ConstructController* cc = getConstructController();
    Alloc a(cc);
    {
        cc->reset();
        C c(a);
        int index = 1;
        {
          PRINT("Testing C::emplace(Pp&&) with Pp = const ValueTp&");
          const int my_index = index++;
          const ValueTp v(my_index, 1);
          cc->expect<const ValueTp&>();
          assert(c.emplace(v).second);
          assert(!cc->unchecked());
          {
            DisableAllocationGuard g;
            const ValueTp v2(my_index, 1);
            assert(c.emplace(v2).second == false);
          }
        }
        c.clear();
        {
          PRINT("Testing C::emplace(Pp&&) with Pp = ValueTp&");
          const int my_index = index++;
          ValueTp v(my_index, 1);
          cc->expect<ValueTp&>();
          assert(c.emplace(v).second);
          assert(!cc->unchecked());
          {
            DisableAllocationGuard g;
            ValueTp v2(my_index, 1);
            assert(c.emplace(v2).second == false);
          }
        }
        c.clear();
        {
          PRINT("Testing C::emplace(Pp&&) with Pp = ValueTp&&");
          const int my_index = index++;
          ValueTp v(my_index, 1);
          cc->expect<ValueTp&&>();
          assert(c.emplace(std::move(v)).second);
          assert(!cc->unchecked());
          {
            DisableAllocationGuard g;
            ValueTp v2(my_index, 1);
            assert(c.emplace(std::move(v2)).second == false);
          }
        }
        c.clear();
        {
          PRINT("Testing C::emplace(Pp&&) with Pp = ValueTp const&&");
          const int my_index = index++;
          const ValueTp v(my_index, 1);
          cc->expect<ValueTp const&&>();
          assert(c.emplace(std::move(v)).second);
          assert(!cc->unchecked());
          {
            DisableAllocationGuard g;
            const ValueTp v2(my_index, 1);
            assert(c.emplace(std::move(v2)).second == false);
          }
        }
        c.clear();
        {
          PRINT("Testing C::emplace(Args&&...) with Args = [First const&, Second const&]");
          const int my_index = index++;
          const ValueTp v(my_index, 1);
          cc->expect<first_type const&, second_type const&>();
          assert(c.emplace(v.first, v.second).second);
          assert(!cc->unchecked());
          {
            DisableAllocationGuard g;
            const ValueTp v2(my_index, 1);
            assert(c.emplace(v2.first, v2.second).second == false);
          }
        }
        c.clear();
        {
          PRINT("Testing C::emplace(Args&&...) with Args = [First&, Second&]");
          const int my_index = index++;
          ValueTp v(my_index, 1);
          cc->expect<first_type&, second_type&>();
          assert(c.emplace(v.first, v.second).second);
          assert(!cc->unchecked());
          {
            DisableAllocationGuard g;
            ValueTp v2(my_index, 1);
            assert(c.emplace(v2.first, v2.second).second == false);
          }
        }
        c.clear();
        {
          PRINT("Testing C::emplace(Args&&...) with Args = [First&&, Second&&]");
          const int my_index = index++;
          ValueTp v(my_index, 1);
          cc->expect<first_type&&, second_type&&>();
          assert(c.emplace(std::move(v.first), std::move(v.second)).second);
          assert(!cc->unchecked());
          {
            DisableAllocationGuard g;
            ValueTp v2(my_index, 1);
            assert(c.emplace(std::move(v2.first), std::move(v2.second)).second == false);
          }
        }
    }
}


int main()
{
  {
    typedef CopyInsertable<1> Key;
    typedef CopyInsertable<2> Value;
    typedef std::pair<const Key, Value> ValueTp;
    typedef std::unordered_map<Key, Value, std::hash<Key>, std::equal_to<Key>,
                                ContainerTestAllocator<ValueTp, ValueTp>
        > Container;

    typedef std::unordered_set<Value, std::hash<Value>, std::equal_to<Value>,
                                ContainerTestAllocator<Value, Value>
        > Set1;

    PRINT("Testing Map");
    testContainerInsertAndEmplaceValueType<Container>();
    testMapInsertAndEmplaceOtherType<Container, std::pair<Key, Value> >();
    testMapInsertAndEmplaceOtherType<Container, std::pair<Key, int> >();
    testMapInsertAndEmplaceOtherType<Container, std::pair<const Key, int> >();

    PRINT("Testing Set");
    testContainerInsertAndEmplaceValueType<Set1>();
  }
}