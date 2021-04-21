#include "sort.h"

void merge(int array[], size_t start_index, size_t second_half_index, size_t end_index, int result[]);
/*
void merge_sort(int array[], size_t start_index,size_t end_index,int result[]) {
	if (end_index - start_index >= 2) {
		merge_sort(array, start_index, start_index + (end_index - start_index) / 2, result);
		merge_sort(array + (end_index - start_index) / 2 + 1, start_index + (end_index - start_index) / 2 + 1, end_index, result);
	}
	else {
		if (end_index - start_index == 0) {
			result[start_index] = array[0];
			return;
		}
	}
	merge(array, start_index, (start_index+end_index)/2+1, end_index, result);
}
*/

void merge_sort(int array[], size_t start_index, size_t end_index, int result[]) {
	switch (end_index - start_index)
	{
	case 0:result[start_index] = array[0];return;
	case 1:break;
	default:
		merge_sort(array, start_index, start_index + (end_index - start_index) / 2, result);
		merge_sort(array + (end_index - start_index) / 2 + 1, start_index + (end_index - start_index) / 2 + 1, end_index, result);
	}
	merge(array, start_index, (start_index + end_index) / 2 + 1, end_index, result);
}

void merge(int array[], size_t start_index, size_t second_half_index,size_t end_index, int result[]) {
	size_t result_index = start_index;
	for (size_t i = 0, j = second_half_index-start_index;result_index <= end_index;result_index++) {
		if (array[i] > array[j]) {
			result[result_index] = array[j];
			if (j == end_index)
				memcpy(result+result_index+1, array+start_index+i, (second_half_index-start_index-i)*sizeof(int));
		}
		else {
			result[result_index] = array[i];
			i++;
		}
	}
	memcpy(array,result+start_index,(end_index-start_index+1)*sizeof(int));
}
