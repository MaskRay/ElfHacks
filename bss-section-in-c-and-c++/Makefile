SHELL := /bin/zsh
.PHONY: clean gdb show

all: a.o aa.o
a.o: a.c
	gcc $< -c
aa.o: a.c
	g++ $< -c -o $@
show: all
	readelf -s a.o aa.o | egrep --color '^|.*data.*'
gdb:
	@:
clean:
	$(RM) a aa libb.so libb.a
