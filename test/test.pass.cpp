
#include <cassert>
#if 1
#include <memory>
#else
#include <compressed_pair>
#endif

struct E1 {};
struct E2 {};
struct NE1 { int z; };
struct NE2 { int value; };

int main() {
  using CP = std::__compressed_pair<NE1, E1>;
  CP p;
  assert(((char*)&p) == ((char*)&p.first()));
  assert(((char*)&p) == ((char*)&p.second()));
}
