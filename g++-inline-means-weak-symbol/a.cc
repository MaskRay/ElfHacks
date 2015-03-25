#include <stdio.h>
void inline_function_helper(); // defined in b.cc
void inline_function() { puts("inline_function from b.cc becomes a weak symbol, thus the definition in a.cc overrides that. "); }
int main()
{
  inline_function_helper();
}
