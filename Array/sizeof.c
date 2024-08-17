#include <stdio.h>
int main() { 

    int arr[1];

    printf("total size of arr = %d \n", sizeof(arr));

    int size = sizeof(arr) / sizeof(arr[0]); // * size -> number of elem present in arr 

    printf("size = %d \n", size);

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}