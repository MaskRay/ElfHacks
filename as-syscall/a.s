.intel_syntax noprefix
.L__NR_write = 1  # add prefix `.L' to prevent as from creating a symbol for this constant
.L__NR_exit = 60  # equivalent to `.eqv'
.LSTDOUT_FILENO = 1

.text
.global _start
.type _start, @function
_start:
	mov	eax, .L__NR_write # upper 32 bits are zeroed
	mov	edi, .LSTDOUT_FILENO # upper 32 bits are zeroed
	mov	rsi, offset buf
	mov	edx, 6 # upper 32 bits are zeroed
	syscall

	mov	eax, .L__NR_exit # upper 32 bits are zeroed
	xor	edi, edi # upper 32 bits are zeroed
	syscall
.size _start, . - _start

.section .rodata
.type buf, @object
buf:
	.string "hello\n"
.size buf, . - buf
.section .note.GNU-stack,"",@progbits # NX bit, see info '(as) Section'
