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
#include <cassert>

#include "min_allocator.h"
#include "test_macros.h"
#include "test_types.h"
#include "count_new.hpp"

int main()
{
    {
        typedef std::unordered_map<double, int> C;
        typedef std::pair<C::iterator, bool> R;
        typedef C::value_type P;
        C c;
        R r = c.insert(P(3.5, 3));
        assert(r.second);
        assert(c.size() == 1);
        assert(r.first->first == 3.5);
        assert(r.first->second == 3);

        r = c.insert(P(3.5, 4));
        assert(!r.second);
        assert(c.size() == 1);
        assert(r.first->first == 3.5);
        assert(r.first->second == 3);

        r = c.insert(P(4.5, 4));
        assert(r.second);
        assert(c.size() == 2);
        assert(r.first->first == 4.5);
        assert(r.first->second == 4);

        r = c.insert(P(5.5, 4));
        assert(r.second);
        assert(c.size() == 3);
        assert(r.first->first == 5.5);
        assert(r.first->second == 4);
    }
#if TEST_STD_VER >= 11
    {
        typedef std::unordered_map<double, int, std::hash<double>, std::equal_to<double>,
                            min_allocator<std::pair<const double, int>>> C;
        typedef std::pair<C::iterator, bool> R;
        typedef C::value_type P;
        C c;
        R r = c.insert(P(3.5, 3));
        assert(r.second);
        assert(c.size() == 1);
        assert(r.first->first == 3.5);
        assert(r.first->second == 3);

        r = c.insert(P(3.5, 4));
        assert(!r.second);
        assert(c.size() == 1);
        assert(r.first->first == 3.5);
        assert(r.first->second == 3);

        r = c.insert(P(4.5, 4));
        assert(r.second);
        assert(c.size() == 2);
        assert(r.first->first == 4.5);
        assert(r.first->second == 4);

        r = c.insert(P(5.5, 4));
        assert(r.second);
        assert(c.size() == 3);
        assert(r.first->first == 5.5);
        assert(r.first->second == 4);
    }
#endif
    {
        typedef CountingType<0> Key;
        typedef CountingType<1> Value;
        typedef std::pair<const Key, Value> ValueTp;
        typedef std::unordered_map<Key, Value> C;
        typedef std::pair<C::iterator, bool> R;
        C c;
        const ValueTp p; // const lvalue
        p.first.allow_copies = 1;
        p.second.allow_copies = 1;
        R r = c.insert(p);
        assert(r.second);
        {
            DisableAllocationGuard g;
            r = c.insert(p);
            assert(!r.second);
        }
        ValueTp p2; // non-const lvalue
        p2.first.data = 42;
        p2.first.allow_copies = 1;
        p2.second.allow_copies = 1;
        r = c.insert(p2);
        assert(r.second);
        {
            DisableAllocationGuard g;
            r = c.insert(p2);
            assert(!r.second);
        }
    }
    {
        typedef int Key;
        typedef int Value;
        typedef std::pair<const Key, Value> ValueTp;
        typedef test_construct_allocator<ValueTp, ValueTp> Alloc;
        typedef std::unordered_map<Key, Value, std::hash<Key>, std::equal_to<Key>, Alloc> C;
        typedef std::pair<C::iterator, bool> R;
        ConstructController cc;
        Alloc a(&cc);
        C c(a);
        const ValueTp p(42, 43); // const lvalue
        cc.expect(makeArgumentID<const ValueTp &>());
        R r = c.insert(p);
        cc.disable();
        assert(r.second);
        {
            DisableAllocationGuard g;
            ValueTp p1(42, 43);
            r = c.insert(p1);
            assert(!r.second);
        }
    }
}
