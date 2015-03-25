# ElfHacks

Dive into ELF files using simple self-contained examples.

## Examples

| #                               | Program  | Description                                                       |
| -----------------------------   | -------- | ----------------------------------------------------------------- |
| bss-section-in-c-and-c++        | gcc/g++  | .bss                                                              |
| gcc-pie                         | gcc      | option -fPIE                                                      |
| gcc-static                      | gcc      | statically linked executable                                      |
| g++-inline-means-weak-symbol    | g++      | inline functions translated to weak symbols                       |
| implicit-inline-member-function | g++      | member functions defined in classes are implicitly inline         |
| ld-Bsymbolic                    | ld       | option -Bsymbolic binds references to local symbols               |
| ld-dy-dn                        | ld       | option -dn makes ld link against static libraries                 |
| ld-execstack                    | ld       | option -z execstack and NX bit                                    |
| ld-export-dynamic               | ld       | option --export-dynamic makes executables export dynamic symbols  |
| ld-now                          | ld       | option -z now tells ld-linux to resolve symbols eagerly           |
| ld-rpath                        | ld       | option -rpath adds a directory to runtime library search path     |
| LD\_BIND\_NOW                   | ld-linux | environment variable LD\_BIND\_NOW                                |
