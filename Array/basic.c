#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() { 

    int num = 5;
    printf("Enter a number : ");
    scanf("%d", &num);
    int arr[num];

    // arr[0] = -10;
    // arr[1] = 121;
    // arr[2] = 422;
    // arr[3] = 3;
    // arr[4] = 412;

    for (int i = 0; i < num; i++) {
        // printf("Enter %d element : ", i + 1);
        // scanf("%d", &arr[i]);

        srand(time(NULL));
        arr[i] = rand(); 
    }

    // printf("%d ", arr[0]);
    // printf("%d ", arr[1]);
    // printf("%d ", arr[2]);
    // printf("%d ", arr[3]);
    // printf("%d ", arr[4]);

    for (int i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}