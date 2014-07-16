//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/memory_resource>

// template <class T> class polymorphic_allocator

// template <class U>
// void polymorphic_allocator<T>::destroy(U * ptr);

#include <experimental/memory_resource>
#include <type_traits>
#include <cassert>

#if _LIBCPP_STD_VER > 11

namespace ex = std::experimental::pmr;

int count = 0; 

struct destroyable
{
    destroyable() { ++count; }
    ~destroyable() { --count; }
};

int main()
{
    typedef ex::polymorphic_allocator<float> A;
    {
        A a;
        static_assert(
            std::is_same<decltype(a.destroy((destroyable*)nullptr)), void>::value
          , ""
          );
    }
    {
        destroyable * ptr = new destroyable();
        assert(count == 1);
        A a;
        a.destroy(ptr);
        assert(count == 0);
    }
}
#else /* _LIBCPP_STD_VER <= 11 */
int main() {}
#endif /* _LIBCPP_STD_VER > 11 */
