// user -> age > 18, nationality => indian -> you can vote  
#include <stdio.h>
void main() {
    char nationality;
    int age;
    printf("Enter your age : ");
    scanf("%d", &age); // age = 19  // age = 17

    if (age > 0) { // 19 > 0 -> t // 17 > 0 
        if (age > 18) { // 17 > 18 -> f 
            printf("Are you Indian ? [y / n] : ");
            fflush(stdin);
            scanf("%c", &nationality); // y 

            if (nationality == 'y') { // 'y' == 'y'  -> t 
                printf("You can vote "); // You can vote 
            } else {
                printf("You cannot vote ");
            }
        } else { // run 
            printf("You cannot vote "); 
        }
    } else {
        printf("Invalid input | age cannot be -ve ");
    }
}

// age = 19 -> done 
// nationality = Indian -> yes -> done , no 

// age -> inpu 
// age > 18 
//     nationality -> input 
//         print "You can vote "
//     else 
//         print "You cannot vote "
// else 
//     print "You cannot vote "
