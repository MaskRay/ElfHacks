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
	ldd a | egrep --color '^|.*libb.*'
	ldd aa
	nm a | grep --color '.*foo.*'
	nm aa | grep --color '.*foo.*'
gdb:
	@:
clean:
	$(RM) a aa libb.so libb.a
