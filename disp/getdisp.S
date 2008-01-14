#include <asm.h>

ENTRY(Bdisp_GetDisp_DD)
	mov.l 1f, r0
	mov.l table_address, r2
	jmp @r2
	nop
1:	.long 0x24

ENTRY(Bdisp_GetDisp_VRAM)
	mov.l 1f, r0
	mov.l table_address, r2
	jmp @r2
	nop
1:	.long 0x145

#include <jumptable.h>
