.text
.global _main
_main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$80, %rsp
main:
	movq	 $77,-16(%rbp)
	movq	-16(%rbp), %rax
	movq	 %rax, -8(%rbp)
	movl	-8(%rbp), %edi
	call	_putchar
	movq	%rax, -24(%rbp)
	movq	 $79,-40(%rbp)
	movl	-40(%rbp), %edi
	call	_putchar
	movq	%rax, -32(%rbp)
	movq	 $75,-56(%rbp)
	movl	-56(%rbp), %edi
	call	_putchar
	movq	%rax, -48(%rbp)
	movq	 $32,-72(%rbp)
	movl	-72(%rbp), %edi
	call	_putchar
	movq	%rax, -64(%rbp)
	leave
	ret
