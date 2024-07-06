#include <stdio.h>
#include <stdbool.h>
void main()
{
    // bool flag = true;
    // printf("%d \n", flag);

    // flag = false;
    // printf("%d \n", flag);
    
    // printf("!flase = %d \n", !false);

    // printf("%d \n", true + false);

    // printf("%d \n", !(!true * !false));
    // // printf("%d \n", !(0));

    // int num = true + false + true * false;
    // // true + false + false
    // printf("%d \n", num);

    // // (), * /, + -

    // num = true + 101 * (0 + true - false);
    // printf("%d \n", num); // 102

    // num = -101;
    // printf("%d \n", !num);

    // if (!(!num + true)) { // 0 + 1 = 1
    //     printf("true ");
    // } else {
    //     printf("false ");
    // }




    // * * * * 
    // * * * * 
    // * * * * 
    // * * * * 

    // printf("* * * * \n");
    // printf("* * * * \n");
    // printf("* * * * \n");
    // printf("* * * * \n");

    for (int i = 1; i <= 5; i++) {
        // printf("* * * * \n");
        // printf("* ");
        // printf("* ");
        // printf("* ");
        // printf("* ");
        for (int j = 5; j >= i; j--) {
            printf("* ");
        }
        printf("\n");
    }
}

// i = 1; i <= 4

// 1 <= 4 -> t 
//     print "* "
//     print "* "
//     print "* "
//     print "* "
//     print "\n"
//     i++ // i = 2 

// 2 <= 4 -> t 
//     print "* "
//     print "* "
//     print "* "
//     print "* "
//     print "\n"
//     i++ // i = 3 

// 3 <= 4 -> t 
//     print "* "
//     print "* "
//     print "* "
//     print "* "
//     print "\n"
//     i++ // i = 4

// 4 <= 4 -> t 
//     print "* "
//     print "* "
//     print "* "
//     print "* "
//     print "\n"
//     i++ // i = 5 

// 5 <= 4 -> f -> loop end 


