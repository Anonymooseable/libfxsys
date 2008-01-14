#include <asm.h>

ENTRY(Bdisp_AllClr_DD)
	mov.l 1f, r0
	mov.l table_address, r2
	jmp @r2
	nop
1:	.long 0x142

ENTRY(Bdisp_AllClr_VRAM)
	mov.l 1f, r0
	mov.l table_address, r2
	jmp @r2
	nop
1:	.long 0x143

ENTRY(Bdisp_AllClr_DDVRAM)
	mov.l 1f, r0
	mov.l table_address, r2
	jmp @r2
	nop
1:	.long 0x144

#include <jumptable.h>
