#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;

    printf("Enter number of integers: ");
    scanf("%d", &n);

    int *p = (int *) malloc(n * sizeof(int));

    if (p == NULL) {
        printf("Unable to allocate memory, so the program will be terminated.\n");
        exit(1);
    }

    for (int i = 0; i < n; ++i) {
        printf("Next number: ");
        scanf("%d", p + i);
    }

    printf("Content of the array:\n");
    
    for (int i = 0; i < n; ++i) {
        printf("%4d", *(p + i));
    }

    printf("\n");

    int newSize = n + 2;
    p = (int *) realloc(p, newSize * sizeof(int));

    if (p == NULL) {
        printf("Unable to allocate memory, so the program will be terminated.\n");
        exit(1);
    }

    *(p + n) = 10;
    *(p + n + 1) = 20;

    printf("Content of the new array:\n");
    
    for (int i = 0; i < newSize; ++i) {
        printf("%4d", *(p + i));
    }

    printf("\n");
    free(p);

    return 0;
}