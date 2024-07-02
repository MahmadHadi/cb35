#include <stdio.h>
void main() {
    // 1 == 1 2 != -2 -> code 
    // else => code 2 

    // && -> and 
    // || -> or 
    // ! -> not 

    // 1 = on = true 
    // 0 = off = flase 
    printf("1 == 1  => %d \n", 1 == 1);

    printf("1 != 1 => %d \n", 1 != 1);

    int ans = 1 >= -1; // ans = 1 + 2 
    printf("ans = %d \n", ans);

    // 1 -1, 2 -2

    ans = 1 >= -1 && 2 >= -2;
    printf("ans = %d \n", ans);

    printf("%d ", !(1 && 0 || 1));
}