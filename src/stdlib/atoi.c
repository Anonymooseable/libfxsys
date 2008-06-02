#include <stdlib.h>

int atoi(char *string) {
	register int value = 0;
	register int sign = 0;
	
	while(*string) {
		if (*string <= 0x39 && *string >= 0x30) {
			break;
		}
		if (*string == '-' || *string == '+') {
			sign = (*string == '-'); /* if negative, set sign */
			string++;
			break;
		}
		string++;
	}
	while(*string != 0 && *string >= 0x30 && *string <= 0x39) {
		value = (value*10) + (*string - 0x30);
		string++;
	}

	return (sign ? -value : value);
}
