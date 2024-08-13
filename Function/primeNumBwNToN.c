// input -> start, end 
// print all prime nums bw start and end 

// start = 5, end = 10
// 5 7 

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
    
    int start = 50, end = 100;

    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}