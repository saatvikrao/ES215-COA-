	.file	"fib8.c"
	.text
	.section	.rodata
.LC2:
	.string	"%Lf"
.LC3:
	.string	"%Lf\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	fldz
	fstpt	-48(%rbp)
	fld1
	fstpt	-32(%rbp)
	pushq	-40(%rbp)
	pushq	-48(%rbp)
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	addq	$16, %rsp
	movl	$1, -52(%rbp)
	jmp	.L2
.L3:
	pushq	-24(%rbp)
	pushq	-32(%rbp)
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	addq	$16, %rsp
	fldt	-48(%rbp)
	fstpt	-16(%rbp)
	fldt	-32(%rbp)
	fstpt	-48(%rbp)
	fldt	-32(%rbp)
	fldt	-16(%rbp)
	faddp	%st, %st(1)
	fstpt	-32(%rbp)
	addl	$1, -52(%rbp)
.L2:
	cmpl	$100, -52(%rbp)
	jle	.L3
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
