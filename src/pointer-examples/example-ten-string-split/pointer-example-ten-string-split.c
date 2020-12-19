#include <stdio.h>
#include <stdlib.h>

#define MAX 10

void split(char string[], char partOne[], char partTwo[]);

int main(void) {
    char string[] = "back*pack";
    char partOne[MAX];
    char partTwo[MAX];

    split(string, partOne, partTwo);
    printf("Part One: %s\nPart Two: %s\n", partOne, partTwo);

    return 0;
}

void split(char string[], char partOne[], char partTwo[]) {
    int stringIndex = 0;

    while (string[stringIndex] != '*') {
        partOne[stringIndex] = string[stringIndex];
        ++stringIndex;
    }

    partOne[stringIndex] = '\0';
    ++stringIndex;

    int partTwoIndex = 0;

    while (string[stringIndex] != '\0') {
        partTwo[partTwoIndex] = string[stringIndex];
        ++stringIndex;
        ++partTwoIndex;
    }

    partTwo[partTwoIndex] = '\0';
}