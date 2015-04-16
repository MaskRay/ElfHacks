SHELL := /bin/zsh
.PHONY: clean gdb show

CXXFLAGS += -g3
all: a b.so c.so
a: a.cc
a: LDLIBS += -ldl        # for dlopen,dlsym
a: LDFLAGS += -rdynamic  # genereate dynamic symbol `used_by_b_so`
%.so: %.cc
	$(LINK.cc) -shared -fPIC $< -o $@
show: all
	./a &
	sleep 0.5
	xxd b.so | sed 's,1312 1312,1213 1213,' | xxd -r > b.so.tmp && mv b.so.tmp b.so # change b.so
	kill -INT $$!  # trigger hot swapping
	xxd b.so | sed 's,1213 1213,1312 1312,' | xxd -r > b.so.tmp && mv b.so.tmp b.so # restore
gdb:
	@:
clean:
	$(RM) a b.so c.so

.ONESHELL:
