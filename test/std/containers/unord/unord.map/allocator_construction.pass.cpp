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
#include <map>
#include <cassert>

#include "count_new.hpp"
#include "min_allocator.h"
#include "test_macros.h"
#include "test_types.h"

template <class Container>
void testContainer()
{
    typedef typename Container::value_type ValueTp;
    typedef test_construct_allocator<ValueTp, ValueTp> Alloc;
    typedef Container C;
    typedef typename C::allocator_type Alloc;
    typedef std::pair<typename C::iterator, bool> R;
    ConstructController* cc = getGlobalController();
    Alloc a(cc);
    {
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
          ValueTp ValueList[] = { {1, 1}, {2, 1} , {3, 1} };
          cc->expect<ValueTp&&>(3);
          c.insert(std::move_iterator<ValueTp*>(std::begin(ValueList)),
                   std::move_iterator<ValueTp*>(std::end(ValueList)));
          assert(!cc->unchecked());
          {
            //ValueTp ValueList[] = { {1, 1}, {2, 1} , {3, 1} };
            DisableAllocationGuard g;
            ValueTp ValueList2[] = { {1, 1}, {2, 1} , {3, 1} };
            c.insert(std::move_iterator<ValueTp*>(std::begin(ValueList2)),
                     std::move_iterator<ValueTp*>(std::end(ValueList2)));
          }
        }
        c.clear();
        {
          ValueTp ValueList[] = { {1, 1}, {2, 1} , {3, 1} };
          cc->expect<ValueTp const&>(3);
          c.insert(std::begin(ValueList), std::end(ValueList));
          assert(!cc->unchecked());
          {
            DisableAllocationGuard g;
            c.insert(std::begin(ValueList), std::end(ValueList));
          }
        }
        /*
        {
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
         */
    }
}

int main()
{
  {
    typedef CopyInsertible<1> Key;
    typedef CopyInsertible<2> Value;
    typedef std::pair<const Key, Value> ValueTp;
    typedef std::unordered_map<Key, Value, DataHasher<Key>, std::equal_to<Key>,
                                test_construct_allocator<ValueTp, ValueTp>
        > Container;
    typedef std::unordered_set<Value, DataHasher<Value>, std::equal_to<Value>,
                                test_construct_allocator<Value, Value>
        > Container2;
    typedef std::map<Key, Value, std::less<Key>,
                                test_construct_allocator<ValueTp, ValueTp>
        > Container3;

    testContainer<Container>();
    testContainer<Container2>();
  }
}