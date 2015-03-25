SHELL := /bin/zsh
.PHONY: clean gdb show

all: a aa
aa: a.c
	gcc -g -Wl,--export-dynamic $< -o $@
show: all
	nm -D a
	nm -D aa
gdb:
	@:
clean:
	$(RM) a aa
