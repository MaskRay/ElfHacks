#include <stdio.h>

void foo_real()
{
  puts("a");
}

asm(".type foo_indirect, %gnu_indirect_function");
void *foo_indirect(unsigned long hwcap)
{
  return &foo_real;
}

void foo() __attribute__((alias("foo_indirect")));

int main()
{
  foo();
  foo();
}
