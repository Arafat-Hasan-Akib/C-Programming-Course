#include <stdio.h>

int main()
{
    int r = 30;
    int h = 30;
    printf("The area of circle with radius %d is %f", r, 3.1416 * r * r);
    printf("\nThe volume of cylinder with radius %d and height %d is %f", r, h, 3.1416 * r * r * h);
    return 0;
}