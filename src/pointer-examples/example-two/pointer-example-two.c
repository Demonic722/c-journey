#include <stdio.h>

int main(void) {
    int *p;
    int *q;
    int **k;
    int x = 100;

    p = &x;
    k = &p;

    printf("%d\n", **k);

    return 0;
}