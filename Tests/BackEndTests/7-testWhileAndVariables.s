.text
.global _main
_main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$80, %rsp
main:
	movq	 $65,-16(%rbp)
	movq	-16(%rbp), %rax
	movq	 %rax, -8(%rbp)
B1:
	movq	 $90,-24(%rbp)
	movq	-8(%rbp), %rax
	cmp		-24(%rbp), %rax
	jg	 B3
B2:
	movl	-8(%rbp), %edi
	call	_putchar
	movq	%rax, -40(%rbp)
	movq	 $1,-48(%rbp)
	movq	-8(%rbp), %rax
	addq	-48(%rbp), %rax
	movq 	%rax, -56(%rbp)
	movq	-56(%rbp), %rax
	movq	 %rax, -8(%rbp)
	jmp		B1
B3:
	movq	 $10,-72(%rbp)
	movl	-72(%rbp), %edi
	call	_putchar
	movq	%rax, -64(%rbp)
	leave
	ret
