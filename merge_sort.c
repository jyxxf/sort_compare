#include "sort.h"

void merge(int array_small[], int array_big[]);

void merge_sort(int array[], size_t length,int result[]) {
	if (length > 1) {
		merge_sort(array, length / 2, result);
		merge_sort(array + length / 2, length - length / 2, result);
		merge(array, array + length / 2, length);
	}
}

void merge(int* array_former,int* array_later,size_t length) {
	size_t former_length = (array_later - array_former) / sizeof(int);
	size_t later_length = length - former_length;

}
