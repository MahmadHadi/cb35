#include <stdio.h>
void main() {
    int num = 4;
    do {
        printf("%d ", num); // 4 
        num--; // num = 3 
    } while (num >= 5); // num >= 5 -> 3 >= 5 -> f -> loop end
    // 10 9 8 7 6 5
}