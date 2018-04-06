.text
.global _main
_toto:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$96, %rsp
<<<<<<< HEAD
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
=======
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
>>>>>>> 7b6976277cf6aa2dc3b5ff75448bcf74f46b7631
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
	subq	$144, %rsp
main:
	movq	 $1,-24(%rbp)
	movq	 $2,-32(%rbp)
	movq	 $3,-48(%rbp)
	movq	 $4,-64(%rbp)
	movq	 $5,-80(%rbp)
	movq	 $6,-96(%rbp)
	movq	-104(%rbp), %rdi
	call	_toto
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	 %rax, -8(%rbp)
<<<<<<< HEAD
	movq	 $21,-112(%rbp)
	movq	-8(%rbp), %rax
	cmp		-112(%rbp), %rax
	jne	 B2
B1:
	movq	 $79,-136(%rbp)
	movl	-136(%rbp), %edi
=======
	jmp		B1
B3:
	movq	 $10,-88(%rbp)
	movl	-88(%rbp), %edi
>>>>>>> 7b6976277cf6aa2dc3b5ff75448bcf74f46b7631
	call	_putchar
	movq	%rax, -128(%rbp)
B2:
	leave
	ret
