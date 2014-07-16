//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#ifndef USES_ALLOC_TYPES_HPP
#define USES_ALLOC_TYPES_HPP

# include <experimental/memory_resource>
# include <experimental/utility>
# include <memory>
# include <cassert>

#if _LIBCPP_STD_VER > 11

////////////////////////////////////////////////////////////////////////////////
class reg_not_uses_alloc
{
public:
    static int value_count;
    static int alloc_count;
    static void reset() { value_count = 0; alloc_count = 0; }
    int x{};

    reg_not_uses_alloc() {}
    explicit reg_not_uses_alloc(int xx) : x(xx) { ++value_count; }
    reg_not_uses_alloc(std::allocator_arg_t, std::allocator<reg_not_uses_alloc> const &, int xx) : x(xx) { ++alloc_count; }
};

int reg_not_uses_alloc::value_count = 0;
int reg_not_uses_alloc::alloc_count = 0;

static_assert(
    !std::experimental::__lfts_uses_allocator<reg_not_uses_alloc, std::allocator<reg_not_uses_alloc>>::value
  , ""
  );

static_assert(
    !std::experimental::__lfts_uses_allocator<reg_not_uses_alloc, std::experimental::erased_type*>::value
  , ""
  );

////////////////////////////////////////////////////////////////////////////////
class erased_not_uses_alloc
{
public:
    static int value_count;
    static int alloc_count;
    static void reset() { value_count = 0; alloc_count = 0; }
    int x{};

    erased_not_uses_alloc() {}
    explicit erased_not_uses_alloc(int xx) : x(xx) { ++value_count; }

    erased_not_uses_alloc(std::allocator_arg_t
      , std::experimental::pmr::memory_resource*, int xx) : x(xx)
      { ++alloc_count; }
};

int erased_not_uses_alloc::value_count = 0;
int erased_not_uses_alloc::alloc_count = 0;

static_assert(
    !std::experimental::__lfts_uses_allocator<erased_not_uses_alloc, std::allocator<erased_not_uses_alloc>>::value
  , ""
  );

static_assert(
    !std::experimental::__lfts_uses_allocator<erased_not_uses_alloc, std::experimental::erased_type*>::value
  , ""
  );

////////////////////////////////////////////////////////////////////////////////
class reg_uses_alloc_1
{
public:
    typedef std::allocator<reg_uses_alloc_1> allocator_type;

    static int value_count;
    static int alloc_count;
    static void reset() { value_count = 0; alloc_count = 0; }
    int x{};

    reg_uses_alloc_1() {}
    explicit reg_uses_alloc_1(int xx) : x(xx) { ++value_count; }
    reg_uses_alloc_1(std::allocator_arg_t, allocator_type const &, int xx) : x(xx) { ++alloc_count; }
};

int reg_uses_alloc_1::value_count = 0;
int reg_uses_alloc_1::alloc_count = 0;

static_assert(
    std::experimental::__lfts_uses_allocator<reg_uses_alloc_1, std::allocator<reg_uses_alloc_1>>::value
  , ""
  );

static_assert(
    !std::experimental::__lfts_uses_allocator<reg_uses_alloc_1, std::experimental::erased_type*>::value
  , ""
  );

////////////////////////////////////////////////////////////////////////////////
class reg_uses_alloc_2
{
public:
    typedef std::allocator<reg_uses_alloc_2> allocator_type;

    static int value_count;
    static int alloc_count;
    static void reset() { value_count = 0; alloc_count = 0; }
    int x{};

    reg_uses_alloc_2() {}
    explicit reg_uses_alloc_2(int xx) : x(xx) { ++value_count; }
    reg_uses_alloc_2(int xx, allocator_type const &) : x(xx) { ++alloc_count; }
};

int reg_uses_alloc_2::value_count = 0;
int reg_uses_alloc_2::alloc_count = 0;

static_assert(
    std::experimental::__lfts_uses_allocator<reg_uses_alloc_2, std::allocator<reg_uses_alloc_2>>::value
  , ""
  );

