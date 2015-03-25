SHELL := /bin/zsh
.PHONY: clean gdb show

all: libb.so libbb.so
b.o: CFLAGS=-fPIC
libb.a: b.o
	ar rcs $@ $<
libb.so: libb.a
	gcc -shared $< -o $@
libbb.so: libb.a
	gcc -shared -Wl,--whole-archive $< -Wl,--no-whole-archive -o $@
show: all
	readelf -c libb.a
	nm -D libb.so | egrep --color 'foo|bar|baz' || :
	nm -D libbb.so | egrep --color 'foo|bar|baz'
gdb:
	@:
clean:
	$(RM) b.o libb.so libbb.so libb.a
