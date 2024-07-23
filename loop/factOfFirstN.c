// n = 3 -> print 1! 2! 3!
// 1! = 1
// 2! = 2 * 1
// 3! = 3 * 2 * 1

#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num = -7;
    // printf("Enter a number : ");
    // scanf("%d", &num);

    num = abs(num);

    int fact = 1;

    for (int j = 1; j <= num; j++) {
        for (int i = 1; i <= j; i++) {
            fact = fact * i;
        }
        printf("%d! = %d \n", j, fact);
        fact = 1;
    }
}
// num = 3
// fact = 1
// int i = 1

// fact = i!
// i++ // 2
// print fact

// fact = i!
// i++ // 3
// print fact

// fact = i!
// i++ // 4
// print fact