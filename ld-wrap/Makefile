SHELL := /bin/zsh
.PHONY: clean gdb show

all: a
a: a.c
	gcc $< -Wl,--wrap,puts -o $@
show: all
	./a
gdb: all
	@:
clean:
	$(RM) a
