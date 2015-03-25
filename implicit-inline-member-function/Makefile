SHELL := /bin/zsh
.PHONY: clean gdb show

all: a
show: all
	nm -C a | egrep --color '^|.*foo.*'
gdb:
	@:
clean:
	$(RM) a
