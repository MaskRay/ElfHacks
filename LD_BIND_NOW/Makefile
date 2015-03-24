SHELL := /bin/zsh
.PHONY: clean gdb show

all: a libb.so
libb.so: b.c
	gcc -shared $< -o $@
a: a.c libb.so
	gcc -g $< -L. -lb -o $@
show:
	@:
gdb: all
	@./gdb.exp 0x$$(readelf -Wr a | grep foo | awk '{print $$1}')
clean:
	$(RM) a libb.so
