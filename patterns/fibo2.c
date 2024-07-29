// 01 02 03
// 05 08 13

#include <stdio.h>
void main() {
    int first = 1, sec = 2;
    int sum;
    sum = first + sec; // 3 

    printf("%.2d ", first); 
    printf("%.2d ", sec); 
    printf("%.2d ", sum);
    printf("\n");
    first = sec;
    sec = sum; 

    // fibo.c -> output -> table 
    // for (int i = 1; i <= 1; i++) { // row 
    //     for (int j = 1; j <= 3; j++) { // col
    //         sum = first + sec;
    //         printf("%.2d ", sum);
    //         first = sec;
    //         sec = sum; 
    //     }
    //     printf("\n");
    // }
    int i = 1, j = 1;
    while (i <= 1) {
        // j = 4 
        j = 1;
        while (j <= 3) {
            sum = first + sec;
            printf("%.2d ", sum);
            first = sec;
            sec = sum; 

            j++;
        }
        printf("\n");
        i++;
    }
}

// f = 1, s = 2 
// sum = f + s 
// print f, s, sum 
// print "\n"