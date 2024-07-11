// * input -> marks -> marks > 40 -> pass : fail -> using ternary, invalid -> marks -> -ve || marks > 100
#include <stdio.h>
#include <stdbool.h>
void main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    bool isPass;

    (marks < 0 || marks > 100) ? 
        printf("Invalid input ") : 
        (marks > 40 ?
            printf("Pass ") :
            printf("Fail ")
        );

    // if (marks < 0 || marks > 100) {
    //     printf("Invalid input ");
    // } else {
    //     if (marks > 40) {
    //         printf("Pass ");
    //     } else {
    //         printf("Fail ");
    //     }
    // }

    if (marks < 0 || marks > 100) {
        printf("Invalid input ");
    } else if (marks > 40) {
        printf("Pass ");
    } else {
        printf("Fail ");
    }

    // if (c1 ) {
    //     code c1 
    // } else {
    //     if (c2 ) {
    //         c2 code 
    //     }
    // }
    // c1 ? code c1 : (c2 ? c2 code);
}

// bool isPass = marks > 40 && marks < 0 ? 
//         true :
//         false;


// marks = 32 
// 32 > 40 && 32 < 0 -> f 

// marks = -32 
// -32 > 40 && -32 < 0 -> f 

// marks = 50 
// 50 > 40 && 50 < 0 -> f 


// marks > 40 || marks < 0

// marks = 50 
// 50 > 40 || 50 < 0 -> t -> pass 

// marks = 30 
// 30 > 40 || 30 < 0 -> f -> fail

// marks = -10 
//  -10 > 40 || -10 < 0 -> t -> pass 