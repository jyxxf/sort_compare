#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"

#define size 10

int main() {

    srand(time(NULL));
    int origin[size];
    for (size_t i = 0;i < size;i++) {
        origin[i] = rand();
    }

    int selection[size];
    memcpy(selection, origin, sizeof(origin));
    get_time(&timenow);
    selection_sort(selection, size);
    time_gap(&timenow);

    int bubbling[size];
    memcpy(bubbling, origin, sizeof(origin));
    get_time(&timenow);
    bubbling_sort(bubbling, size);
    time_gap(&timenow);

    int insert[size];
    memcpy(insert, origin, sizeof(origin));
    get_time(&timenow);
    insert_sort(insert, size);
    time_gap(&timenow);


    int quick[size];
    memcpy(quick, origin, sizeof(origin));
    get_time(&timenow);
    quick_sort(quick, size);
    time_gap(&timenow);

    int merge[size];
    memcpy(merge, origin, sizeof(origin));
    get_time(&timenow);
    int* result = (int*)malloc(size * sizeof(int));
    merge_sort(merge, 0, size - 1, result);
    time_gap(&timenow);
    printall(result, size);
    free(result);

    return 0;
}

void get_time(struct timeb* timenow) {
    ftime(timenow);
}

void time_gap(struct timeb* timebefore) {
    struct timeb timenow;
    ftime(&timenow);
    printf("gap time is %lldms\n", (timenow.time - timebefore->time) * 1000 + timenow.millitm - timebefore->millitm);
}

void swap(int* a, int* b) {
    int temp = (*a);
    *a = *b;
    *b = temp;
}

void printall(int array[], size_t length) {
    for (size_t i=0;i < length;i++) {
        printf("%d\n", array[i]);
    }
}