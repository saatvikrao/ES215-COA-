	.file	1 "fibm.c"
	.section .mdebug.abi32
	.previous
	.nan	legacy
	.module	fp=xx
	.module	nooddspreg
	.abicalls
	.text
	.rdata
	.align	2
$LC1:
	.ascii	"%Lf\000"
	.align	2
$LC2:
	.ascii	"%Lf\012\000"
	.text
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:
	.frame	$fp,64,$31		# vars= 32, regs= 2/0, args= 16, gp= 8
	.mask	0xc0000000,-4
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-64
	sw	$31,60($sp)
	sw	$fp,56($sp)
	move	$fp,$sp
	lui	$28,%hi(__gnu_local_gp)
	addiu	$28,$28,%lo(__gnu_local_gp)
	.cprestore	16
	sw	$0,36($fp)
	sw	$0,32($fp)
	lui	$2,%hi($LC0)
	ldc1	$f0,%lo($LC0)($2)
	sdc1	$f0,40($fp)
	lw	$7,36($fp)
	lw	$6,32($fp)
	lui	$2,%hi($LC1)
	addiu	$4,$2,%lo($LC1)
	lw	$2,%call16(printf)($28)
	move	$25,$2
	.reloc	1f,R_MIPS_JALR,printf
1:	jalr	$25
	nop

	lw	$28,16($fp)
	li	$2,1			# 0x1
	sw	$2,28($fp)
	.option	pic0
	b	$L2
	nop

	.option	pic2
$L3:
	lw	$7,44($fp)
	lw	$6,40($fp)
	lui	$2,%hi($LC2)
	addiu	$4,$2,%lo($LC2)
	lw	$2,%call16(printf)($28)
	move	$25,$2
	.reloc	1f,R_MIPS_JALR,printf
1:	jalr	$25
	nop

	lw	$28,16($fp)
	ldc1	$f0,32($fp)
	sdc1	$f0,48($fp)
	ldc1	$f0,40($fp)
	sdc1	$f0,32($fp)
	ldc1	$f2,40($fp)
	ldc1	$f0,48($fp)
	add.d	$f0,$f2,$f0
	sdc1	$f0,40($fp)
	lw	$2,28($fp)
	addiu	$2,$2,1
	sw	$2,28($fp)
$L2:
	lw	$2,28($fp)
	slt	$2,$2,101
	bne	$2,$0,$L3
	nop

	move	$2,$0
	move	$sp,$fp
	lw	$31,60($sp)
	lw	$fp,56($sp)
	addiu	$sp,$sp,64
	jr	$31
	nop

	.set	macro
	.set	reorder
	.end	main
	.size	main, .-main
	.rdata
	.align	3
$LC0:
	.word	1072693248
	.word	0
	.ident	"GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0"
