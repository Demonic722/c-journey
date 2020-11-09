#include <stdio.h>

int main(void) {
    char ch = 'A';

    printf("Your character is %c\n", ch);
    printf("Enter another character: ");
/*
    char nextCh;

    scanf("%c", &nextCh);
*/
    char nextCh = getchar();

    printf("Your new character is %c\n", nextCh);
    printf("Decimal value of ch: %d\n", ch);
    printf("Decimal value of nextCh: %d\n", nextCh);

    return 0;
}