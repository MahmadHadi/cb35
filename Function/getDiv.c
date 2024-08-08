#include <stdio.h>

float getDiv(int number1, int number2) {
    // scope 
    // float div = (float)number1 / number2;
    
    // return div;
    return (float)number1 / number2;
}

int main() {

    int num1 = 1, num2 = 212;
    float ans = getDiv(num1, num2);
    printf("ans = %f ", ans);

    return 0;
}