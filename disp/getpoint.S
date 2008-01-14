#include <asm.h>

ENTRY(Bdisp_GetPoint_VRAM)
	mov.l 1f, r0
	mov.l table_address, r2
	jmp @r2
	nop
1:	.long 0x149

#include <jumptable.h>
