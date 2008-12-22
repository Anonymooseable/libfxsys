#ifndef _CTYPE_H_
#define _CTYPE_H_

int tolower(int);
int toupper(int);

#define	_U	0x01
#define	_L	0x02
#define	_N	0x04
#define	_S	0x08
#define	_P	0x10
#define	_C	0x20
#define	_X	0x40
#define	_B	0x80

extern const unsigned char *_ctype_;

#define	isdigit(c)	((int)((_ctype_ + 1)[(unsigned char)(c)] & _N))
#define	islower(c)	((int)((_ctype_ + 1)[(unsigned char)(c)] & _L))
#define	isspace(c)	((int)((_ctype_ + 1)[(unsigned char)(c)] & _S))
#define	ispunct(c)	((int)((_ctype_ + 1)[(unsigned char)(c)] & _P))
#define	isupper(c)	((int)((_ctype_ + 1)[(unsigned char)(c)] & _U))
#define	isalpha(c)	((int)((_ctype_ + 1)[(unsigned char)(c)] & (_U|_L)))
#define	isxdigit(c)	((int)((_ctype_ + 1)[(unsigned char)(c)] & (_N|_X)))
#define	isalnum(c)	((int)((_ctype_ + 1)[(unsigned char)(c)] & (_U|_L|_N)))
#define	isprint(c)	((int)((_ctype_ + 1)[(unsigned char)(c)] & (_P|_U|_L|_N|_B)))
#define	isgraph(c)	((int)((_ctype_ + 1)[(unsigned char)(c)] & (_P|_U|_L|_N)))
#define	iscntrl(c)	((int)((_ctype_ + 1)[(unsigned char)(c)] & _C))

#define	isascii(c)	((unsigned)(c) <= 0x7F)
#define	toascii(c)	((c) & 0x7F)

#endif