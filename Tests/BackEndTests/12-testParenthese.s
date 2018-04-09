.text
.global _main
_main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$96, %rsp
main:
	movq	 $1,-16(%rbp)
	movq	-16(%rbp), %rax
	movq	 %rax, -8(%rbp)
	movq	 $48,-32(%rbp)
	movq	-8(%rbp), %rax
	addq	-8(%rbp), %rax
	movq 	%rax, -40(%rbp)
	movq	-32(%rbp), %rax
	addq	-40(%rbp), %rax
	movq 	%rax, -48(%rbp)
	movq	-8(%rbp), %rax
	addq	-8(%rbp), %rax
	movq 	%rax, -56(%rbp)
	movq	-8(%rbp), %rax
	addq	-8(%rbp), %rax
	movq 	%rax, -64(%rbp)
	movq	-56(%rbp), %rax
	addq	-64(%rbp), %rax
	movq 	%rax, -72(%rbp)
	movq	-48(%rbp), %rax
	addq	-72(%rbp), %rax
	movq 	%rax, -80(%rbp)
	movq	-8(%rbp), %rax
	addq	-8(%rbp), %rax
	movq 	%rax, -88(%rbp)
	movq	-80(%rbp), %rax
	addq	-88(%rbp), %rax
	movq 	%rax, -96(%rbp)
	movl	-96(%rbp), %edi
	call	_putchar
	movq	%rax, -24(%rbp)
	leave
	ret
