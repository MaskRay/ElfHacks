# ElfHacks

Dive into ELF files using simple self-contained examples.

## Examples

| #                               | Program         | Description                                                                       |
| -----------------------------   | --------------- | --------------------------------------------------------------------------------- |
| backtrace                       | gcc             | `backtrace(3)`                                                                    |
| bss-section-in-c-and-c++        | gcc/g++         | .bss                                                                              |
| hot-swapping                    | g++             | hot swapping of C++ programs                                                      |
| gcc-attribute-alias             | gcc             | `alias` attribute emits an alias for another symbol                               |
| gcc-builtin\_return\_address    | gcc             | `__builtin_return_address`                                                        |
| gcc-finstrument-functions       | gcc             | generate instrumentation calls for entry and exit to functions                    |
| gcc-nostdlib                    | gcc             | do not use standard system startup files or libraries                             |
| gcc-pie                         | gcc             | produce a position independent executable (IMHO, like PIC+Bsymbolic)              |
| gcc-static                      | gcc             | statically linked executable                                                      |
| get-got-address                 | readelf,objdump | get GOT address of functions or variables                                         |
| get-plt-address                 | readelf,objdump | get PLT address of functions                                                      |
| g++-inline-means-weak-symbol    | g++             | inline functions translated to weak symbols                                       |
| implicit-inline-member-function | g++             | member functions defined in classes are implicitly inline                         |
| ld-Bsymbolic                    | ld              | `-Bsymbolic` binds references to local symbols                                    |
| ld-dy-dn                        | ld              | `-dn` makes ld link against static libraries                                      |
| ld-execstack                    | ld              | `-z` execstack and NX bit                                                         |
| ld-export-dynamic               | ld              | `--export-dynamic` makes executables export dynamic symbols                       |
| ld-now                          | ld              | `-z` now tells ld.so to resolve symbols immediately                               |
| ld-relro                        | ld              | RELocation Read-Only                                                              |
| ld-rpath                        | ld              | `-rpath` sets `DT_RUNPATH` which adds a directory to runtime library search path  |
| ld-whole-archive                | ld              | `--whole-archive` includes every object files (not only those which are required) |
| ld-wrap                         | ld              | `--wrap` makes undefined references to `SYMBOL` be resolved to `__wrap_SYMBOL`    |
| LD\_BIND\_NOW                   | ld.so           | resolve all symbols at startup instead of deferring resolution to the first call  |
| LD\_PROFILE                     | ld.so           | profile a shared library                                                          |
| LD\_TRACE\_LOADED\_OBJECTS      | ld.so           | list dynamic library dependencies rather than running                             |
| as-syscall                      | as              | make syscalls in x86-64 assembly                                                  |
| as-syscall-i386                 | as              | make syscalls in i386 assembly                                                    |
| shellcode-in-c                  | gcc,objcopy     | write shellcode in c using gcc & objcopy                                          |
| objcopy-link-blob               | objcopy         | link blob into executable                                                         |
| libSegFault                     | glibc           |                                                                                   |

## Dynamic linker

The man page `ld.so(8)` specifies directories are searched in which order when resolving library dependencies:

- `DT_RPATH` attribute in dynamic section is `DT_RUNPATH` does not exist
- environment variable `LD_LIBRARY_PATH`
- `DT_RUNPATH` attribute in dynamic section
- `/etc/ld.so.cache`
- `/lib`, `/usr/lib`

