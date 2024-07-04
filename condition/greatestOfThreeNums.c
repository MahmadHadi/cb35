// * input -> one, two, three -> print greatest of all 
// one = 1, two = 11, three = 10 -> print two 

#include <stdio.h>
void main() {
    int one, two, three;
    printf("Enter one : ");
    scanf("%d", &one);

    printf("Enter two : ");
    scanf("%d", &two);

    printf("Enter three : ");
    scanf("%d", &three);

    if (one > two) {
        if (one > three) {
            printf("%d ", one);
        } else {
            printf("%d ", three);
        }
    } else {
        if (two > three) {
            printf("%d ", two);
        } else {
            printf("%d ", three);
        }
    }
}

// num1 = 1, num2 = 2, num3 = 3
// num1 > num2 -> 1 > 2 -> f 
// else 
//     num2 > num3 -> 2 > 3 -> f  
//     else 
//         print num3 // 3 



// num1 = 10, num2 = 5, num3 = 3

// num1 > num2 -> 10 > 5 -> t 
//     num1 > num3 -> 10 > 3 -> t 
//         print num1 // 10 


// num1 = 1, num2 = 10, num3 = 15 

// num1 > num2 -> 1 > 10 -> f 
// else 
//     num2 > num3 -> 10 > 15 -> f 
//     else 
//         print num3 // 15 


// num1 = 10, num2 = 12, num3 = 2 

// num1 > num2 -> 10 > 12 -> f 
// else 
//     num2 > num3 -> 12 > 2 -> t 
//         print num2 


