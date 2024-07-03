#include <stdio.h>
#include <stdbool.h>
void main() {
    bool flag1 = true;
    printf("%d \n", flag1);

    flag1 = false;
    printf("%d \n", flag1);

    flag1 = !false; // 1
    printf("%d \n", flag1);

    flag1 = !flag1; // !1 = 0
    printf("%d \n", flag1);

    bool flag2 = NULL;
    printf("%d ", flag2);
}