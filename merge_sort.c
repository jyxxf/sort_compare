#include "sort.h"

void merge(int array[], size_t start_index, size_t second_half_index, size_t end_index, int result[]);

void merge_sort(int array[], size_t start, size_t end, int result[]) {
	if (end - start) {
		merge_sort(array, start, start + (end - start) / 2, result);
		merge_sort(array + (end - start) / 2 + 1, start + (end - start) / 2 + 1, end, result);
		merge(array, start, (start + end) / 2 + 1, end, result);
	}
}

void merge(int array[], size_t start, size_t half, size_t end, int result[]) {
	size_t result_index = start,i = 0, j = half - start;
	while (j + start <= end && i + start < half) {
		if (array[i] > array[j]) {
			result[result_index] = array[j];
			j++;
		}
		else {
			result[result_index] = array[i];
			i++;
		}
		result_index++;
	}
	if (j + start > end)
		memcpy(result + result_index , array + i, (half - start - i) * sizeof(int));
	if (i + start == half)
		memcpy(result + result_index, array + j, (end - start - j + 1) * sizeof(int));
	memcpy(array, result + start, (end - start + 1) * sizeof(int));
}