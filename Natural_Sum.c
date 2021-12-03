#include <stdio.h>
void Natural_Sum(int);

void Natural_Sum(int num)
{
     int i, sum = 0;
     for (i = 0; i <= num; i++)
  {
         sum = sum + i;
  }
  printf("\n Sum of the first %d number is: %d", num, sum);  
}

int main()
{
       int num;
       printf(" Enter a positive number: ");
       scanf("%d", &num);

       Natural_Sum(num);

       return 0;
}