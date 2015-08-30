#include <stddef.h>
#include <vector>

ptrdiff_t f(int x)
{
  std::vector<int> v;
  return (ptrdiff_t)&v & x;
}
