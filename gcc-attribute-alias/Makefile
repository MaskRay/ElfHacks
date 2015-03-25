SHELL := /bin/zsh
.PHONY: clean gdb show

all: a
show: all
	nm a | egrep --color '^|.*(foo|bar).*'
	./a
gdb:
	@:
clean:
	$(RM) a
