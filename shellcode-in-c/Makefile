SHELL := /bin/zsh
.PHONY: clean gdb show

all: a.bin
a.o: a.c
	gcc -nostdlib -Os $< -o $@
a.bin: a.o
	objcopy -Obinary -j.text $< $@
show: all
	objdump -Mintel -mi386 -bbinary -D a.bin
gdb: all
	@:
clean:
	$(RM) a.o a.bin
