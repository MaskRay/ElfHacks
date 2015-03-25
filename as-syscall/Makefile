SHELL := /bin/zsh
.PHONY: clean gdb show

all: a
a.o: a.s
	as $< -o $@
a: a.o
	ld $< -o $@
show: all
	strace ./a
gdb:
	@:
clean:
	$(RM) a.o a
