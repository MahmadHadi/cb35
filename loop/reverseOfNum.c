// * get reverse of a number 
// * input -> num
// num = 123 -> 321
// 4243 -> 3424 
// -142 -> -241  

#include <stdio.h>
void main() {       

}

123 -> 1 * 100 + 2 * 10 + 3 * 1
3 * 1 + 2 * 10 + 1 * 100 
3 + 20 + 100 = 123 

3 * 1 + 2 * 10 + 1 * 100 = 321 

int temp = 1 
int rnum = 0

ld = num % 10 // 3 
rnum = ld + rnum * temp // 3 + 0 * 1 = 3 
temp *= 10 // temp = 10 
num /= 10 // num = 12

ld = num % 10 // 2 
rnum = ld + rnum * temp // 2 + 3 * 10 = 2 + 30 = 32 
temp *= 10 // temp = 100 
num /= 10 // num = 1

ld = num % 10 // 1 
rnum = ld + rnum * temp // 1 + 32 * 100 = 320 + 1 = 321 
temp *= 10 // temp = 1000 
num /= 10 // num = 0 

num != 0 -> 0 != 0 -> f -> loop break;
