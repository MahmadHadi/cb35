// i++ -> post 
// ++i -> pre 

#include <stdio.h>
void main() {
    int i = 1;

    for (i = 0; i <= 10; ++i) {
        printf("%d ", i);
    }
    // i = 11 -> i <= 10 -> 11 <= 10 -> f 
    printf("\n");

    i = 1;

    int num = i++; // i++ = 2 -> = -> +
    printf("num = %d ,%d  \n", num, i);

    i = 1;
    num = ++i; // -> +, = 
    printf("num = %d ,%d  \n", num, i);
}
// i = 1
// i++ -> print 1 -> i = 2 
// ++i -> i = 3 -> print 3 

