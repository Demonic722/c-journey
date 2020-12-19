#include <stdio.h>
#include <stdlib.h>

int **allocate(int rows, int cols);
void deallocate(int **p, int rows);
void inputValues(int **p, int rows, int cols);
void printValues(int **p, int rows, int cols);

int main(void) {
    int rows;
    int cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int **p = allocate(rows, cols);
    
    inputValues(p, rows, cols);
    printValues(p, rows, cols);
    deallocate(p, rows);

    return 0;
}

int **allocate(int rows, int cols) {
    int **p = (int **) malloc(rows * sizeof(int *));

    if (p == NULL) {
        exit(1);
    }

    for (int i = 0; i < rows; ++i) {
        *(p + i) = (int *) malloc(cols * sizeof(int));
    }

    return p;
}

void deallocate(int **p, int rows) {
    for (int i = 0; i < rows; ++i) {
        free(*(p + i));
    }

    free(p);
}

void inputValues(int **p, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("Enter the value for row #%d, column #%d: ", i, j);
            scanf("%d", *(p + i) + j);
        }
    }
}

void printValues(int **p, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%6d", *(*(p + i) + j));
        }

        printf("\n");
    }
}