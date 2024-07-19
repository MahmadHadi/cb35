// 1,8,27...1000

#include <stdio.h>
void main()
{
      int number;

      printf("enter number : ");
      scanf("%d",&number);

      for (int count = 1; count <= number; count++)
      {
            printf("%d ", count * count * count);
      }

      // printf("%d",count*count*count);

      // count++;
      // printf("%d",count*count*count);
}