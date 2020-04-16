	.file	"cast_store.c"
	.text
	.globl	func
	.def	func;	.scl	2;	.type	32;	.endef
	.seh_proc	func
func:
	.seh_endprologue
	movzbl	(%rcx), %eax
	movq	%rax, (%rdx)
	ret
	.seh_endproc
	.ident	"GCC: (x86_64-win32-seh-rev0, Built by MinGW-W64 project) 8.1.0"
