#include <sys/timeb.h>
#include <stdio.h>
void get_time(struct timeb* timenow) {
	ftime(timenow);
}

void time_gap(struct timeb* timebefore) {
	struct timeb timenow;
	ftime(&timenow);
	printf("gap time is %lldms\n", (timenow.time-timebefore->time)*1000+timenow.millitm - timebefore->millitm);
}
