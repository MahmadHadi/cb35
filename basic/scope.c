#include <stdio.h>
#include <stdbool.h>

int temp = 10;
void main() {

    if (1) {
        int num = 10;
        printf("temp = %d \n", temp);
    }
    printf("temp = %d \n", temp);
    // printf("num = %d ", num); // error 
    int num;
    printf("num = %d ", num); 
}