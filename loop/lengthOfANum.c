// input -> num -> length = ? 
// num = 421 -> length = 3 
// num = 23234 -> length = 5 
// num = -42 -> length = 2 

#include <stdio.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    int len = 0;

    // while (num != 0) {
    //     len++;
    //     num /= 10;
    // }

    for (; num != 0;) {
        len++;
        num /= 10;

        printf("num = %d len = %d \n", num, len);
    }
    printf("len = %d ", len);
}

// num = 123 
// len = 0 

// len++ // 1 
// num = num / 10 = 123 / 10 = 12

// len++ // 2 
// num = num / 10 // 1 

// len++ // 3 
// num = num / 10 // 0 
//  while (num != 0) 

// num = 3290
// len = 0 

// num != 0 -> 3290 != 0 -> t 
//     len++ // 1 
//     num /= 10 // 329
// num != 0 -> 329 != 0 -> t 
//     len++ // 2 
//     num /= 10 // 32
// num != 0 -> 32 != 0 -> t 
//     len++ // 3 
//     num /= 10 // 3
// num != 0 -> 3 != 0 -> t 
//     len++ // 4 
//     num /= 10 // 0 
// num != 0 -> 0 != 0 -> f -> loop break 

