#include <stdlib.h>

div_t div(int numerator, int denominator) {
	div_t f;
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