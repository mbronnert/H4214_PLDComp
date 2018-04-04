.text
.global main
_main:
	pushq	%rbp
	movq	%rsp, %rbp
<<<<<<< HEAD
	subq	$56, %rsp
main:
	movq	-8(%rbp),-1(%rbp)
	movq	-1(%rbp),-5(%rbp)
	movq	-1(%rbp),-4(%rbp)
	movq	-7(%rbp),-1(%rbp)
	movq	-7(%rbp),-3(%rbp)
	movq	-6(%rbp),-1(%rbp)
	leave
	ret
=======
	subq	$96, %rsp
main:
>>>>>>> 577e0769b3a0a289781943debfe584716e148032
