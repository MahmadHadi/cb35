// arr -> arr = {1, 2, 3} -> sum = 1 + 2 + 3 = 6 
// arr -> arr = {1, 2, 3, 4, 5} -> sum = 1 + 2 + 3 + 4 + 5 = 15 

#include <stdio.h>

int getSum(int arr[], int size) {
    // 0 -> size
    // sum = 0 
    // sum += arr[i] 
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() { 

    int arr[] = {1, 2, 3, 4, -5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("sum = %d ", getSum(arr, size));
    return 0;
} 