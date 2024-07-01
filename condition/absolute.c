// -1 -> 1 
// -101 -> 101 
// 101 -> 101 

#include <stdio.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num); // num = -10

    int abs = num; // num = 10, abs = num => abs = 10
    if (num < 0) { // -10 < 0 -> t 
        // printf("%d ", num * -1);  // num * -1 = -10 * -1 = 10
        abs = num * -1;
    }
    // if (num > 0) { 
    //     printf("%d ", num); 
    // }
    printf("%d ", abs); 
}