SHELL := /bin/zsh
CFLAGS += -g3
.PHONY: clean gdb show

all: a
show: all
	readelf -Wr a | egrep --color '^|.*IRELATIVE.*'
gdb: all
	./gdb.exp 0x$$(readelf -Wr a | grep IRELATIVE | awk '{print $$1}')
clean:
	$(RM) a
