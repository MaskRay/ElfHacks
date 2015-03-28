SHELL := /bin/zsh
.PHONY: clean gdb show

all: a aa
a: CFLAGS=-g
aa: a.c
	gcc -g -fomit-frame-pointer $< -o $@
show: all
	objdump -S a aa | grep -A5 __builtin_return_address
gdb:
	@:
clean:
	$(RM) a aa
