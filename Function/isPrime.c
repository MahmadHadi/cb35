// * 1, 2, 3, 5, 7, 11, 13, 17, 19, 23, ... 
// input -> num -> check if num is prime or not 
// 1 5 
// 3 
// 1 3 
// 11 
// 1 11 
// 1, 2 
// 4 
// 1 2 4 -> prime X 
// 6 
// 1 2 3 6 -> prime X 

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    for (int i = 2; i <= num - 1; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() { 

    int num = 11;
    // printf("Enter a number : ");
    // scanf("%d", &num);

    // printf("%d ", isPrime(num));
    
    if (num == 0) {
        printf("0 is neither prime nor composite ");
    } else if (isPrime(num)) {
        printf("Num is prime a num ");
    } else {
        printf("Num is not a prime ");
    }
    return 0;
}



// num = 3 
// isPrime(3)

// i = 2 
// i <= 2 -> t 
//     num % 2 == 0 -> 3 % 2 == 0 -> f 
//     i++ // i = 3
// i <= 2 -> f -> loop break;
// return true 

// num = 4 

// i = 2 
// i <= 3 -> 2 <= 3 -> t 
//     num % i == 0 -> 4 % 2 == 0 -> t 
//         return true -> fun break;

// main() 
