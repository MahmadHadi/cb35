// * input -> num, key = 10 -> take input until user does not enter value of key 
// num = 12
// scanf -> num = 4
// scanf -> num = 10 -> print you have entered key 

#include <stdio.h>
void main () {
    int num, key = 10;
    // printf("Enter a number : ");
    // scanf("%d", &num);

    // if (num == key) {
    //     printf("You have entered the key ");
    // }

    do {
        printf("Enter a number : ");
        scanf("%d", &num);
        // if (num == key) {
        //     printf("You have entered the key \n");
        // }
    } while (num != key);
    printf("You have entered the key \n");
}

// num -> input -> num = 12 -> scanf -> num = 15 -> scanf -> num = 10 

// num = 12 -> num == key -> 12 == 10 -> f 

// num != key -> 12 != 10 -> t 

// num = 42 -> num == key -> 42 == 10 -> f 
// num != key -> 42 != 10 -> t 

// .
// .
// .

// num = 102 -> num == key -> 102 == 10 -> f 
// num != key -> 102 != 10 -> t 

// num = 10 -> num == key -> 10 == 10 -> t 
//     print "You have entered the key "
// num != key -> 10 != 10 -> f -> loop end 