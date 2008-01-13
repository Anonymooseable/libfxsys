#include <asm.h>

ENTRY(PrintMiniSd)
	mov.l 1f, r0
	mov.l table_address, r2
	jmp @r2
	nop
1:	.long 0xc4f

#include <jumptable.h>
