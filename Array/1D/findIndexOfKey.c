#include <stdio.h>

int getIndex(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        } 
    }
    return -1;
}

int main() { 

    int arr[] = {1, 2, 2, 3, 2, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 2;

    printf("Key found at index : %d ", getIndex(arr, size, key));
    return 0;
}   