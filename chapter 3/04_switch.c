#include <stdio.h>

int main() {
    int a;
    printf("Enter a : ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        /* code */
        printf("You have entered 1. \n");
        break;
    case 2:
        /* code */
        printf("You have entered 2. \n");
        break;
    case 3:
        /* code */
        printf("You have entered 3. \n");
        break;
    case 4:
        /* code */
        printf("You have entered 4. \n");
        break;
    
    default:
        printf("Nothing matched. \n");
        break;
    }
    return 0;
}