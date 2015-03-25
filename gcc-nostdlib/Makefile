SHELL := /bin/zsh
.PHONY: clean gdb show

all: a
a: a.c
	gcc $< -nostdlib -o $@
show: all
	file a
	nm a
	strace ./a
gdb:
	@:
clean:
	$(RM) a
