.text
.global _main
_main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$64, %rsp
main:
	movq	 $75,-32(%rbp)
	movl	-32(%rbp), %edi
	call	_putchar
	movq	%rax, -24(%rbp)
	movq	 $1,-48(%rbp)
	movq	-40(%rbp), %rax
	addq	-48(%rbp), %rax
	movq 	%rax, -56(%rbp)
	leave
	ret
