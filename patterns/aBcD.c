// a B c D 
// e F g H 
// i J k L 
// m N o P 

#include <stdio.h>
void main() {
    // upper -> lower, lower -> upper 
    // -32 -> +32 
    int num = 1;
    for (int i = 1; i <= 2; i++) { // row 
        for (int j = 1; j <= 6; j++) { // col 
            if (j % 2 == 0) { // even -> upper 
                printf("%c ", num + 64);
            } else { // odd -> lower 
                printf("%c ", num + 96);
            }
            num++;
        }
        printf("\n");
    }
}