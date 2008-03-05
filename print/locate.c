#include <official/print.h>

extern void locate_OS(int,int);

void locate(int column, int row) {
	/* parameters are constrained to valid values */
	if (column >= 1) { goto lcok; }
	column = 1;
lcok:	if (column <= 21) { goto hcok; }
	column = 21;
hcok:	if (row >= 1) { goto lrok; }
	row = 1;
lrok:	if (row <= 8) { goto hrok; }
	row = 8;
hrok:	return (void)locate_OS(column, row);
}
