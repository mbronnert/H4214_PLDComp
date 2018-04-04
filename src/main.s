.text
.global main
_main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$96, %rsp
main:
	movq	 $-1,16(%rbp)
	movq	 $-8,16(%rbp)
	movq	 $-1,24(%rbp)
	movq	 $24,32(%rbp)
	movq	 $-1,40(%rbp)
	movq	 $-1,48(%rbp)
	movq	 $0,-1(%rbp)
	movq	 $-1,56(%rbp)
	movq	 $0,64(%rbp)
	movq	 $8,-1(%rbp)
	movq	 $0,-1(%rbp)
	movq	 $8,-1(%rbp)
	movq	 $-1,72(%rbp)
	movq	 $72,-1(%rbp)
	leave
	ret
