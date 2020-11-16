#include <stdio.h>
#include <string.h>

int main(void) {
    char string[80];

    printf("Enter your name: ");
    scanf("%[^\n]", string);
/*
    unsigned long length;
    
    for (length = 0; string[length] != '\0'; ++length);
*/
    printf("The length of the string is %lu\n", strlen(string));

    return 0;
}