#include <stdio.h>
#include <stdbool.h>

bool isEven1(int num) {
    if (num % 2 == 0) { // even 
        return true;
        // printf("Hello world ! \n");
    } else { // odd 
        return false;
        // printf("Hello world ! \n");
    };
};

bool isEven2(int num) {
    if (num % 2 == 0) {
        return true;
    };
    return false;
};

bool isEven3(int num) {
    // num % 2 == 0 ? return true : return false;
    return num % 2 == 0 ? true : false;
};

bool isEven4(int num) { // num = 5 
    return !(num % 2 != 0);
}

bool isEven5(int num) { // num % 2 -> 0 || 1 
    return !(num % 2); // num % 2 == 0 -> even 
}

int main() { 
    printf("isEven1 = %d \n", isEven1(12));
    printf("isEven2 = %d \n", isEven2(12));
    printf("isEven3 = %d \n", isEven3(12));
    printf("isEven4 = %d \n", isEven4(12));
    printf("isEven5 = %d \n", isEven5(12));
    
    return 0;
};

// num = 4 

// isEven(num) 
//     num % 2 == 0 -> 4 % 2 == 0 -> t 
//         return true; -> function break;

// // ! -------------
// num = 5 
// isEven(num) 
//     num % 2 == 0 -> 5 % 2 == 0 -> f 
//     return false;

// // ! -------------

// num = -101 

// isEven(num)
//     num % 2 == 0 -> -101 % 2 == 0 -> f 
//     return false;

// // ! ------------- 

