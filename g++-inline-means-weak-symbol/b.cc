#include <stdio.h>
void normal_function() {}
inline void inline_function() { puts("from b.cc"); }
void inline_function_helper() { inline_function(); }
