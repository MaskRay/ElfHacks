SHELL := /bin/zsh
.PHONY: clean gdb show

all: a
a.o: CFLAGS=-g -std=c11
foo.o: foo.txt
	objcopy -I binary -O elf64-x86-64 -B i386 $< $@
a: a.o foo.o
show:
	@:
gdb:
	@:
clean:
	$(RM) a.o foo.o a
