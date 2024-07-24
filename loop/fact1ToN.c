// * input -> num -> print all number fact between 1 to num 
// num = 3 -> 1!, 2!, 3!
#include <stdio.h>
void main() {
    int num = 5;
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
        printf("%d! = %d \n", i, fact);
    }
    printf("%d! = %d \n", num, fact);
}
// 3! = 6
// i! = fact  
// 1! = 1
// 2! = 2 
// 3! = 6 