#include <stdlib.h>
void bubbling_sort(int origin[], size_t length) {
	int temp;
	for(size_t i=1;i<length;i++){
		for (size_t j = 0;j < length-i;j++) {
			if (origin[j] > origin[j + 1]) {
				temp = origin[j];
				origin[j] = origin[j + 1];
				origin[j + 1] = temp;
			}
		}
	}
}