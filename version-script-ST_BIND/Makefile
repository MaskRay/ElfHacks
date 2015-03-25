SHELL := /bin/zsh
CFLAGS += -g3
.PHONY: clean gdb show

all: a
a: a.cc
	g++ $< -Wl,--version-script,a.map -o $@
show: all
	nm -C a | egrep --color ' \w (A|foo|bar|baz|qux).*'
gdb: all
	@:
clean:
	$(RM) a
