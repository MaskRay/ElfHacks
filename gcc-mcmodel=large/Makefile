SHELL := /bin/zsh
.PHONY: clean gdb show

all: a aa
a: a.c
	gcc -g $< -o $@
aa: a.c
	gcc -g -mcmodel=large $< -o $@
show: all
	diff <(objdump -Mintel -S a) <(objdump -Mintel -S aa) || :
gdb:
	@:
clean:
	$(RM) a aa
