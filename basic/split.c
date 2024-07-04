// * split numbers 
// input -> 56 -> first = 5, sec = 6
// input -> 19 -> first = 1, sec = 9

#include <stdio.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    int first = num / 10;
    int sec = num % 10;

    printf("first = %d, sec = %d ", first, sec);

}