.text
.global _main
_main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$80, %rsp
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
	movq	 $1,-40(%rbp)
	movq	 $2,-48(%rbp)
	movq	-40(%rbp), %rax
	addq	-48(%rbp), %rax
	movq 	%rax, -56(%rbp)
	movq	 $3,-64(%rbp)
	movq	-56(%rbp), %rax
	addq	-64(%rbp), %rax
	movq 	%rax, -72(%rbp)
	movq	-72(%rbp), %rax
	movq	 %rax, -8(%rbp)
	leave
	ret
