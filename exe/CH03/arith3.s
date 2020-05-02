	.file	"arith3.c"
	.text
	.globl	arith3
	.def	arith3;	.scl	2;	.type	32;	.endef
	.seh_proc	arith3
arith3:
	.seh_endprologue
	orl	%edx, %r8d
	sarw	$9, %r8w
	notl	%r8d
	movl	%edx, %eax
	subl	%r8d, %eax
	ret
	.seh_endproc
	.ident	"GCC: (x86_64-win32-seh-rev0, Built by MinGW-W64 project) 8.1.0"
