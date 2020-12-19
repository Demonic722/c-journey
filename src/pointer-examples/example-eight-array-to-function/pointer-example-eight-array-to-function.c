#include <stdio.h>

void printArray(int *x, int size);

int main(void) {
    int x[] = { 10, 20, 30, 40, 50 };

    printArray(x, 5);

    return 0;
}

void printArray(int *x, int size) {
    for (int i = 0; i < size; ++i) {
        printf("%4d ", *(x + i));
    }

    printf("\n");
}