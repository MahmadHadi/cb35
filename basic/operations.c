#include <stdio.h>
void main() {
    int num = 10;
    printf("num = %d \n", num);
    
    // num = num + 10; // 10 + 10 = 20
    num += 10; // +=, -=, *=, /=, %= 
    printf("num += 10 %d \n", num);

    num *= 2; // num = num * 2; // 20 * 2 = 40
    printf("num *= 2 is %d \n", num);

    num /= 10; // num = num / 10 // 40 / 10 = 4 
    printf("num /= 10 is %d \n", num);

    num %= 10; // num = num % 10 // 4 % 10 = 4 
    printf("num %= 10 is %d \n", num);

    num -= 2; // num = num - 2 // 4 - 2 = 2 
    printf("num -= 2 is %d \n", num);

    // num = num + 10 
    // num += 10 -> speed 
}