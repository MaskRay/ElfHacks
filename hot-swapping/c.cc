// functions implemented in other libraries should be called indirectly
int foo();

extern "C" int bar_impl() { return foo() + 13; }
