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

// template <class P,
//           class = typename enable_if<is_convertible<P, value_type>::value>::type>
//     pair<iterator, bool> insert(P&& x);

#include <unordered_map>
#include <cassert>

#include "MoveOnly.h"
#include "min_allocator.h"
#include "test_macros.h"
#include "test_types.h"
#include "count_new.hpp"

int main()
{
    {
        typedef std::unordered_map<double, int> C;
        typedef std::pair<C::iterator, bool> R;
        typedef std::pair<double, short> P;
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
        typedef std::unordered_map<MoveOnly, MoveOnly> C;
        typedef std::pair<C::iterator, bool> R;
        typedef std::pair<MoveOnly, MoveOnly> P;
        C c;
        R r = c.insert(P(3, 3));
        assert(r.second);
        assert(c.size() == 1);
        assert(r.first->first == 3);
        assert(r.first->second == 3);

        r = c.insert(P(3, 4));
        assert(!r.second);
        assert(c.size() == 1);
        assert(r.first->first == 3);
        assert(r.first->second == 3);

        r = c.insert(P(4, 4));
        assert(r.second);
        assert(c.size() == 2);
        assert(r.first->first == 4);
        assert(r.first->second == 4);

        r = c.insert(P(5, 4));
        assert(r.second);
        assert(c.size() == 3);
        assert(r.first->first == 5);
        assert(r.first->second == 4);
    }
    {
        typedef std::unordered_map<double, int, std::hash<double>, std::equal_to<double>,
                            min_allocator<std::pair<const double, int>>> C;
        typedef std::pair<C::iterator, bool> R;
        typedef std::pair<double, short> P;
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
    {
        typedef std::unordered_map<MoveOnly, MoveOnly, std::hash<MoveOnly>, std::equal_to<MoveOnly>,
                            min_allocator<std::pair<const MoveOnly, MoveOnly>>> C;
        typedef std::pair<C::iterator, bool> R;
        typedef std::pair<MoveOnly, MoveOnly> P;
        C c;
        R r = c.insert(P(3, 3));
        assert(r.second);
        assert(c.size() == 1);
        assert(r.first->first == 3);
        assert(r.first->second == 3);

        r = c.insert(P(3, 4));
        assert(!r.second);
        assert(c.size() == 1);
        assert(r.first->first == 3);
        assert(r.first->second == 3);

        r = c.insert(P(4, 4));
        assert(r.second);
        assert(c.size() == 2);
        assert(r.first->first == 4);
        assert(r.first->second == 4);

        r = c.insert(P(5, 4));
        assert(r.second);
        assert(c.size() == 3);
        assert(r.first->first == 5);
        assert(r.first->second == 4);
    }
    {
        typedef CountingType<0> Key;
        typedef CountingType<1> Value;
        typedef std::pair<const Key, Value> ValueTp;
        typedef std::unordered_map<Key, Value> C;
        typedef std::pair<C::iterator, bool> R;
        C c;
        ValueTp p; // non-const rvalue
        p.first.allow_copies = 1;
        p.second.allow_moves = 1;
        R r = c.insert(std::move(p));
        assert(r.second);
        {
            DisableAllocationGuard g;
            p.first.reset();
            p.first.allow_copies = 1;
            p.second.reset();
            p.second.data = 0;
            p.second.allow_moves = 1;
            r = c.insert(std::move(p));
            assert(!r.second);
        }
        const ValueTp p2; // non-const lvalue
        p2.first.data = 42;
        p2.first.allow_copies = 1;
        p2.second.allow_copies = 1;
        r = c.insert(std::move(p2));
        assert(r.second);
        {
            DisableAllocationGuard g;
            r = c.insert(std::move(p2));
            assert(!r.second);
        }
    }
#endif
}
