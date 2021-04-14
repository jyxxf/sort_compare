#include <stdlib.h>
void insert_sort(int array[],size_t length) {
	int temp;
	for (size_t i = 1;i < length;i++) {
		for (size_t j = 0;j < i;j++) {
			if (array[i] < array[j]) {
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
			}
		}
	}
}
