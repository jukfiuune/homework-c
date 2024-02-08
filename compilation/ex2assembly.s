	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 13, 0	sdk_version 13, 3
	.globl	_main                           ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movl	$0, -4(%rbp)
	movl	$15, -8(%rbp)
	movl	$25, -12(%rbp)
	movl	-8(%rbp), %eax
	cmpl	-12(%rbp), %eax
	jle	LBB0_2
## %bb.1:
	movl	-8(%rbp), %eax
	movl	%eax, -20(%rbp)                 ## 4-byte Spill
	jmp	LBB0_3
LBB0_2:
	movl	-12(%rbp), %eax
	movl	%eax, -20(%rbp)                 ## 4-byte Spill
LBB0_3:
	movl	-20(%rbp), %eax                 ## 4-byte Reload
	movl	%eax, -16(%rbp)
LBB0_4:                                 ## =>This Inner Loop Header: Depth=1
	movl	-16(%rbp), %eax
	cltd
	idivl	-8(%rbp)
	cmpl	$0, %edx
	jne	LBB0_7
## %bb.5:                               ##   in Loop: Header=BB0_4 Depth=1
	movl	-16(%rbp), %eax
	cltd
	idivl	-12(%rbp)
	cmpl	$0, %edx
	jne	LBB0_7
## %bb.6:
	movl	-8(%rbp), %esi
	movl	-12(%rbp), %edx
	movl	-16(%rbp), %ecx
	leaq	L_.str(%rip), %rdi
	movb	$0, %al
	callq	_printf
	jmp	LBB0_8
LBB0_7:                                 ##   in Loop: Header=BB0_4 Depth=1
	movl	-16(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -16(%rbp)
	jmp	LBB0_4
LBB0_8:
	xorl	%eax, %eax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"NOK na %d i %d e: %d."

.subsections_via_symbols
