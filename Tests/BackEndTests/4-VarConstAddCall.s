.text
.global _main
_main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$112, %rsp
main:
	movq	 $77,-32(%rbp)
	movq	-32(%rbp), %rax
	movq	 %rax, -8(%rbp)
	movq	 $1,-40(%rbp)
	movq	-40(%rbp), %rax
	addq	-8(%rbp), %rax
	movq 	%rax, -48(%rbp)
	movq	 $1,-56(%rbp)
	movq	-48(%rbp), %rax
	addq	-56(%rbp), %rax
	movq 	%rax, -64(%rbp)
	movq	-64(%rbp), %rax
	movq	 %rax, -16(%rbp)
	movq	 $1,-72(%rbp)
	movq	-16(%rbp), %rax
	addq	-72(%rbp), %rax
	movq 	%rax, -80(%rbp)
	movq	-80(%rbp), %rax
	movq	 %rax, -24(%rbp)
	movl	-16(%rbp), %edi
	call	_putchar
	movq	%rax, -88(%rbp)
	movl	-24(%rbp), %edi
	call	_putchar
	movq	%rax, -96(%rbp)
	movq	 $10,-112(%rbp)
	movl	-112(%rbp), %edi
	call	_putchar
	movq	%rax, -104(%rbp)
	leave
	ret
