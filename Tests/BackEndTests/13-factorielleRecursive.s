.text
.global _main
_fact:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$64, %rsp
	movq    %rdi, -8(%rbp)
fact:
	movq	 $1,-16(%rbp)
	movq	-8(%rbp), %rax
	cmp		-16(%rbp), %rax
	jne	 B2
B1:
	movq	 $1,-32(%rbp)
	movq	-32(%rbp), %rax
	jmp		B3
B2:
	movq	 $1,-48(%rbp)
	movq	-8(%rbp), %rax
	subq	-48(%rbp), %rax
	movq 	%rax, -56(%rbp)
	movq	-56(%rbp), %rdi
	call	_fact
	movq	%rax, -40(%rbp)
	movq	-8(%rbp), %rax
	imulq	-40(%rbp), %rax
	movq	%rax, -64(%rbp)
	movq	-64(%rbp), %rax
B3:
	leave
	ret
_main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$48, %rsp
main:
	movq	 $48,-16(%rbp)
	movq	 $3,-32(%rbp)
	movq	-32(%rbp), %rdi
	call	_fact
	movq	%rax, -24(%rbp)
	movq	-16(%rbp), %rax
	addq	-24(%rbp), %rax
	movq 	%rax, -40(%rbp)
	movl	-40(%rbp), %edi
	call	_putchar
	movq	%rax, -8(%rbp)
	leave
	ret
