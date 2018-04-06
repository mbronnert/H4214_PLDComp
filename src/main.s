.text
.global _main
_fib:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$96, %rsp
	movq    %rdi, -8(%rbp)
fib:
	movq	 $1,-24(%rbp)
	movq	-8(%rbp), %rax
	cmp		-24(%rbp), %rax
	jne	 B2
B1:
	movq	 $1,-40(%rbp)
	movq	-40(%rbp), %rax
	jmp		B3
B2:
	movq	 $1,-56(%rbp)
	movq	-8(%rbp), %rax
	subq	-56(%rbp), %rax
	movq 	%rax, -64(%rbp)
	movq	-64(%rbp), %rdi
	call	_fib
	movq	%rax, -48(%rbp)
	movq	 $2,-80(%rbp)
	movq	-8(%rbp), %rax
	subq	-80(%rbp), %rax
	movq 	%rax, -88(%rbp)
	movq	-88(%rbp), %rdi
	call	_fib
	movq	%rax, -72(%rbp)
	movq	-48(%rbp), %rax
	addq	-72(%rbp), %rax
	movq 	%rax, -96(%rbp)
	movq	-96(%rbp), %rax
	movq	 %rax, -16(%rbp)
	movq	-16(%rbp), %rax
B3:
	leave
	ret
_main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$48, %rsp
main:
	movq	 $48,-16(%rbp)
	movq	 $5,-32(%rbp)
	movq	-32(%rbp), %rdi
	call	_fib
	movq	%rax, -24(%rbp)
	movq	-16(%rbp), %rax
	addq	-24(%rbp), %rax
	movq 	%rax, -40(%rbp)
	movl	-40(%rbp), %edi
	call	_putchar
	movq	%rax, -8(%rbp)
	leave
	ret
