#ifndef _FILE_H_
#define _FILE_H_

int Bfile_CreateFile(const unsigned short *, int);
int Bfile_CreateDirectory(const unsigned short *);
int Bfile_ReadFile(int, void*, int, int);
int Bfile_WriteFile(int, void*, int);
int Bfile_OpenFile(const unsigned short *, int);
int Bfile_CloseFile(int);
int Bfile_GetFileSize(int);


#endif
