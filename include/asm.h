/*
 * The following allows us to introduce functions with
 * ENTRY(name)
 */
/*#define _C_LABEL(x)	_ ## x*/
#define _C_LABEL(x)	x
#define _ENTRY(name)	\
	.text; .align 2; .global name; name:
#define ENTRY(name)	\
	_ENTRY(_C_LABEL(name))
