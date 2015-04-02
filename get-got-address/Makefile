SHELL := /bin/zsh
.PHONY: clean gdb show

all:
show: all
	readelf -r /bin/bash | grep -P --color '^[0-9a-f]+(?=.*(fopen|stdin))' # FUNC or OBJECT
	objdump -R /bin/bash | grep -P --color '^[0-9a-f]+(?=.*(fopen|stdin))' # FUNC or OBJECT
gdb:
	@:
clean:
	$(RM)
