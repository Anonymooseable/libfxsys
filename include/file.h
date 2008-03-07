#ifndef _FILE_H_
#define _FILE_H_

extern int Bfile_CreateFile(const unsigned short *, int);
extern int Bfile_CreateDirectory(const unsigned short *);
extern int Bfile_ReadFile(int, void*, int, int);
extern int Bfile_WriteFile(int, void*, int);
extern int Bfile_OpenFile(const unsigned short *, int);
extern int Bfile_CloseFile(int);
extern int Bfile_GetFileSize(int);

#endif
