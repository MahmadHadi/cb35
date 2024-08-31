#include <stdio.h>
int main() { 
    int arr[] = {1, 2, 3, 4, 5, 1, 31};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%d ", size);
    return 0;
}