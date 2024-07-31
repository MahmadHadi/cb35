// * * *
// * *
// * 

#include <stdio.h>
void main() {
    int height = 5;

    for (int i = 1; i <= height; i++) {
        for (int j = height; j >= i; j--) {
            printf("* ");
        }
        printf("\n");
    }

    // int num = height;
    // for (int i = 1; i <= height; i++) {
    //     for (int j = 1; j <= num; j++) {
    //         printf("* ");
    //     }
    //     num--;
    //     printf("\n");
    // }
}

// i = 1, j = 3, j >= i

// i = 1
// j = 3 

// 1 2 3 
// 3 2 1 

// j >= 1 

// j = 3, i = 1 

// i <= 3 -> t 
//     j >= i -> 3 >= 1 -> t 
//         print "* "
//         j-- // j = 2 
//     j >= i -> 2 >= 1 -> t 
//         print "* "
//         j-- // j = 1
//     j >= i -> 1 >= 1 -> t  
//         print "* "
//         j-- // j = 0
//     j >= i -> 0 >= 1 -> f -> loop end 
//     print "\n"
//     i++ // i = 2 

// i <= 3 -> 2 <= 3 -> t 
//     j = 3 
//     j >= i -> 3 >= 2 -> t 
//         print "* "
//         j-- // j = 2 
//     j >= i -> 2 >= 2 -> t 
//         print "* "
//         j-- // j = 1 
//     j >= i -> 1 >= 2 -> f -> loop end 
//     pirnt "\n"
//     i++ // i = 3 

// i <= 3 -> 3 <= 3 -> t 
//     j = 3 
//     j >= i -> 3 >= 3 -> t 
//         print "* "
//         j-- // j = 2 
//     j >= i -> 2 >= 3 -> f -> loop end 
//     i++
//     print "\n"

// i <= 3 -> 4 <= 3 -> f -> loop end 

// // code 










// print "* "
// print "* "
// print "* "
// print "\n"

// print "* "
// print "* "
// print "\n"

// print "* "
// print "\n"