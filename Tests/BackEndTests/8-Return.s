.text
.global _main
_toto:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$32, %rsp
	movq    %rdi, -8(%rbp)
toto:
	movq	 $2,-16(%rbp)
	movq	-16(%rbp), %rax
	imulq	-8(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	leave
	ret
_main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$64, %rsp
main:
	movq	 $1,-24(%rbp)
	movq	-24(%rbp), %rdi
	call	_toto
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	 %rax, -8(%rbp)
	movq	 $2,-32(%rbp)
	movq	-8(%rbp), %rax
	cmp		-32(%rbp), %rax
	jne	 B2
B1:
	movq	 $79,-56(%rbp)
	movl	-56(%rbp), %edi
	call	_putchar
	movq	%rax, -48(%rbp)
B2:
	leave
	ret
