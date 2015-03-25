#include <stdio.h>
int __real_puts(const char *s);
int __wrap_puts(const char *s)
{
  static int c = 0;
  printf("puts tally: %d\n", ++c);
  return __real_puts(s);
}
int main()
{
  puts("meow");
  puts("meow");
  puts("meow");
  return 0;
}
