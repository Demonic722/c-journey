#include <stdio.h>

int main(void) {
    int *p;
    float *f;
    double *d;
    char *c;

    printf(
        "Integer Pointer %lu\nFloat Pointer %lu\nDouble Pointer %lu\nCharacter Pointer %lu\n",
        sizeof(p), sizeof(f), sizeof(d), sizeof(c)
    );
    printf(
        "Integer %lu\nFloat %lu\nDouble %lu\nCharacter %lu\n",
        sizeof(*p), sizeof(*f), sizeof(*d), sizeof(*c)
    );

    return 0;
}