// key -> key = 4 
// arr -> arr = {1, 2, 3, 4, 5}

#include <stdio.h>
#include <stdbool.h>

bool isKeyPresent(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return true;
        }
    }
    return false;
}

int main() { 

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 12;
    if (isKeyPresent(arr, size, key)) {
        printf("Key is present ");
    } else {
        printf("Key is not present ");
    }
    return 0;
}