static_assert(
    !std::experimental::__lfts_uses_allocator<reg_uses_alloc_2, std::experimental::erased_type*>::value
  , ""
  );

////////////////////////////////////////////////////////////////////////////////
class reg_uses_alloc_3
{
public:
    typedef std::allocator<reg_uses_alloc_3> allocator_type;

    static int value_count;
    static int alloc_count;
    static void reset() { value_count = 0; alloc_count = 0; }
    int x{};

    reg_uses_alloc_3() {}
    explicit reg_uses_alloc_3(int xx) : x(xx) { ++value_count; }
    reg_uses_alloc_3(std::allocator_arg_t, allocator_type const &, int xx) : x(xx) { ++alloc_count; }
    reg_uses_alloc_3(int, allocator_type const &) { assert(false); }
};

int reg_uses_alloc_3::value_count = 0;
int reg_uses_alloc_3::alloc_count = 0;

static_assert(
    std::experimental::__lfts_uses_allocator<reg_uses_alloc_3, std::allocator<reg_uses_alloc_3>>::value
  , ""
  );

static_assert(
    !std::experimental::__lfts_uses_allocator<reg_uses_alloc_3, std::experimental::erased_type*>::value
  , ""
  );

  ////////////////////////////////////////////////////////////////////////////////
class erased_uses_alloc_1
{
public:
    typedef std::experimental::erased_type allocator_type;

    static int value_count;
    static int alloc_count;
    static void reset() { value_count = 0; alloc_count = 0; }
    int x{};

    erased_uses_alloc_1() {}

    explicit erased_uses_alloc_1(int xx) : x(xx) { ++value_count; }

    erased_uses_alloc_1(std::allocator_arg_t
      , std::experimental::pmr::memory_resource*, int xx) : x(xx)
      { ++alloc_count; }
};

int erased_uses_alloc_1::value_count = 0;
int erased_uses_alloc_1::alloc_count = 0;

static_assert(
    std::experimental::__lfts_uses_allocator<erased_uses_alloc_1, void>::value
  , ""
  );

////////////////////////////////////////////////////////////////////////////////
class erased_uses_alloc_2
{
public:
    typedef std::experimental::erased_type allocator_type;

    static int value_count;
    static int alloc_count;
    static void reset() { value_count = 0; alloc_count = 0; }
    int x{};

    erased_uses_alloc_2() {}
    explicit erased_uses_alloc_2(int xx) : x(xx) { ++value_count; }
    erased_uses_alloc_2(int xx
      , std::experimental::pmr::memory_resource*) : x(xx)
      { ++alloc_count; }
};

int erased_uses_alloc_2::value_count = 0;
int erased_uses_alloc_2::alloc_count = 0;

static_assert(
    std::experimental::__lfts_uses_allocator<erased_uses_alloc_2, void>::value
  , ""
  );

////////////////////////////////////////////////////////////////////////////////
class erased_uses_alloc_3
{
public:
    typedef std::experimental::erased_type allocator_type;

    static int value_count;
    static int alloc_count;
    static void reset() { value_count = 0; alloc_count = 0; }
    int x{};

    erased_uses_alloc_3() {}

    explicit erased_uses_alloc_3(int xx) : x(xx) { ++value_count; }

    erased_uses_alloc_3(std::allocator_arg_t
      , std::experimental::pmr::memory_resource*, int xx) : x(xx)
      { ++alloc_count; }

    erased_uses_alloc_3(int, std::experimental::pmr::memory_resource*)
    { assert(false); }
};

int erased_uses_alloc_3::value_count = 0;
int erased_uses_alloc_3::alloc_count = 0;

static_assert(
    std::experimental::__lfts_uses_allocator<erased_uses_alloc_3, void>::value
  , ""
  );

#endif /* _LIBCPP_STD_VER > 11 */

#endif /* USES_ALLOC_TYPES_HPP */
