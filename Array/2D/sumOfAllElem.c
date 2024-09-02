#include <stdio.h>
int main() {    
 
    int arr[][5] = {
        {11, 22, 49, 54, 25}, 
        {111, 32, 13, 14, 45}, 
        {1, 12, 43, 41, -35}, 
        {31, 12, 61, 24, 15}
    };
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            sum += arr[i][j];
        }
        printf("sum = %d for row = %d \n", sum, i);
        sum = 0;
    }
    printf("sum = %d ", sum);
    return 0;
}