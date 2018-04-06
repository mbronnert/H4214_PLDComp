.text
.global _main
_fib:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$32, %rsp
fib:
	movq	 $1,-8(%rbp)
	movq	-1(%rbp), %rax
	cmp		-8(%rbp), %rax
	jne	 B2
B1:
	movq	 $35,-24(%rbp)
	movq	-24(%rbp), %rax
	jmp		B3
B2:
	movq	 $36,-32(%rbp)
	movq	-32(%rbp), %rax
B3:
	leave
	ret
_main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$32, %rsp
main:
	movl	-1(%rbp), %edi
	call	_putchar
	movq	%rax, -8(%rbp)
	movq	 $2,-32(%rbp)
	movq	-32(%rbp), %rdi
	call	_fib
	movq	%rax, -24(%rbp)
	movl	-1(%rbp), %edi
	call	_putchar
	movq	%rax, -16(%rbp)
	leave
	ret
