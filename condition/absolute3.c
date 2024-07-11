#include <stdio.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    // if (num < 0) {
    //     num = num * -1;
    // } else {
    //     num = num;
    // }
    
    num = num < 0 ? num * -1 : num; // num * -1 || num
    printf("%d \n", num);

    printf("%d \n", num < 0 ? num * -1 : num);
    
}