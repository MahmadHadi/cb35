// * get reverse of a number
// * input -> num
// num = 123 -> 321
// 4243 -> 3424
// -142 -> -241

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int rnum = 0, ld;

    if (num < 0) {
        printf("-");
    } 
    
    num = abs(num);

    while (num != 0) {
        ld = num % 10;
        printf("%d", ld);
        num /= 10;
    }
    
    // * -0321 
}
// num = 123 => 321
// ld = 0
// rnum = 0

// ld = num % 10 // 3
// rnum = 3 + rnum * 10 // 3 + 0 * 10 = 3
// num = num / 10 // 12

// ld = num % 10 // 2
// rnum = ld + rnum * 10 // 2 + 3 * 10 = 2 + 30 = 32
// num /= 10 // num = 1

// ld = num % 10 // 1
// rnum = ld + rnum * 10 // 1 + 32 * 10 = 1 + 320 = 321
// num /= 10 // num = 0

// num != 0 -> 0 != 0 -> false -> loop break;

// ---------------------
// num = 23491 -> 19432
// rnum = 0
// ld = 0

// num != 0 -> t

// ld = num % 10 // 1
// rnum = ld + rnum * 10 // 1 + 0 = 1
// num /= 10 // 2349

// ld = num % 10 // 9
// rnum = ld + rnum * 10 // 9 + 1 * 10 = 19
// num /= 10 // 234

// ld = num % 10 // 4
// rnum = ld + rnum * 10 // 4 + 19 * 10 = 194
// num /= 10 // 23
// .
// .
// .
