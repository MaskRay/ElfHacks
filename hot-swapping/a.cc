#include <dlfcn.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void *hb, *hc;
void *ptr_foo, *ptr_bar;

// wrapper of function implemented in b.so
int foo() { return ((typeof(&foo))ptr_foo)(); }
// wrapper of function implemented in c.so
int bar() { return ((typeof(&bar))ptr_bar)(); }

void reload()
{
  if (hb) dlclose(hb);
  if (hc) dlclose(hc);
  hb = dlopen("./b.so", RTLD_LAZY | RTLD_GLOBAL);
  hc = dlopen("./c.so", RTLD_LAZY | RTLD_GLOBAL);
  ptr_foo = dlsym(hb, "foo_impl");
  ptr_bar = dlsym(hc, "bar_impl");
}

void sigint(int)
{
  reload();
}

int used_by_b_so() { return 1; } // -rdynamic to export to dynamic symbol table

int main()
{
  signal(SIGINT, sigint);

  reload();
  printf("foo()=%d bar()=%d\n", foo(), bar());
  // wait for changes of b.so/c.so
  sleep(100); // would be interrupted by SIGINT
  puts("after reload");
  printf("foo()=%d bar()=%d\n", foo(), bar());
}
