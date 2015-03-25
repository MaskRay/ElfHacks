class A
{
public:
  // implicit inline, weak symbol
  void foo() {
  }
  // normal
  void bar();
};

void A::bar() {}

int main()
{
  A a;
  a.foo();
  a.bar();
}
