#ifndef _STRING_H_
#define _STRING_H_

#include <stddef.h>

extern int	memcmp(const void *, const void *, size_t);
extern void	*memcpy(void *restrict, const void *restrict, size_t);
extern void	*memset(void *, int, size_t);
extern char	*strcat(char *restrict, const char *restrict);
extern int	strcmp(const char *, const char *);
extern size_t	strlen(const char *);
extern char	*strncat(char *restrict, const char *restrict, size_t);
extern int	strncmp(const char *, const char *, size_t);

#endif
