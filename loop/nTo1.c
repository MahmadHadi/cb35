// * input -> number { int n } -> n -> 1 
// n = 10 -> 10 9 8 ... 1 use abs fun 

#include <stdio.h>
#include <stdlib.h>
void main() {
    int n = -12;
    // printf("Enter a number : ");
    // scanf("%d", &n);

    n = abs(n); 

    // int i;
    // for (i = n; i >= 1; i--) {
    //     printf("%d ", i);
    // }

    // i = n;
    while (n > 0) {
        printf("%d ", n);
        n--;
    }
}

// n = 5
// i = n -> i = 5 

// print i // 5 
// i-- -> i = i - 1 -> 5 - 1 -> 4 

// print i // 4 
// i-- -> 3 

// print i // 3 
// i-- -> 2 

// print i // 2 
// i-- // 1 

// print i // 1 
// i-- // 0 

// i >= 1 -> 0 >= 1 -> f -> loop break;


// while 

// n = 5 

// n > 0 -> 5 > 0 -> t 
//     n-- // n = 4 
//     print n // 4 
// n > 0 -> 4 > 0 -> t 
//     n-- // n = 3 
//     print n // 3 
// n > 0 -> 3 > 0 -> t 
//     n-- // n = 2 
//     print n // 2 
// n > 0 -> 2 > 0 -> t 
//     n-- // 1 
//     print n // 1 
// n > 0 -> 1 > 0 -> t 
//     n-- // 0 
//     print n // 0 
// n > 0 -> 0 > 0 -> f -> loop break 