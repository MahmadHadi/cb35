// arr -> return maximum elem 

// arr = {1, 2, 3} -> return 3 
// arr = {1, 5, 2, 10, 1} -> return 10 

#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
int getMax(int arr[], int size) {
    // int max = arr[0];
    int max = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

int main() {    
 
    int arr[] = {-1200, -1001, -1010};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("max elem = %d ", getMax(arr, size));

    return 0;
}