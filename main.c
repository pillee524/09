#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
    int a[SIZE] = {1, 2, 3, 4, 5};
    int b[SIZE] = {1, 2, 6, 1, 3};
    int flag_same = 1;

    for (int i = 0; i < SIZE; i++) {
        if (b[i] != a[i]) {
            printf("Not same\n");
            printf("a[%d] = %d, b[%d] = %d\n", i, a[i], i, b[i]);
            flag_same = 0;
        }
    }
    if (flag_same) {
        printf("Same\n");
    }
    return 0;
}