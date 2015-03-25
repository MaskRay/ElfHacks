#include <stdio.h>
int bar() { puts("foo points to bar"); return 0; }
int foo() __attribute__((alias("bar")));
int main() { return foo(); }
