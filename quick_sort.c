#include <stdlib.h>

void quick_sort(int origin[], size_t length) {
	if (length == 1||length==0)return;
	size_t tail = length-1;
	int temp;
	int index = 0;
	for (size_t i = 0;i < length-1;i++) {
		if (origin[index + 1] < origin[index]) {
			temp = origin[index + 1];
			origin[index+1] = origin[index];
			origin[index] = temp;
			index++;
		}
		else {
			temp = origin[tail];
			origin[tail] = origin[index+1];
			origin[index + 1] = temp;
			tail--;
		}
	}
	quick_sort(origin, index);
	quick_sort(&origin[index+1], length-index-1);
}