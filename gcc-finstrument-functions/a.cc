#include <cxxabi.h>
#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>

__attribute__((no_instrument_function))
void __cyg_profile_func_enter(void *this_fn, void *call_site)
{
  Dl_info info;
  if (dladdr(this_fn, &info)) {
    int status;
    char *demangled = abi::__cxa_demangle(info.dli_sname, NULL, NULL, &status);
    if (status == 0 && demangled) {
      printf("this_fn:%p(%s) call_site:%p\n", this_fn, demangled, call_site);
      free(demangled);
    }
  }
}

__attribute__((no_instrument_function))
void __cyg_profile_func_exit(void *this_fn, void *call_site)
{
}

void foo()
{
  puts("meow");
}

int main()
{
  foo();
  foo();
}
