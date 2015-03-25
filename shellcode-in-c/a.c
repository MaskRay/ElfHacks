void _start()
{
  volatile int i;
  int a[4] = {1,2,3,4};
  for (i = 10; i--; )
    a[0] *= a[2], a[1] += a[2], a[2]--, a[3] -= a[0];
  asm volatile("xorl %%eax, %%eax\n" ::"b"(a[0]), "D"(a[3]));
}
