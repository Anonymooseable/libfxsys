#include <asm.h>

ENTRY(Bfile_CreateEntry_OS)
	mov.l 1f, r0
	mov.l table_address, r2
	jmp @r2
	nop
1:	.long 0x434

#include <jumptable.h>
