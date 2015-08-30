SHELL := /bin/zsh
CFLAGS += -g3
.PHONY: clean gdb show

all: a.so b.so
a.so: a.cc
	g++ $< -fPIC -shared -o $@
b.so: a.cc
	g++ $< -fPIC -shared -Wl,--version-script,a.map -o $@
show: all
	nm -CD a.so b.so
gdb:
	@:
clean:
	$(RM) a.so b.so
