#include <stdio.h>
#include <string.h>

int main(void) {
    // char string[80] = "Hello World";
    char string[80];

    strcpy(string, "Hello World");
    printf("%s\n", string);

    return 0;
}