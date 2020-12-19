#include <stdio.h>
#include <stdlib.h>

int main(void) {
    /*
     * p is an array of pointers, with each element of array p
     * being an integer pointer
     */
    int *p[3];

    int **k = p;
    int x[] = { 1, 2, 3 };
    int y[] = { 10, 20, 30 };
    int z[] = { 100, 200, 300 };

    p[0] = x;
    p[1] = y;
    p[2] = z;

    printf("%d\n", **p); // Prints 1
    printf("%d\n", *(*(p + 1) + 2)); // Prints 30 (p[1][2])

    return 0;
}