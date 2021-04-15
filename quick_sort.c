#include "sort.h"
void quick_sort(int origin[], size_t length) {
	if (length == 1||length==0)return;
	size_t tail = length-1;
	int index = 0;
	for (size_t i = 0;i < length-1;i++) {
		if (origin[index + 1] < origin[index]) {
			swap(&origin[index + 1], &origin[index]);
			index++;
		}
		else {
			swap(&origin[index + 1], &origin[tail]);
			tail--;
		}
	}
	quick_sort(origin, index);
	quick_sort(&origin[index+1], length-index-1);
}