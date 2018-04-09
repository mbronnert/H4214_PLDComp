.text
.global _main
_main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$48, %rsp
main:
	movq	 $79,-16(%rbp)
	movl	-16(%rbp), %edi
	call	_putchar
	movq	%rax, -8(%rbp)
	movq	 $75,-32(%rbp)
	movl	-32(%rbp), %edi
	call	_putchar
	movq	%rax, -24(%rbp)
	movq	 $32,-48(%rbp)
	movl	-48(%rbp), %edi
	call	_putchar
	movq	%rax, -40(%rbp)
	leave
	ret
