SHELL := /bin/zsh
.PHONY: clean gdb show

all: a
a: CFLAGS=-g
a: LDFLAGS=-rdynamic
show: all
	./a
	./a | grep -Po '0x\w+(?=\])' | addr2line -e a
gdb:
	@:
clean:
	$(RM) a
