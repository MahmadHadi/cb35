// write a program that print fiboci sequnce
// 0,1,1,2,3,5,8,13
// a,b,c
//   a,b,c
//     a,b,c

#include <stdio.h>
void main()
{
      int a = 0;
      int b = 1;
      int c =0;

      printf("%d ", a);
      // printf("%d ", b);

      // c = a + b;
      // printf("%d", c); // 1

      for (int i=1;i<=13;i++)
      {
            a = b;
            b = c;
            c = a + b;
            printf("%d ", c);
      }

      //       a=b;
      //       b=c;
      //       c=a+b;
      //       printf("%d",c); //2

      //      a=b;
      //      b=c;
      //      c=a+b;
      //      printf("%d",c);
}