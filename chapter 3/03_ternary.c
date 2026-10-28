#include <stdio.h>

int main() {
    // condition ? expression-if-true : expression-if-false

    int a = 345;
    int b = 32;
    int result = a > b ? a : b;
    printf("The larger number is: %d\n", result);
    return 0;
}