#include <dlfcn.h>
#include <stdio.h>
int defined_in_main() { return 1; }
int main()
{
  void *handle = dlopen("libb.so", RTLD_LAZY);
  char *err = dlerror();
  if (err)
    puts(err);
  else
    printf("libb.so loaded: %p\n", handle);
  return 0;
}
