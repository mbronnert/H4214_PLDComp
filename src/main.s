.text
.global _main
_main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$88, %rsp
main:
	movq	 $0,-16(%rbp)
	movq	-16(%rbp), %rax
	movq	 %rax, -8(%rbp)
B1:
	movq	 $5,-24(%rbp)
	movq	-24(%rbp), %rax
	cmp		-8(%rbp), %rax
	jge	 B3
B2:
	movq	 $86,-48(%rbp)
	movl	-48(%rbp), %edi
	call	_putchar
	movq	%rax, -40(%rbp)
	movq	 $1,-56(%rbp)
	movq	-8(%rbp), %rax
	addq	-56(%rbp), %rax
	movq 	%rax, -64(%rbp)
	movq	-64(%rbp), %rax
	movq	 %rax, -8(%rbp)
	jmp		B1
B3:
	movq	 $10,-80(%rbp)
	movl	-80(%rbp), %edi
	call	_putchar
	movq	%rax, -72(%rbp)
	leave
	ret
