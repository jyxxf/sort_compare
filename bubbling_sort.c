#include "sort.h"

/*normal
void bubbling_sort(int origin[], size_t length) {
	for(size_t i=1;i<length;i++){
		for (size_t j = 0;j < length-i;j++) {
			if (origin[j] > origin[j + 1]) {
				swap(&origin[j], &origin[j + 1]);
			}
		}
	}
}
*/
//recursion
void bubbling_sort(int origin[], size_t length) {
	if (length <= 1)return;
	for (size_t i = 0;i < length - 1;i++) {
		if (origin[i] > origin[i + 1])
			swap(&origin[i], &origin[i + 1]);
	}
	bubbling_sort(origin,length-1);
}

