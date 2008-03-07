#ifndef _STDLIB_H_
#define _STDLIB_H_

#include <stddef.h>
typedef struct {
	int quot;
	int rem;
} div_t;

typedef struct {
	long quot;
	long rem;
} ldiv_t;

#ifndef __STRICT_ANSI__
typedef struct {
	long long int quot;
	long long int rem;
} lldiv_t;
#endif

#ifndef NULL
 #define NULL ((void *)0)
#endif

#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

extern void	*calloc(size_t, size_t);
extern void	free(void *);
extern void	*malloc(size_t);
extern void	*realloc(void *, size_t);

#endif
