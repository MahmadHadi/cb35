// * check if number is positive or negative 
#include <stdio.h>
void main() {
    float num;
    printf("Enter a number : ");
    scanf("%f", &num);

    if (num > 0) {
        printf("Given number is +ve ");
    }
    if (num <= 0) {
        printf("Given number is -ve ");
    }
}