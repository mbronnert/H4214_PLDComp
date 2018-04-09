.text
.global _main
_main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$80, %rsp
main:
	movq	 $1,-16(%rbp)
	movq	-16(%rbp), %rax
	movq	 %rax, -8(%rbp)
	movq	 $48,-32(%rbp)
	movq	 $1,-40(%rbp)
	movq	-32(%rbp), %rax
	addq	-40(%rbp), %rax
	movq 	%rax, -48(%rbp)
	movq	 $3,-56(%rbp)
	movq	 $2,-64(%rbp)
	movq	-56(%rbp), %rax
	imulq	-64(%rbp), %rax
	movq	%rax, -72(%rbp)
	movq	-48(%rbp), %rax
	addq	-72(%rbp), %rax
	movq 	%rax, -80(%rbp)
	movl	-80(%rbp), %edi
	call	_putchar
	movq	%rax, -24(%rbp)
	leave
	ret
