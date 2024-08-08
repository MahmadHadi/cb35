#include <stdio.h>
void printNum(int number2, int number1) {
    printf("number 1 = %d \n", number1);
    printf("number 2 = %d \n", number2);

    return;
}
int main() { 

    int num1 = 1, num2 = 2;

    printNum(num1, num2);
    printNum(4, 1);
    return 0;
}