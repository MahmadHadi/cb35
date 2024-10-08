// num = 5 
// 1 - 5 

// 1 2 3 5 

// num = 4 
// 1 2 3 

// num = 15 
// 1 2 3 5 7 11 13 

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
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        // printf("%d %d \n", i, isPrime(i));
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}
