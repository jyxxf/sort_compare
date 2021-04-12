#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/timeb.h>

extern get_time();

int main() {
    srand(time(NULL));
    int origin[100];
    for (size_t i = 0;i < 100;i++) {
        origin[0] = rand();
    }

    get_time();
    return 0;
}
