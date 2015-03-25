SHELL := /bin/zsh
.PHONY: clean gdb show

all: a
a.o: a.s
	as --32 $< -o $@
a: a.o
	ld -melf_i386 $< -o $@
show: all
	file a
	strace ./a
gdb: all
	@:
clean:
	$(RM) a.o a
