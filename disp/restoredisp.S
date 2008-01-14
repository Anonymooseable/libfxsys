#include <asm.h>

ENTRY(RestoreDisp)
	mov.l 1f, r0
	mov.l table_address, r2
	jmp @r2
	nop
1:	.long 0x814

#include <jumptable.h>
