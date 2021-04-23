#include "sort.h"

void merge(int array[], size_t start_index, size_t second_half_index, size_t end_index, int result[]);

void merge_sort(int array[], size_t start, size_t end, int result[]) {
	switch (end - start)
	{
	case 0:result[start] = array[0];return;
	case 1:break;
	default:
		merge_sort(array, start, start + (end - start) / 2, result);
		merge_sort(array + (end - start) / 2 + 1, start + (end - start) / 2 + 1, end, result);
		break;
	}
	merge(array, start, (start + end) / 2 + 1, end, result);
}

void merge(int array[], size_t start, size_t half,size_t end, int result[]) {
	size_t result_index = start;
	for (size_t i = 0, j = half-start;result_index <= end;result_index++) {
		if (array[i] > array[j]) {
			result[result_index] = array[j];
			j++;
			if (j+start > end) {
				memcpy(result + result_index + 1, array + i, (half - start - i) * sizeof(int));
				break;
			}
		}
		else {
			result[result_index] = array[i];
			i++;
			if (i + start == half) {
				memcpy(result + result_index + 1, array + j, sizeof(int) * (end - start - j + 1));
				break;
			}
		}
	}
	memcpy(array,result+start,(end-start+1)*sizeof(int));
}
