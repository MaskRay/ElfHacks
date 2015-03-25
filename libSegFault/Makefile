SHELL := /bin/zsh
.PHONY: clean gdb show

all: a
show: all
	LD_PRELOAD=/usr/lib/libSegFault.so SEGFAULT_SIGNALS=all ./a || :
gdb:
	@:
clean:
	$(RM) a
