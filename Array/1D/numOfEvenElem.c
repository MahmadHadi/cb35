// arr = {1, 2, 1, 2, 3, 4, 5} return 3 
// arr = {1, 2, 1, 2, 4, 4, 4, 5} return 5 

#include <stdio.h>

int getOccEven(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) { // even nums 
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;   
}

int getOddOcc(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) { // odd nums 
        if (arr[i] % 2 != 0) {
            count++;
        } 
    }
    return count;
}

int main() { 

    // int arr[] = {1, 2, 1, 2, 4, 4, 4, 5};
    int arr[] = {1, 3, 1, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("even nums = %d \n", getOccEven(arr, size));
    printf("odd nums = %d \n", getOddOcc(arr, size));
    return 0;
}