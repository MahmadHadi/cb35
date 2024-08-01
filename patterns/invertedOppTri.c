//      * * *
//        * *
//          *

#include <stdio.h>
void main() {
    // j = 1, j <= i, j++ -> # 
    // i = 3, i >= 1, i-- -> * 
    int height = 3;
    for (int i = 1; i <= height; i++) { // -> "\n"
        for (int j = 1; j <= i - 1; j++) { // #     
            // printf("# ");
            printf("  ");
        }

        for (int j = height; j >= i; j--) { // * 
            printf("* ");
        }

        printf("\n");
    }
}