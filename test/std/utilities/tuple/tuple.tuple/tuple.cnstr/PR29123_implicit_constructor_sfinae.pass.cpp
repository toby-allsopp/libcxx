// repro.cpp
// this is minimized code from folly library
#include<tuple>

template<class Value>
struct Optional {
  Optional() = default;
  // implicit
  Optional(const Value&) {}
};

struct dynamic {
  // implicit
  template<class T> dynamic(T) {}
};

Optional<std::tuple<dynamic>> get() { return {}; }

int main() {
  auto x = get();
}
