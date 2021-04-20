#ifndef __SORT_H_
#define __SORT_H_

#include <stdlib.h>
#include <sys/timeb.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

struct timeb timenow;

void bubbling_sort(int origin[], size_t length);
void insert_sort(int array[], size_t length);
void quick_sort(int origin[], size_t length);
void selection_sort(int array[], size_t length);
void merge_sort(int array[], size_t start_index, size_t end_index, int result[]);

void get_time(struct timeb* timenow);
void time_gap(struct timeb* timebefore);
void swap(int* a, int* b);
void printall(int array[], size_t length);

#endif 
