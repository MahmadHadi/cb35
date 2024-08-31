// arr -> even - odd 

#include <stdio.h>
int getDiff(int arr[], int size) {
    int oddSum = 0, evenSum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) { // * even number 
            evenSum += arr[i];
        } else { // * odd number 
            oddSum += arr[i];
        }
    }
    // int diff = evenSum - oddSum;
    // return diff;

    return evenSum - oddSum; // 

    // evenSum - oddSum = 6 - 9 -> -3 
    // return -3 
} 
int main() {    
 
    int arr[] = {1, 21, 3, 14, 51};
    int size = sizeof(arr) / sizeof(arr[0]);

    int ans = getDiff(arr, size);
    printf("ans = %d ", ans);

    return 0;
}