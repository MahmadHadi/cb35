// arr = {1, 2, 3, 4, 5, 1, 3, 4}
// ans = 6 

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    num *= num < 0 ? -1 : 1;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int occOfPrime(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i]) == 1) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 1, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int ans = occOfPrime(arr, size);
    printf("ans = %d ", ans);
    return 0;
}