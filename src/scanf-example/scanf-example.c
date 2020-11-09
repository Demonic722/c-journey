#include <stdio.h>

int main(void) {
    float debt;

    printf("How much debt do you owe? ");
    scanf("%f", &debt);
    printf("You owe %f.\n", debt);

    return 0;
}