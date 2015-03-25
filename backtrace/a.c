#include <execinfo.h>

void foo()
{
  void *trace[128];
  int n = backtrace(trace, sizeof trace / sizeof *trace);
  backtrace_symbols_fd(trace, n, 1);
}

int main()
{
  foo();
  return 0;
}
