// 1 2 3 
// 1 2 3 
// 1 2 3  

#include <stdio.h>
void main() { 
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) { 
            printf("%d ", i);
        }
        printf("\n");
    }
}

// i = 1; i <= 3 
// j = 1; j <= 3 

// i <= 3 -> 1 <= 3 -> t 
//     j <= 3 -> 1 <= 3 -> t 
//         print i
//         j++ // 2 

//     j <= 3 -> 2 <= 3 -> t 
//         print i
//         j++ // 3

//     j <= 3 -> 3 <= 3 -> t 
//         print i
//         j++ // 4 
    
//     j <= 3 -> 4 <= 3 -> f -> loop break;
//     pirnt "\n"
//     i++ // 2 

// i <= 3 -> 2 <= 3 -> t 
//     j = 1 
//     j <= 3 -> 1 <= 3 -> t 
//         print i
//         j++ // 2 
//     j <= 3 -> 2 <= 3 -> t 
//         print i
//         j++ // 3 
//     j <= 3 -> t 
//         print i
//         j++ // 4 
//     j <= 3 -> f -> loop break;
//     print "\n" 
//     i++ // 3 

// i <= 3 -> 3 <= 3 -> t   
//     j = 1 
//     j <= 3 -> 1 <= 3 -> t 
//         print i
//         j++ // 2 
//     j <= 3 -> t 
//         print i
//         j++ // 3 
//     j <= 3 -> t 
//         print i
//         j++ // 4
//     j <= 3 -> 4 <= 3 -> f -> loop break;
//     print "\n"
//     i++  // 4 

// i <= 3 -> f -> loop break; 