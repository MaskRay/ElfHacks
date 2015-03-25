#include <stdio.h>
int foo();
int main() { puts("LD_LIBRARY_PATH=. is not needed"); return foo(); }
