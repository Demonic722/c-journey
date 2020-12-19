#include <stdio.h>

int main(void) {
    // 00000000 | 00000000 | 00000001 | 00101100
    int x = 300;
    char *c;
    int *p;

    c = (char *) &x;
    p = &x;

    printf("Integer %d\nCharacter %d\n", *p, *c);

    ++c;
    printf("Integer %d\nCharacter %d\n", *p, *c);

    return 0;
}