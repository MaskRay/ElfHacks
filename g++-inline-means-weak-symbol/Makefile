SHELL := /bin/zsh
.PHONY: clean gdb show

all: a
a: a.o b.o
	g++ $^ -o $@
show: all
	nm -C b.o
	./a
gdb:
	@:
clean:
	$(RM) a.o
