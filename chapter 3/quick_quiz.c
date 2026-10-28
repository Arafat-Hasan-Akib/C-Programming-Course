#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 80 && number <= 100){
        printf("A+\n");
    }
    else if (number >= 70 && number < 80){
        printf("A\n");
    }

    else if (number >= 60 && number < 70){
        printf("A-\n");
    }

    else if (number >= 50 && number < 60){
        printf("B\n");
    }

    else if (number >= 40 && number < 50){
        printf("C\n");
    }

    else if (number >= 33 && number < 40){
        printf("D\n");
    }

    else{
        printf("F\n");
    }
    return 0;
}