SHELL := /bin/zsh
.PHONY: clean gdb show

all: a
a: a.c
	gcc -g -fPIE -pie $< -o $@
show: all
	objdump -Mintel -S a | grep -A2 --color '\<main\|bar'
gdb:
	@:
clean:
	$(RM) a
