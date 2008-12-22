#include <stdlib.h>

ldiv_t div(long numerator, long denominator) {
	ldiv_t f;
	f.quot = numerator / denominator;
	f.rem = numerator % denominator;
	
	if (numerator >= 0 && f.rem < 0) {
		++f.quot;
		f.rem -= denominator;
	} else if (numerator < 0 && f.rem > 0) {
		--f.quot;
		f.rem += denominator;
	}
	return f;
}