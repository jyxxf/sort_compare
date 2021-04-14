#ifndef __SORT_H_
#define __SORT_H_

#include <stdlib.h>
#include <sys/timeb.h>
#include <stdio.h>

struct timeb timenow;

void bubbling_sort(int origin[], size_t length);
void insert_sort(int array[], size_t length);
void quick_sort(int origin[], size_t length);

void get_time(struct timeb* timenow);
void time_gap(struct timeb* timebefore);
void swap(int* a, int* b);

#endif 
