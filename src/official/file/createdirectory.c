#include <official/file.h>

extern int Bfile_CreateEntry_OS(const unsigned short*, int, int*);

int Bfile_CreateFile(const unsigned short *pathname, int size) {
	return Bfile_CreateEntry_OS(pathname, 5, (int*)0);
}
