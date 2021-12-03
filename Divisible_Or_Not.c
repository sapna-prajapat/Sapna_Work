#include <stdio.h>

void Divisible(int);

void Divisible(int n)
{
       if((n % 5 == 0) && (n % 11 == 0))
               printf("%d is Divisible by 5 and 11\n",n);

       else
         printf("%d is not Divisible by 5 and 11\n",n);
}

int main()
{
       int n;

       printf("Enter a number\n");
       scanf("%d",&n);

       Divisible(n);

       return 0;
}