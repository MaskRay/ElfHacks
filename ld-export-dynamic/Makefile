SHELL := /bin/zsh
.PHONY: clean gdb show

all: a aa libb.so
libb.so: b.c
	gcc -shared -fPIC $< -o $@
aa.o: a.c
	gcc $< -c -o $@
a: a.o
	gcc $< -ldl -o $@
aa: aa.o
	gcc -Wl,--export-dynamic $< -ldl -o $@
show: all
	LD_LIBRARY_PATH=. ./a
	LD_LIBRARY_PATH=. ./aa
gdb:
	@:
clean:
	$(RM) a aa a.o aa.o libb.so
