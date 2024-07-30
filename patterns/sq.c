// * * * * *
// *       *
// *       *
// *       *
// * * * * * 

#include <stdio.h>
void main() {
    int num = 5;
    for (int i = 1; i <= num; i++) { // row 
        for (int j = 1; j <= num; j++) { // col
            if (i == 1 ||
             j == 1 ||
             i == num ||
             j == num) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}