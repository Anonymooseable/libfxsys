#ifndef _STDINT_H_
#define _STDINT_H_

#include <limits.h>

typedef	signed char	int8_t;
typedef unsigned char	uint8_t;
typedef	signed char	int_least8_t;
typedef	unsigned char	uint_least8_t;

typedef	signed short	int16_t;
typedef	unsigned short	uint16_t;
typedef	int16_t		int_least16_t;
typedef uint16_t	uint_least16_t;

typedef signed long	int32_t;
typedef unsigned long	uint32_t;
typedef int32_t		int_least32_t;
typedef uint32_t	uint_least32_t;
/* Definitions for int64_t and uint64_t not included.. */

/* 'fast' types, assumed to be fast */
typedef	signed int	int_fast8_t;
typedef unsigned int	uint_fast8_t;
typedef signed int	int_fast16_t;
typedef unsigned int	uint_fast16_t;
typedef signed int	int_fast32_t;
typedef unsigned int	uint_fast32_t;

#if defined(__INTMAX_TYPE__)
 typedef	__INTMAX_TYPE__	intmax_t;
#else
 typedef	signed long	intmax_t;
#endif

#if defined(__UINTMAX_TYPE__)
 typedef	__UINTMAX_TYPE__	uintmax_t;
#else
 typedef	unsigned long	uintmax_t;
#endif

typedef	signed long	intptr_t;
typedef unsigned long	uintptr_t;

#define	INT8_MIN	(-128)		/* normal */
#define INT8_MAX	127
#define	UINT8_MAX	255
#define INT_LEAST8_MIN	(-128)		/* leasts */
#define INT_LEAST8_MAX	127
#define	UINT_LEAST8_MAX	255
#define	INT_FAST8_MIN	INT8_MIN	/* fast */
#define	INT_FAST8_MAX	INT8_MAX
#define	UINT_FAST8_MAX	UINT8_MAX

#define INT16_MIN	(-32768)
#define INT16_MAX	32767
#define	UINT16_MAX	65535
#define INT_LEAST16_MIN	(-32768)
#define	INT_LEAST16_MAX	32767
#define UINT_LEAST16_MAX	65535
#define	INT_FAST16_MIN	INT16_MIN
#define	INT_FAST16_MAX	INT16_MAX
#define	UINT_FAST16_MAX	UINT16_MAX

#define	INT32_MIN	(-2147483647-1)
#define INT32_MAX	2147483647
#define UINT32_MAX	4294967295U
#define	INT_LEAST32_MIN	(-2147483647-1)
#define	INT_LEAST32_MAX	2147483647
#define	UINT_LEAST32_MAX	4294967295U
#define	INT_FAST32_MIN	INT32_MIN
#define	INT_FAST32_MAX	INT32_MAX
#define	UINT_FAST32_MAX	UINT32_MAX

#define	SIZE_MIN	(-LONG_MAX - 1L)
#define	SIZE_MAX	LONG_MAX

#define	PTRDIFF_MIN	(-LONG_MAX - 1L)
#define PTRDIFF_MAX	LONG_MAX

/* we don't have signals, therefore no SIG_ATOMIC_MIN/MAX */
#endif
