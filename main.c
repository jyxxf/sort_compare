#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/timeb.h>
#include <string.h>

#define size 50000
extern get_time();
extern time_gap();
extern insert_sort();
extern bubbling_sort();

struct timeb timenow;

int main() {
    srand(time(NULL));
    int origin[size];
    for (size_t i = 0;i < size;i++) {
        origin[i] = rand();
    }

    int insert[size];
    memcpy(insert, origin, sizeof(origin));
    get_time(&timenow);
    insert_sort(insert, size);
    /*
    for (size_t i = 0;i < size;i++) {
        printf("%d\n", insert[i]);
    }
    */
    time_gap(&timenow);

    int bubbling[size];
    memcpy(bubbling, origin, sizeof(origin));
    get_time(&timenow);
    bubbling_sort(bubbling, size);
    /*
    for (size_t i = 0;i < size;i++) {
        printf("%d\n", bubbling[i]);
    }
    */
    time_gap(&timenow);
    return 0;
}
