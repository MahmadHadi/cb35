#include <stdio.h>
int main() {    
    int height = 9;
    for (int i = 1; i <= (height + 1) / 2; i++) {
        for (int j = ((height + 1) / 2) - 1; j >= i; j--) {
            printf(" ");
        } 
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (int i = 1; i <= (height - 1) / 2; i++) {
        for (int j = 1; j <= i; j++) {
            printf(" ");
        } 
        // for (int j = (height - 1) / 2; j >= i; j--) {
        //     if ((i + j) == ((height + 1) / 2) && j != (height - 1) / 2) {
        //         printf("  ");
        //     } else {
        //         printf("* ");
        //     }
        // }
        for (int j = (height - 1) / 2; j >= i; j--) {
            if ((i + j) == ((height + 1) / 2) || j == 1 || j == i || i == 4) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}