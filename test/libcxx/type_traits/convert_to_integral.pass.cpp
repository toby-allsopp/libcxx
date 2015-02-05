
#include <type_traits>
#include <cstdint>
#include <cassert>

template <class T>
struct EnumType
{
  enum type : T {E_zero, E_one};
};

template <class T>
struct UDT
{
  operator T() const { return ((T)1); }
};

template <class From, class To>
void check_integral_types()
{
  auto ret = std::__convert_to_integral((From)1);
  assert(ret == 1);
  static_assert(std::is_same<decltype(ret), To>::value, "");

  UDT<From> f;
  auto ret2 = std::__convert_to_integral(f);
  assert(ret2 == 1);
  static_assert(std::is_same<decltype(ret2), To>::value, "");

  typedef typename EnumType<From>::type Enum;
  Enum e(Enum::E_one);
  auto ret3 = std::__convert_to_integral(e);
  assert(ret3 == 1);
  static_assert(std::is_same<decltype(ret3), To>::value, "");
}


template <class From, class To>
void check_enum_types()
{
  auto ret = std::__convert_to_integral((From)1);
  assert(ret == 1);
  static_assert(std::is_same<decltype(ret), To>::value, "");
}


enum enum1 {};

int main()
{
  check_integral_types<bool, int>();
  check_integral_types<char, int>();
  check_integral_types<signed char, int>();
  check_integral_types<unsigned char, int>();
  check_integral_types<wchar_t, int>();
  check_integral_types<char16_t, int>();
  check_integral_types<char32_t, uint32_t>();
  check_integral_types<short, int>();
  check_integral_types<unsigned short, int>();
  check_integral_types<int, int>();
  check_integral_types<unsigned, unsigned>();
  check_integral_types<long, long>();
  check_integral_types<unsigned long, unsigned long>();
  check_integral_types<long long, long long>();
  check_integral_types<unsigned long long, unsigned long long>();
  // TODO(ericwf): Not standard
  check_enum_types<enum1, unsigned>();
}