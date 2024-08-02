//      * * *
//        * *
//          *

#include <stdio.h>
void main() {
    // j = 1, j <= i, j++ -> # 
    // i = 3, i >= 1, i-- -> * 
    int height = 3;
    for (int i = 1; i <= height; i++) { // -> "\n"
        for (int j = 1; j <= i - 1; j++) { // #     
            // printf("# ");
            printf("  ");
        }

        for (int j = height; j >= i; j--) { // * 
            printf("* ");
        }

        printf("\n");
    }
}

h = 3 

i = 1, j, k 

i <= h -> 1 <= 3 -> t 
    j = 1
    k = h

    j <= i - 1 -> j <= 1 - 1 -> 1 <= 0 -> f 
    k >= i -> 3 >= 1 -> t 
        print "* ";
        k-- // k = 2 
    k >= i -> 2 >= 1 -> t 
        print "* "
        k-- // k = 1 
    k >= i -> 1 >= 1 -> t 
        print "* "
        k-- // k = 0 
    k >= i -> 0 >= 1 -> f -> loop break;

    print "\n"
    i++ // i = 2 

i <= 3 -> t 
    j = 1, k = h 
    j <= i - 1 -> 2 - 1 => 1 <= 1 -> t 
        print "# "
        j++ // j = 2 
    j <= i - 1 -> 2 - 1 -> 2 <= 1 -> f -> loop break;

    k >= i -> 3 >= 2 -> t  
        pritn "* "
        k-- // k = 2 
    k >= i -> 2 >= 2 -> t 
        print "* "
        k-- // k = 1 
    k >= i -> 1 >= 2 -> f -> loop break;

    i++ // i = 3 
    print "\n"

