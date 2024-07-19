// input -> start = 2, end = 5 
//     print table between 2 and 5 
//     table of 2, 3, 4, 5 

// start = 5, end = 10 
//     print table between 5 and 10
// table of 5, 6, 7, 8, 9, 10

#include <stdio.h>
void main() {
    int start, end;
    printf("Enter start : ");
    scanf("%d", &start);

    printf("Enter end : ");
    scanf("%d", &end);

    int ans;

    for (int j = start; j <= end; j++) {
        for (int i = 1; i <= 10; i++) {
            printf("%d X %d = %d \n", j, i, j * i);
        }
        printf("\n---------------\n");
        start++;
    }
}
    // for (int i = 1; i <= 10; i++) {
    //     printf("%d X %d = %d \n", start, i, start * i);
    // }
    // printf("\n---------------\n");
    // start++; // start = start + 1 = 4 + 1 = 5 
    // // 4 done 

    // for (int i = 1; i <= 10; i++) {
    //     printf("%d X %d = %d \n", start, i, start * i);
    // }
    // printf("\n---------------\n");
    // start++; // start = start + 1 = 4 + 1 = 5 
    // // 5 done 

    // for (int i = 1; i <= 10; i++) {
    //     printf("%d X %d = %d \n", start, i, start * i);
    // }
    // printf("\n---------------\n");
    // start++; // start = start + 1 = 4 + 1 = 5 
    // // 6 done 

// start = 2, end = 4 -> 2, 3, 4

// 2 * 1 = 2
// 2 * 2 = 4
// 2 * 3 = 6
// 2 * 4 = 8
// 2 * 5 = 10 
// 2 * 6 = 12
// .
// .
// .

// 3 * 1 = 3 
// 3 * 2 = 6
// 3 * 3 = 9
// 3 * 4 = 12
// .
// .
// .

// 4 * 1 = 4 
// 4 * 2 = 8
// 4 * 3 = 12
// .
// .
// .