.text
.global _main
_main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$80, %rsp
main:
	movq	 $1,-8(%rbp)
	movq	 $2,-16(%rbp)
	movq	-8(%rbp), %rax
	cmp		-16(%rbp), %rax
	jge	 B2
B1:
	movq	 $86,-40(%rbp)
	movl	-40(%rbp), %edi
	call	_putchar
	movq	%rax, -32(%rbp)
B2:
	movq	 $70,-56(%rbp)
	movl	-56(%rbp), %edi
	call	_putchar
	movq	%rax, -48(%rbp)
B3:
	movq	 $10,-72(%rbp)
	movl	-72(%rbp), %edi
	call	_putchar
	movq	%rax, -64(%rbp)
	leave
	ret
