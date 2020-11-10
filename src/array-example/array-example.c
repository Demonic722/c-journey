#include <stdio.h>

int main(void) {
    int size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; ++i) {
        printf("Enter element at array index %d: ", i);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < size; ++i) {
        printf("Array element %d: %d\n", i, array[i]);
    }

    return 0;
}