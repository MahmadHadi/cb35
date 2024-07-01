// input -> pwd {int} -> digit >= 4 -> print "Strong pwd "
//                             else -> print "Weak pwd "
// input = 121 -> digit = 3 -> weak pwd 
// input = 1100 -> digit = 4 -> strong pwd 

#include <stdio.h>
void main() {
    int digit;
    printf("Enter pwd : ");
    scanf("%d", &digit);

    // absolute.c
    // int pwd = digit;
    if (digit < 0) {
        digit = digit * -1;
    }

    if (digit >= 1000) {
        printf("Strong pwd ");
    } else {
        printf("Weak pwd ");
    }

    printf("%d ", digit);
}