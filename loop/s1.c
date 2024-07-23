// * 1, 2, 3, 4, 5... n

#include <stdio.h>
#include <stdlib.h> // to use abs function 
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int i = 1;
 
    num = abs(num); // get absolute number 
    printf("num = %d \n", num);

    do {
        printf("%d ", i);
        i++;
    } while (i <= num);
}

// n = 10 

// i = 1 
// print i // 1 
// i++ // i = i + 1 = 1 + 1 = 2 

// print i // 2 
// i++ //3 

// print i // 3 
// i++ // 4 
// .
// .
// .

// print i // 9 
// i++ // i = 10

// print i // 10 
// i++ // i = 11 
// i <= 10 -> i => 11 <= 10 -> f -> loop break;