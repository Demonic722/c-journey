#include <stdio.h>

int main(void) {
    int x[] = { 10, 20, 30, 40, 50 };

    printf("%p\n%p\n", x, &x[0]);
    printf("\nContent of the array\n");

    for (int i = 0; i < sizeof(x) / sizeof(*x); ++i) {
        printf("%4d ", *(x + i));
    }

    printf("\n");

    return 0;
}