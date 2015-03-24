SHELL := /bin/zsh
targets := $(shell echo *(/))
.PHONY: clean gdb show

gdb: $(patsubst %,gdb-%,$(targets))
gdb-%:
	$(MAKE) -C $* gdb

show: $(patsubst %,show-%,$(targets))
show-%:
	$(MAKE) -C $* show

clean: $(patsubst %,clean-%,$(targets))
clean-%:
	$(MAKE) -C $* clean
