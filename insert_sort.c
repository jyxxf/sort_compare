#include "sort.h"
void insert_sort(int array[],size_t length) {
	for (size_t i = 1;i < length;i++) {
		for (size_t j = 0;j < i;j++) {
			if (array[i] < array[j]) {
				swap(&array[i], &array[j]);
			}
		}
	}
}
