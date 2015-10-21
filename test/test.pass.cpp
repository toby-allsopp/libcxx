#include <tuple>

struct A
{
  template <typename T>
  A(T)
  {
  }

  A(const A&) = default;
  A(A&&) = default;
  A& operator=(const A&) = default;
  A& operator=(A&&) = default;
  ~A() = default;
};

int main()
{
  auto x = A{7};
  std::make_tuple(x);
}
