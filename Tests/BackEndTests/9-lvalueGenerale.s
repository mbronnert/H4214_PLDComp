.text
.global _main
_main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$112, %rsp
main:
	movq	 $5,-16(%rbp)
	movq	 $6,-24(%rbp)
	movq	 $3,-32(%rbp)
	movq	-24(%rbp), %rax
	imulq	-32(%rbp), %rax
	movq	%rax, -40(%rbp)
	movq	-16(%rbp), %rax
	addq	-40(%rbp), %rax
	movq 	%rax, -48(%rbp)
	movq	 $4,-56(%rbp)
	movq	-48(%rbp), %rax
	subq	-56(%rbp), %rax
	movq 	%rax, -64(%rbp)
	movq	 $3,-72(%rbp)
	movq	-64(%rbp), %rax
	addq	-72(%rbp), %rax
	movq 	%rax, -80(%rbp)
	movq	-80(%rbp), %rax
	movq	 %rax, -8(%rbp)
	movq	 $22,-88(%rbp)
	movq	-8(%rbp), %rax
	cmp		-88(%rbp), %rax
	jne	 B2
B1:
	movq	 $79,-112(%rbp)
	movl	-112(%rbp), %edi
	call	_putchar
	movq	%rax, -104(%rbp)
B2:
	leave
	ret
