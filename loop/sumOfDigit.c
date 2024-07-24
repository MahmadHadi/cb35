// input => num -> calc sum of all digits 
// num = 123 -> sum = 1 + 2 + 3 = 6 
// num = 5323 -> sum = 13 

#include <stdio.h>
void main() {
    num -> done 
    ans -> to store ans 

    ld = num % 10 // last digit 
    sum += ld  // calc sum 
    num /= 10 // remove ld {last digit}
}

// num = 123
// sum = 0 
// ld = 0

// ld = 123 % 10 // ld = 3 
// sum += ld // sum = 0 + 3 = 3
// num /= 10 // num = num / 10 = 123 / 10 = 12 

// ld = num % 10 = 12 % 10 = 2 
// sum += ld = sum = 3 + 2 = 5 
// num /= 10 // 1

// ld = num % 10 = 1 % 10 = 1
// sum += ld // sum = 5 + 1 = 6 
// num /= 10 // 0