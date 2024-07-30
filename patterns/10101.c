// n = 4 -> 4 * 4 sq 
// 0 1 0 1
// 0 1 0 1
// 0 1 0 1
// 0 1 0 1

// 0 (01) 1 (02) 0 (03) 1 (04) 
// 0 (05) 1 (06) 0 (07) 1 (08) 
// 0 (09) 1 (10) 0 (11) 1 (12) 
// 0 (13) 1 (14) 0 (15) 1 (16)  

// n = 3 -> 3 * 3 sq 
//     0 1 0 
//     1 0 1 
//     0 1 0

#include <stdio.h>
void main() {
    int count = 1;
    for (int i = 1; i <= 5; i++) { // row 
        for (int j = 1; j <= 3; j++) { // col
            if (count % 2 == 0) { // even
                printf("1 ");
            } else { // odd 
                printf("0 ");
            }
            count++;
        }
        printf("\n");
    }
}