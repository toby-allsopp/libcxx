//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <experimental/memory_resource>

// memory_resource * get_default_resource()
// memory_resource * set_default_resource(memory_resource*)

#include <experimental/memory_resource>
#include <type_traits>
#include <memory>
#include <new>
#include <cassert>
#include <cstdlib>

#if _LIBCPP_STD_VER > 11

namespace ex = std::experimental::pmr;

void test_get()
{
    {
        static_assert(noexcept(ex::get_default_resource()), "");
        static_assert(
            std::is_same<decltype(ex::get_default_resource()), ex::memory_resource*>::value
          , ""
          );
    }
    {
        assert(ex::get_default_resource());
        assert(ex::get_default_resource() == ex::get_default_resource());
        assert(*ex::get_default_resource() == *ex::get_default_resource());
    }
    {
        assert(ex::get_default_resource() == ex::new_delete_resource());
    }
}

void test_set()
{
    ex::memory_resource * res_ptr = (ex::memory_resource*)42;

    ex::memory_resource * old_ptr = ex::set_default_resource(res_ptr);
    assert(old_ptr == ex::new_delete_resource());
    assert(res_ptr == ex::get_default_resource());

    old_ptr = ex::set_default_resource(nullptr);
    assert(old_ptr == res_ptr);
    assert(ex::get_default_resource() == ex::new_delete_resource());
}

int main()
{
    test_get();
    test_set();
}
#else /* _LIBCPP_STD_VER <= 11 */
int main() {}
#endif /* _LIBCPP_STD_VER > 11 */
