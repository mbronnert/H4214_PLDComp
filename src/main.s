.text
.global _main
_main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$112, %rsp
main:
	movq	 $79,-16(%rbp)
	call	_putchar
	movq	%rax, -16(%rbp)
	movq	 $75,-24(%rbp)
	call	_putchar
	movq	%rax, -24(%rbp)
	movq	 $32,-32(%rbp)
	call	_putchar
	movq	%rax, -32(%rbp)
	movq	 $5,-40(%rbp)
	movq	-40(%rbp), %rax
	imulq	-8(%rbp), %rax
	movq	%rax, -48(%rbp)
	movq	 $2,-64(%rbp)
	movq	-56(%rbp), %rax
	subq	-64(%rbp), %rax
	movq 	%rax, -72(%rbp)
	movq	 $6,-80(%rbp)
	movq	 $3,-88(%rbp)
	movq	-80(%rbp), %rax
	imulq	-88(%rbp), %rax
	movq	%rax, -96(%rbp)
	movq	-72(%rbp), %rax
	addq	-96(%rbp), %rax
	movq 	%rax, -104(%rbp)
	leave
	ret
