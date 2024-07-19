// sum of first 50 even numbers
// 2+4+6+8....+50
#include<stdio.h>
void main()
{
      int count=0;
      int number=1;

     while(number<=51)
     {
            count = count+number;
            // number=number+2;
            number+=2;
     }
      // count = count+4;
      // count = count+6;
      // count = count+8;

      printf("%d",count);

}