// 01 02 03 
// 05 08 13 

#include <stdio.h>
void main() {
    int first = 0, sec = 1;
    int sum;
    
    // fibo.c -> output -> table 
    for (int i = 1; i <= 2; i++) { // row 
        for (int j = 1; j <= 3; j++) { // col
            sum = first + sec;
            printf("%.2d ", sum);
            first = sec ;
            sec = sum; 
        }
        printf("\n");
    }
}

// 1 2 3 5 8 13 ... 
// f = 0, sec = 1, sum

// sum = f + s = 0 + 1 = 1 
// print sum // 1 
// f = s // f = 1 
// s = sum // s = 1 

// sum = f + s // 1 + 1 = 2 
// print sum // 2 
// f = s // f = 1
// s = sum // s = 2 

// sum = f + s // 1 + 2 = 3 
// print sum // 3 
// f = s // f = 2 
// s = sum // s = 3 

// sum = f + s // 2 + 3 = 5 
// print sum 
// f = s // f = 3 
// s = sum // s = 5 

// sum = f + s // 3 + 5 = 8 
// print sum // 8
// f = s // f = 5 
// s = sum // s = 8 

// sum = f + s // 5 + 8 = 13 
// print sum // 13 
// f = s // f = 8 
// s = sum // s = 13 

