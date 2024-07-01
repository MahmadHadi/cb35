// temperature input 50 >= you have fever
#include <stdio.h>
void main() {
    float temp;
    printf("Enter your temperature : ");
    scanf("%f", &temp);

    if (temp > 50) {
        printf("you have fever ");
    } else {
        printf("you are normal ");
    }
}