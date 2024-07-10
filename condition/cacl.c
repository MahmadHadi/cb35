// * input -> num1, num2. opr -> + - * / % 
#include <stdio.h>
void main() {
    float num1, num2;
    float result;
    char opr;

    printf("Enter num1 : ");
    scanf("%f", &num1);
    printf("Enter num2 : ");
    scanf("%f", &num2);

    fflush(stdin);
    printf("Enter operator : ");
    scanf("%c", &opr);

    switch (opr) {
        case '+': 
            result = num1 + num2;
            printf("ans = %f ", result);
            break;

        case '-': 
            result = num1 - num2;
            printf("ans = %f ", result);
            break;
            
        case '*': 
            result = num1 * num2;
            printf("ans = %f ", result);
            break;
    
        case '/': 
            result = num1 / num2;
            printf("ans = %f ", result);
            break;
    
        case '%': 
            result = (int)num1 % (int)num2;
            printf("ans = %f ", result);
            break;
        
        default :
            printf("Invalid operator");
            break;
    }
}
