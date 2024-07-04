#include <stdio.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    int first = num / 100;
    int sec = (num % 100) / 10;
    // int sec = (num / 10) / 10;
    int ld = num % 10; // third

    printf("first = %d, sec = %d, third | ld = %d ", first, sec, ld);
}
    // num = 123 f = num / 100        // 123 / 100 = 1
    // s = num / 10     // 123 / 10 = 12
    // t = num % 10 // 123 % 10 = 3

    // num = 123
    // f = num / 100 // 1
    // s = f / 10 // 1 / 10 = 0
    // t = num % 100

    // s = (num % 100) / 10 // 23 / 10 = 2

    // s = (531 % 100) / 10 = 31 / 10 = 3

    // s = (num / 10) % 10 // (123 / 10) % 10 = 12 % 10 = 2