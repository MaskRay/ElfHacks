SHELL := /bin/zsh
targets := $(shell echo *(/))
.PHONY: clean gdb help show

help:
	@echo 'Targets:'
	@echo '  clean     - remove most generated files'
	@echo '  gdb       - display interactive session with gdb'
	@echo '  show      - display further info'

gdb: $(patsubst %,gdb-%,$(targets))
gdb-%:
	@if grep -q 'gdb: \S\+' $*/Makefile; then \
		echo '\n\e[1;35m*** $* ***\e[m'; \
		$(MAKE) --no-print-directory -C $* gdb; \
	fi

show: $(patsubst %,show-%,$(targets))
show-%:
	@echo '\n\e[1;35m*** $* ***\e[m'
	@$(MAKE) --no-print-directory -C $* show

clean: $(patsubst %,clean-%,$(targets))
clean-%:
	@$(MAKE) -C $* clean
