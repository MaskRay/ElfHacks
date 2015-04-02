SHELL := /bin/zsh
.PHONY: clean gdb show

all: no-relro partial-relro full-relro
no-relro: a.cc
	gcc -g $< -Wl,-z,norelro -o $@
partial-relro: a.cc
	gcc -g $< -Wl,-z,relro -o $@
full-relro: a.cc
	gcc -g $< -Wl,-z,relro,-z,now -o $@
show: all
	readelf -Wl no-relro | grep GNU_RELRO || :
	readelf -Wl partial-relro | grep --color GNU_RELRO # readonly .got; most of .got.plt resides in writable page
	readelf -Wl full-relro | grep --color GNU_RELRO    # whole .got.plt resides in writable page
gdb: all
	./gdb.exp
clean:
	$(RM) no-relro partial-relro full-relro
