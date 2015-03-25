#include <stdio.h>
extern char _binary_foo_txt_start[];
extern char _binary_foo_txt_end[];
extern char _binary_foo_txt_size[];
int main()
{
  printf("size: %zd\n", (size_t)_binary_foo_txt_size);
  for (char *p = _binary_foo_txt_start; p < _binary_foo_txt_end; p++)
    putchar(*p);
  return 0;
}
