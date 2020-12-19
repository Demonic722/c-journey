#include <stdio.h>

int main(void) {
    int x = 10;
    int *p;

    p = &x;
    printf("Contents of p: %p\n", p);

    ++p;
    printf("Contents of p: %p\n", p);

    return 0;
}