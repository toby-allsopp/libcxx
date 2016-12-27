#include <map>
#include <cassert>

#include "test_macros.h"

int main() {
  using M = std::map<int, int>;
  using PP = M::__parent_pointer;
  using NBP = M::__node_base_pointer;
  M m;
  M const& cm = m; ((void)cm);
  DoNotOptimize(&m);
  PP parent;
  auto child = m.__find_equal_key(parent, 1);
  assert(child == nullptr);
  m.emplace(1, 0);
  DoNotOptimize(&m[1]);
  parent = nullptr;
  child = m.__find_equal_key(parent, 1);
  assert(child != nullptr);
  child = m.__find_equal_key(parent, 0);
  assert(child == nullptr);
  child = m.__find_equal_key(parent, 2);
  assert(child == nullptr);
  ClobberMemory();
}
