SHELL := /bin/zsh
.PHONY: clean gdb show

all: a
show: all
	nm -C a | egrep --color '^|.*(foo|bar).*'
gdb:
	@:
clean:
	$(RM) a
