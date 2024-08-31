// arr = {1, 2, 1, 2, 3, 3, 1, 2}
// num = 10
// ans = 0 

#include <stdio.h>

int countOcc(int arr[], int size, int key) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 1, 2, 3, 3, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num = 11;

    printf("count = %d ", countOcc(arr, size, num));

    return 0;
}