#include <stdio.h>
int defined_in_main(); // from the main program
int foo()
{
  printf("%p\n", defined_in_main);
  return 1;
}
