#include <stdio.h>
int getMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
        printf("i = %d, min = %d \n", i, min);
    }
    return min;
}
int main() {
 
    int arr[] = {1, 2, -3, 4, -5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("min elem = %d ", getMin(arr, size));
    return 0;
}