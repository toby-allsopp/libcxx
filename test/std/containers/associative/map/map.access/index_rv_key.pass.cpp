//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// UNSUPPORTED: c++98, c++03

// <map>

// class map

// mapped_type& operator[](key_type&& k);

#include <map>
#include <cassert>

#include "test_macros.h"
#include "MoveOnly.h"
#include "min_allocator.h"

int main()
{
    {
    std::map<MoveOnly, double> m;
    DoNotOptimize(m);
    assert(m.size() == 0);
    assert(m[1] == 0.0);
    assert(m.size() == 1);
    m[1] = -1.5;
    assert(m[1] == -1.5);
    assert(m.size() == 1);
    assert(m[6] == 0);
    assert(m.size() == 2);
    m[6] = 6.5;
    assert(m[6] == 6.5);
    assert(m.size() == 2);
    ClobberMemory();
    }
    {
    typedef std::pair<const MoveOnly, double> V;
    std::map<MoveOnly, double, std::less<MoveOnly>, min_allocator<V>> m;
    assert(m.size() == 0);
    assert(m[1] == 0.0);
    assert(m.size() == 1);
    m[1] = -1.5;
    assert(m[1] == -1.5);
    assert(m.size() == 1);
    assert(m[6] == 0);
    assert(m.size() == 2);
    m[6] = 6.5;
    assert(m[6] == 6.5);
    assert(m.size() == 2);
    }
}
