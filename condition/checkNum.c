// input -> num, check num = 1, 2, 3, 4, invalid
#include <stdio.h>
void main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    switch (num) {
    case 1:
        printf("One ");
        break;

    case 2:
        printf("Two ");
        break;

    case 3:
        printf("Three ");
        break;

    case 4:
        printf("Four ");
        break;

    default:
        printf("Invalid input ");
        break;
    }

    // if (num == 1) {
    //     printf("One ");
    // }
    // else {
    //     printf("Invalid input ");
    // }
}