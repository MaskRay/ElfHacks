int used_by_b_so(); // from main program
extern "C" int foo_impl() { return 0x12131213 + used_by_b_so(); }
