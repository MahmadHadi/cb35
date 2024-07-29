#include <stdio.h>
void main() {
    int count = 2;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            // printf("%2d ", count);
            printf("%.2d ", count);
            count += 2;
        }
        printf("\n");
    }   
}