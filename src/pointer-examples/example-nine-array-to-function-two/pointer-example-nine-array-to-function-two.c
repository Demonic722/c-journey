#include <stdio.h>

void toggleChar(char *ptr);

int main(void) {
    char string[100];

    printf("Enter a string: ");
    scanf("%[^\n]", string);
    toggleChar(string);
    printf("Toggled characters: %s\n", string);

    return 0;
}

void toggleChar(char *ptr) {
    for (int i = 0; *(ptr + i) != '\0'; ++i) {
        if (*(ptr + i) >= 'A' && *(ptr + i) <= 'Z') {
            *(ptr + i) += 32;
        } else if (*(ptr + i) >= 'a' && *(ptr + i) <= 'z') {
            *(ptr + i) -= 32;
        }
    }
}