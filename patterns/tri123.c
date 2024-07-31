// 1 
// 1 2 
// 1 2 3 

#include <stdio.h>
void main() {
    int height;
    printf("Enter height : ");
    scanf("%d", &height);

    for (int i = 1; i <= height; i++) { // row 
        for (int j = 1; j <= i; j++) { // cell 
            printf("%d ", j);
        }
        printf("\n");
    }
}

// i = 1, j = 1
// i <= 3, j <= i 

// i <= 3 -> 1 <= 3 -> t 
//     j = 1 
//     j <= i -> 1 <= 1 -> t 
//         print "* " 
//         j++ // j = 2 
//     j <= i -> 2 <= 1 -> f -> loop end 
//     print "\n"
//     i++ // i = 2 

// i <= 3 -> 2 <= 3 -> t 
//     j = 1 
//     j <= i -> 1 <= 2 -> t 
//         print "* "
//         j++ // j = 2 
//     j <= i -> 2 <= 2 -> t 
//         print "* "
//         j++ // j = 3 
//     j <= 2 -> 3 <= 2 -> f -> loop end 
//     print "\n"
//     i++ // i = 3 

// i <= 3 -> 3 <= 3 -> t 
