#include <sys/timeb.h>
#include <stdio.h>
void get_time(void) {
	struct timeb timenow;
	ftime(&timenow);
	printf("%llds %dms\n", timenow.time, timenow.millitm);
}
