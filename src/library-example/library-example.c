#include <stdio.h>
#include "headers/area.h"

int main(void) {
    printf("Area of circle with radius 6 is %lf\n", getCircleArea(6));
    printf("Area of triangle with base 16 and height 10 is %lf\n", getTriangleArea(16, 10));

    return 0;
}