void foo() {}
extern "C" void bar() {}
void baz() {}
extern "C" void qux() {}
struct A { void global() {} void global2(int x) {} void local() {} };
int main() { A a; a.global(); a.global2(0); a.local(); }
