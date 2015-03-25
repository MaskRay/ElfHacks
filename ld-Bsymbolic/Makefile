SHELL := /bin/zsh
.PHONY: clean gdb show

all: libb.so libbb.so
libb.so: b.c
	gcc -g -shared -fPIC $< -o $@
libbb.so: b.c
	gcc -g -shared -fPIC -Wl,-Bsymbolic $< -o $@
show: all
	objdump -Mintel -S libb.so | egrep --color -C 3 '.*foo.*|.*bar.*'
	objdump -Mintel -S libbb.so | egrep --color -C 3 '.*foo.*|.*bar.*'
gdb:
	@:
clean:
	$(RM) lib{b,bb}.so
