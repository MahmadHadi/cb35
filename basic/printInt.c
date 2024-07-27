#include <stdio.h>
void main() {
    int num = 1;
    float fl = 3.1212;

    printf("num = %d \n", num);
    printf("fl = %f \n", fl);

    printf("num = (%%.2d) %.2d \n", num);
    printf("fl (%%.2f) = %.2f \n", fl);


    printf("\n--------------\n");
    num = 12312;
    printf(" %.2d \n", num);
}