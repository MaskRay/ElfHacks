SHELL := /bin/zsh
.PHONY: clean gdb show

all:
show:
	LD_PROFILE=libc.so.6 ls
	sprof -p libc.so.6 # flat
gdb:
	@:
clean:
