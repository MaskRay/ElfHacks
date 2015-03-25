.intel_syntax noprefix
.L__NR_write = 4  # add prefix `.L' to prevent as from creating a symbol for this constant
.L__NR_exit = 1  # equivalent to `.eqv'
.LSTDOUT_FILENO = 1

.text
.global _start
.type _start, @function
_start:
	mov	eax, .L__NR_write
	mov	ebx, .LSTDOUT_FILENO
	mov	ecx, offset buf
	mov	edx, 6
	int	0x80

	mov	eax, .L__NR_exit
	xor	ebx, ebx
	int	0x80
.size _start, . - _start

.section .rodata
.type buf, @object
buf:
	.string "hello\n"
.size buf, . - buf
.section .note.GNU-stack,"",@progbits # NX bit, see info '(as) Section'
