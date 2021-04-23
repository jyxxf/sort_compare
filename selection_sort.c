#include "sort.h"

void selection_sort(int array[], size_t length) {
	if (length == 1)return;
	int index = 0;
	for (size_t i = 1;i < length;i++) {
		if (array[i] < array[index])
			index = i;
	}
	swap(&array[0], &array[index]);
	selection_sort(&array[1], length - 1);
}
