#include <stdio.h>

void swap(int *x, int *y);

int main(void) {
    int x = 100;
    int y = 200;

    printf("Before Swap\nx = %d\ny = %d\n", x, y);
    swap(&x, &y);
    printf("After Swap\nx = %d\ny = %d\n", x, y);

    return 0;
}

void swap(int *x, int *y) {
    int z = *x;
    *x = *y;
    *y = z;
}