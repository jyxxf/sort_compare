#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"

#define size 2000
int test[10] = { -8,123,-9,0,55,222,7,64,64,85 };

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
    time_gap(&timenow,"selection");

    int bubbling[size];
    memcpy(bubbling, origin, sizeof(origin));
    get_time(&timenow);
    bubbling_sort(bubbling, size);
    time_gap(&timenow,"bubbling");

    int insert[size];
    memcpy(insert, origin, sizeof(origin));
    get_time(&timenow);
    insert_sort(insert, size);
    time_gap(&timenow,"insert");

    int quick[size];
    memcpy(quick, origin, sizeof(origin));
    get_time(&timenow);
    quick_sort(quick, size);
    time_gap(&timenow,"quick");

    int merge[size];
    memcpy(merge, origin, sizeof(origin));
    get_time(&timenow);
    int* result = (int*)malloc(size * sizeof(int));
    merge_sort(merge, 0, size-1, result);
    time_gap(&timenow,"merge");
    free(result);

    int radix[size];
    memcpy(radix, origin, sizeof(origin));
    get_time(&timenow);
    radix_sort(radix, size);
    return 0;
}

void get_time(struct timeb* timenow) {
    ftime(timenow);
}

void time_gap(struct timeb* timebefore,char *str) {
    struct timeb timenow;
    ftime(&timenow);
    printf("%s gap time is %lldms\n", str,(timenow.time - timebefore->time) * 1000 + timenow.millitm - timebefore->millitm);
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