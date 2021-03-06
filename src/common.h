#ifndef __COMMON_H__
#define __COMMON_H__

#define GetFlag(flag, x) (flag & (1 << x))
#define SetFlag(flag, x) (flag |= (1 << x))
#define DelFlag(flag, x) (flag &= ~(1 << x))

#define RET_SUCCESS 1
#define RET_ERROR -1

#ifdef __DEBUG__
#define tagu_debug(...) \
{\
	printf(__VA_ARGS__);\
}
#else
#define tagu_debug(...) {}
#endif

#endif
