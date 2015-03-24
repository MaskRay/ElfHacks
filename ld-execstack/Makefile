SHELL := /bin/zsh
.PHONY: clean gdb show

all: a aa
a: a.c
	gcc -g $< -o $@
aa: a.c
	gcc -g -Wl,-z,execstack $< -o $@
show: all
	readelf -Wl a | egrep --color '^|.*GNU_STACK.*'
	readelf -Wl aa | egrep --color '^|.*GNU_STACK.*'
	diff <(readelf -Wa a) <(readelf -Wa aa) || :
gdb:
	@:
clean:
	$(RM) a aa
