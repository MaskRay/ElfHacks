SHELL := /bin/zsh
.PHONY: clean gdb show

all: a aa
a: a.c
	gcc -g $< -o $@
aa: a.c
	gcc -g -static $< -o $@
show: all
	file a
	file aa
	readelf -Wl a | grep -A1 INTERP
	readelf -Wl aa | grep INTERP || :
gdb:
	@:
clean:
	$(RM) a aa
