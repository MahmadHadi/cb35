// get absolute value 
// -1 -> 1 
// 1 -> 1 
// -101 -> 101

// 101 -> 101 
// -101 -> 101 

// -32 -> 32 
// 32 -> 32 

// * -ve -> +ve { * -1}
// * +ve -> +ve

#include <stdio.h>
void main() { 
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    // if (num < 0) {
    //     printf("abs = %d ", num * -1);
    // } else {
    //     printf("abs = %d ", num);
    // }

    (num < 0) ? 
        printf("abs = %d ", num * -1) : 
        printf("abs = %d ", num);
}