SHELL := /bin/zsh
.PHONY: clean gdb show

all:
show: all
	objdump -dj.plt /bin/bash | egrep --color '.*fopen.*'
gdb:
	@:
clean:
	$(RM) a
