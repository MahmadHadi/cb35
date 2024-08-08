#include <stdio.h>
int getSum(int number1, int number2) {
    int sum = number1 + number2;
    return sum;
}
int main() {
    int num1 = 1, num2 = 2;

    int ans = getSum(num1, num2);
    printf("ans = %d ", ans);
    return 0;
}

// return type 
//     void 
//     int 
//     float 
//     char 
//     bool