#include <stdio.h>
#include <string.h>

int main(void) {
    char string[80];

    printf("Enter your name: ");
    scanf("%[^\n]", string);
    printf("Welcome, %s!\n", string);

    return 0;
}