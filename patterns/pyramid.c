//     *
//    * *
//   * * *
    //  s 
    // s s 
//    s s c 
//   s s c c 
//  s s c c m 

#include <stdio.h>
void main() {
    int height = 5;
    // char name[] = "ssccm";

    // for (int i = 1; i <= height; i++) {
    //     for (int j = height - 1; j >= i; j--) {
    //         printf("#");
    //         // printf(" ");
    //     } 
    //     for (int j = 1; j <= i; j++) {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    char ch = 's';
    int count = 1;
    height = 20;
    for (int i = 1; i <= height; i++) {
        for (int j = height - 1; j >= i; j--) {
            // printf("#");
            printf(" ");
        } 
        for (int j = 1; j <= i; j++) {
            if (count == 1 || count == 2) {
                printf("s ");
            } else if (count == 3 || count == 4) {
                printf("c ");
            } else if (count >= height * 2) {
                printf("m ");
                count = 1;
            }
            count++;
        }
        printf("\n");
        count = 1;
    }
}

// ##*
// #* *
// * * *

// ##
// # 
// + 
// * 
// * * 
// * * * 


// ####*
// ###* *
// ##* * *
// #* * * *
// * * * * *


// ssccm 

//     s 
//    s s 
//   s s c 
//  s s c c 
// s s c c m 


//     s 
//    s s 
//   s s c 

// count = 1
// ch = 's'

// h = 3 
// i = 1

// i <= 3 -> 1 <= 3 -> t 
//     j = 2 
//     k = 1

//     j >= i -> 2 >= 1 -> t 
//         print "#"
//         j-- // j = 1 
//     j >= i -> 1 >= 1 -> t 
//         print "#"
//         j-- // j = 0 
//     j >= i -> 0 >= 1 -> f 

//     k <= i -> 1 <= 1 -> t 
//         print ch 
//         count++ // 2 
//         k++ // k = 2 
//     k <= i -> 2 <= 1 -> f -> loop break;

//     i++ // i = 2
//     print "\n"

// i <= h -> 2 <= 3 -> t 
//     j = 2, k = 1 
//     j >= i -> 2 >= 2 -> t 
//         pirnt "#"


//                    s     
//                   s s    
//                  s s c   
//                 s s c c  
//                s s c c m 
//               s s c c m s      
//              s s c c m s c     
//             s s c c m s c c    
//            s s c c m s c c m   
//           s s c c m s c c m s  
//          s s c c m s c c m s c 
//         s s c c m s c c m s c c     
//        s s c c m s c c m s c c m    
//       s s c c m s c c m s c c m s   
//      s s c c m s c c m s c c m s c  
//     s s c c m s c c m s c c m s c c 
//    s s c c m s c c m s c c m s c c m    
//   s s c c m s c c m s c c m s c c m s   
//  s s c c m s c c m s c c m s c c m s c  
// s s c c m s c c m s c c m s c c m s c c 



