// input - 2pwd -> p1, p2 
// p1 => t -> input -> p2 -> chekc 

#include <stdio.h>
void main() {
    int pwd1, pwd2;
    int opwd1 = 12121, opwd2 = 1122121;

    printf("Enter pwd1 : ");
    scanf("%d", &pwd1);

    if (pwd1 == opwd1) {
        printf("Enter pwd2 : ");
        scanf("%d", &pwd2);
        if (pwd2 == opwd2) {
            printf("Access Granted\n");
        } else {
            printf("Incorrect pwd 2");
        }
    } else {
        printf("Incorrect pwd 1");
    }
}
