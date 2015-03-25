#include <asm/unistd.h>
#include <unistd.h>

void _start()
{
  static const char buf[] = "hello\n";
  const size_t len = 6;
  asm volatile("syscall" :: "a"(__NR_write), "D"(STDOUT_FILENO), "S"(buf), "d"(len) : "cc","memory","rcx","r11");
  asm volatile("syscall" :: "a"(__NR_exit), "D"(0));
}
