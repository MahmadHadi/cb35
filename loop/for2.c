// 5 x 1 = 5
// 5 x 2 = 10

#include <stdio.h>
void main()
{
      int number;
      int answer;

      printf("enter a number : ");
      scanf("%d",&number);

      for (int count = 1; count <= 10; count++) {
            answer = number * count;
            printf("%d X %d = %d \n", number, count, answer);
      }
}

// answer = number*count;

// printf("\n%d x %d = %d",number,count,answer);

// count++;
// answer = number*count;

// printf("\n%d x %d = %d",number,count,answer);