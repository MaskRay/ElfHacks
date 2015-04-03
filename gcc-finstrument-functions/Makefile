SHELL := /bin/zsh
.PHONY: clean gdb show

all: a
a: a.cc
	g++ -finstrument-functions -g a.cc -Wl,--export-dynamic -ldl -o a
show: all
	./a
	./a | grep -Po '(?<=call_site:)\w+' | addr2line -se a
gdb:
	@:
clean:
	$(RM) a
