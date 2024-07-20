// 5! = 5 * 4 * 3 * 2 * 1 = 120 
// 7! = 7 * 6 * 5 * 4 * 3 * 2 * 1 = 72 * 7 = 5040

// -ve -> invalid input 
// 0! = 1 
// 1! = 1
// 2! = 2 => 2 * 1 = 2

#include <stdio.h>
void main() {
    int num = 7;
    printf("Enter a number : ");
    scanf("%d", &num);
    int ans = 1;

    if (num < 0) {
        printf("Invalid input\n");
    } else {
        for (int i = num; i >= 1; i--) {
            ans = ans * i;
        }
        printf("%d! = %d ", num, ans);
    }
}

// num = 5 
// int ans = 1;

// ans = num * ans; // 5 * 1 = 5 
// num-- // num = 4 

// ans = num * ans; // 4 * 5 = 20 
// num-- // num = 3

// ans = num * ans; // 3 * 20 = 60
// num-- // num = 2

// ans = num * ans; // 2 * 60 = 120
// num-- // num = 1

// ans = num * ans; // 120 * 1 = 120 
// num-- // num = 0

// num >= 1 -> 0 >= 1 -> f -> loop end 

// -------------

// num = 3 

// ans = 1

// ans = num * ans = 3 * 1 = 3 
// num-- 2

// ans = num * ans = 2 * 3 = 6 
// num-- // num = 1 

// ans = num * ans = 1 * 6 = 6 
// num-- // num = 0 

// num >= 1 -> 0 >= 1 -> f -> loop end 