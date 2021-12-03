#include<stdio.h>

void fibonacciSeries (int number);

void main()
{
   int number;

   printf("Enter number: ");
   scanf("%d", &number);

   printf("\nThe Fibonacci series is: \n");

   fibonacciSeries(number);

}

void fibonacciSeries(int number)
{
   int a=0, b=1, temp;

   while (a<=number)
   {
     printf("%d\t", a);
     temp = a+b;
     a = b;
     b = temp;
   }

}
