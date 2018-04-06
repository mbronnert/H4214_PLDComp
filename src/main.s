.text
.global _main
_main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$80, %rsp
main:
	movq	 $79,-32(%rbp)
	movq	-32(%rbp), %rax
	movq	 %rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	 %rax, -16(%rbp)
	movq	 $75,-40(%rbp)
	movq	-40(%rbp), %rax
	movq	 %rax, -24(%rbp)
	movq	 $10,-48(%rbp)
	movq	-48(%rbp), %rax
	movq	 %rax, -8(%rbp)
	movl	-16(%rbp), %edi
	call	_putchar
	movq	%rax, -56(%rbp)
	movl	-24(%rbp), %edi
	call	_putchar
	movq	%rax, -64(%rbp)
	movl	-8(%rbp), %edi
	call	_putchar
	movq	%rax, -72(%rbp)
	leave
	ret
