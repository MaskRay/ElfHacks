SHELL := /bin/zsh
.PHONY: clean gdb show

all: a aa
a: a.c
	gcc -g $< -o $@
aa: a.c
	gcc -g -mcmodel=large $< -o $@
show: all
	diff <(objdump -S a) <(objdump -S aa) || :
gdb:
	@:
clean:
	$(RM) a aa
