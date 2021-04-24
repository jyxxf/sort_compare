#include "sort.h"

int num_of_digit(int array[], size_t length);
void put_in(int array[],int **bucket, size_t times,size_t length);

void radix_sort(int array[],size_t length) {
	size_t times=num_of_digit(array, length);
	int* bucket[10];size_t bucket_size[10];
	for (size_t i = 0;i < 10;i++) {
		bucket[i] = (int*)malloc(sizeof(int) * (length / 10 + 1));
	}
	for (size_t i = 1;i <= times;i++) {
			put_in(array,bucket,times,length);
	}
}

int num_of_digit(int array[], size_t length) {
	int temp = array[0];
	while (--length)
		if (temp < array[length])
			temp = array[length];
	size_t n = 1;
	while (temp /= 10)
		n++;
	return n;
}

void put_in(int array[], int** bucket, size_t times,size_t length) {
	int index;
	for (size_t i = 0;i < length;i++) {
		index = array[i] % (10 * times);

	}
}