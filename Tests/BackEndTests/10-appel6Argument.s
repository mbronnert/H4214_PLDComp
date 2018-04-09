.text
.global _main
_toto:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$96, %rsp
	movq    %rdi, -8(%rbp)
	movq    %rsi, -16(%rbp)
	movq    %rdx, -24(%rbp)
	movq    %rcx, -32(%rbp)
	movq    %r8, -40(%rbp)
	movq    %r9, -48(%rbp)
toto:
	movq	-8(%rbp), %rax
	addq	-16(%rbp), %rax
	movq 	%rax, -64(%rbp)
	movq	-64(%rbp), %rax
	addq	-24(%rbp), %rax
	movq 	%rax, -72(%rbp)
	movq	-72(%rbp), %rax
	addq	-32(%rbp), %rax
	movq 	%rax, -80(%rbp)
	movq	-80(%rbp), %rax
	addq	-40(%rbp), %rax
	movq 	%rax, -88(%rbp)
	movq	-88(%rbp), %rax
	addq	-48(%rbp), %rax
	movq 	%rax, -96(%rbp)
	movq	-96(%rbp), %rax
	movq	 %rax, -56(%rbp)
	movq	-56(%rbp), %rax
	leave
	ret
_main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$192, %rsp
main:
	movq	 $1,-64(%rbp)
	movq	-64(%rbp), %rax
	movq	 %rax, -16(%rbp)
	movq	 $1,-72(%rbp)
	movq	-72(%rbp), %rax
	movq	 %rax, -24(%rbp)
	movq	 $1,-80(%rbp)
	movq	-80(%rbp), %rax
	movq	 %rax, -32(%rbp)
	movq	 $1,-88(%rbp)
	movq	-88(%rbp), %rax
	movq	 %rax, -40(%rbp)
	movq	 $1,-96(%rbp)
	movq	-96(%rbp), %rax
	movq	 %rax, -48(%rbp)
	movq	 $1,-104(%rbp)
	movq	-104(%rbp), %rax
	movq	 %rax, -56(%rbp)
	movq	-152(%rbp), %rdi
	call	_toto
	movq	%rax, -112(%rbp)
	movq	-112(%rbp), %rax
	movq	 %rax, -8(%rbp)
	movq	 $6,-160(%rbp)
	movq	-8(%rbp), %rax
	cmp		-160(%rbp), %rax
	jne	 B2
B1:
	movq	 $79,-184(%rbp)
	movl	-184(%rbp), %edi
	call	_putchar
	movq	%rax, -176(%rbp)
B2:
	leave
	ret
