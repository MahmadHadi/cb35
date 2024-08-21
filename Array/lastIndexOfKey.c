// find last index of key 
//     arr = {1, 1, 2, 2, 1, 2, 1}
//     key = 2]

#include <stdio.h>

int getLastIndex2(int arr[], int size, int key) {
   
    for (int i = size - 1; i >= 0; i--) {
        printf("ans2 loop -> %d \n", i);
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int getLastIndex1(int arr[], int size, int key) {
    int ans = -1;
    for (int i = 0; i < size; i++) {
        printf("ans1 loop -> %d \n", i);
        if (arr[i] == key) {
            ans = i;
        }
    }
    return ans;
}

int main() { 

    // int arr[] = {1, 1, 2, 2, 1, 2, 2};
    // ! Best case 
    int arr[] = {1, 1, 2, 2, 1, 2, 2, 3};
    
    // ! worst case 
    // int arr[] = {1, 1, 2, 2, 1, 2, 2};

    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 3;

    printf("ans1 = %d \n", getLastIndex1(arr, size, key));
    printf("\n-----------\n");
    printf("ans2 = %d \n", getLastIndex2(arr, size, key));

    return 0;
}