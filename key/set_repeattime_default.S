#include <asm.h>

ENTRY(Bkey_Set_RepeatTime_Default)
	mov.l 1f, r0
	mov.l table_address, r2
	jmp @r2
	nop
1:	.long 0x244

#include <jumptable.h>
