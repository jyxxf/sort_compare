#include "sort.h"
void selection_sort(int array[], size_t length) {
	if (length == 1)return;
	for (size_t i = 1;i < length;i++) {
		if (array[0] > array[i])
			swap(&array[0], &array[i]);
	}
	selection_sort(&array[1], length - 1);
}