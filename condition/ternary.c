#include <stdio.h>
void main() {
    if (0) { // 1 = true 
        printf("True \n");
    } else {
        printf("False \n");
    }

    0 ? printf("True \n") : printf("False \n");
}