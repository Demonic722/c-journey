#include <stdio.h>

int main(void) {
    int var = 5;
    int *p;
    
    printf("%p\n", &var);

    p = &var;
    printf("%d\n", var);

    *p = 10;
    printf("%d\n", var);

    return 0;
}