# ElfHacks

Dive into ELF files using simple self-contained examples.

## Examples

| #                               | Program  | Description                                                                       |
| -----------------------------   | -------- | --------------------------------------------------------------------------------- |
| bss-section-in-c-and-c++        | gcc/g++  | .bss                                                                              |
| gcc-nostdlib                    | gcc      | do not use standard system startup files or libraries                             |
| gcc-pie                         | gcc      | option -fPIE                                                                      |
| gcc-static                      | gcc      | statically linked executable                                                      |
| g++-inline-means-weak-symbol    | g++      | inline functions translated to weak symbols                                       |
| implicit-inline-member-function | g++      | member functions defined in classes are implicitly inline                         |
| ld-Bsymbolic                    | ld       | `-Bsymbolic` binds references to local symbols                                    |
| ld-dy-dn                        | ld       | `-dn` makes ld link against static libraries                                      |
| ld-execstack                    | ld       | `-z` execstack and NX bit                                                         |
| ld-export-dynamic               | ld       | `--export-dynamic` makes executables export dynamic symbols                       |
| ld-now                          | ld       | `-z` now tells ld-linux to resolve symbols eagerly                                |
| ld-rpath                        | ld       | `-rpath` adds a directory to runtime library search path                          |
| ld-whole-archive                | ld       | `--whole-archive` includes every object files (not only those which are required) |
| ld-wrap                         | ld       | `--wrap` makes undefined references to `SYMBOL` be resolved to `__wrap_SYMBOL`    |
| LD\_BIND\_NOW                   | ld-linux | environment variable LD\_BIND\_NOW                                                |
| as-syscall                      | as       | make syscalls in x86-64 assembly                                                  |
