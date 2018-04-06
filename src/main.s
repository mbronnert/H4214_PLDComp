.text
.global _main
_main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$96, %rsp
main:
	movq	 $65,-16(%rbp)
	movq	-16(%rbp), %rax
	movq	 %rax, -8(%rbp)
B1:
	movq	 $90,-24(%rbp)
	movq	 $1,-32(%rbp)
	movq	-24(%rbp), %rax
	addq	-32(%rbp), %rax
	movq 	%rax, -40(%rbp)
	movq	-8(%rbp), %rax
	cmp		-40(%rbp), %rax
	jge	 B3
B2:
	movl	-8(%rbp), %edi
	call	_putchar
	movq	%rax, -56(%rbp)
	movq	 $1,-64(%rbp)
	movq	-8(%rbp), %rax
	addq	-64(%rbp), %rax
	movq 	%rax, -72(%rbp)
	movq	-72(%rbp), %rax
	movq	 %rax, -8(%rbp)
	jmp		B1
B3:
	movq	 $10,-88(%rbp)
	movl	-88(%rbp), %edi
	call	_putchar
	movq	%rax, -80(%rbp)
	leave
	ret
