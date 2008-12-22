#ifndef _RTC_H_
#define _RTC_H_

#ifndef ONLY_OFFICIAL_CALLS
extern void RTC_Reset(int);
extern void RTC_GetTime(unsigned int *, unsigned int *, unsigned int *, unsigned int *);
extern int RTC_GetTicks(void);
extern void RTC_SetDateTime(unsigned char *);
#endif


#endif
