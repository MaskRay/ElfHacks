#include <stdio.h>
int main()
{
  int dummy[99];
  printf("%p\n", __builtin_return_address(0));
  return 0;
}
