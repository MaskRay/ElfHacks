SHELL := /bin/zsh
.PHONY: clean gdb show

all: a libb.so
libb.so: b.c
	gcc -shared $< -o $@
a: a.c libb.so
	gcc -g $< -Wl,-z,now -L. -lb -o $@
show: all
	readelf -Wr a | egrep --color '^|.*foo.*'
	readelf -d a | egrep --color '^|.*NOW.*'
gdb: all
	@got=0x$$(readelf -Wr a | grep foo | awk '{print $$1}')
	./gdb.exp $$got
clean:
	$(RM) a libb.so
