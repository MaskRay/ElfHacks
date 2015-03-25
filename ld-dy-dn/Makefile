SHELL := /bin/zsh
.PHONY: clean gdb show

all: a aa
b.o: CFLAGS=-fPIC
libb.so: b.o
	gcc -shared $< -o $@
libb.a: b.o
	ar rcs $@ $<
a: a.c
	gcc $< -Wl,-dy -L. -lb -o $@ # -dy is default
aa: a.c
	gcc $< -Wl,-dn -L. -lb -Wl,-dy -o $@
show: all
	ldd a
	ldd aa
	nm a | grep foo
	nm aa | grep foo
gdb:
	@:
clean:
	$(RM) a aa libb.so libb.a
