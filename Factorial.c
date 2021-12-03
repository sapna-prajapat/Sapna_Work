#include <stdio.h>

int fact(int);

int main()
{
       int num, factorial;

       printf("Enter a number to calculate it's factorial\n");
       scanf("%d", &num);
       factorial = fact(num);
       printf("Factorial of the num(%d) = %d\n", num, factorial);
       // printf("Factorial of the num(%d) = %d\n",num,fact(num));
}

int fact(int n)
{
       int i, f = 1;
       for (i = 1; i <= n; i++)
       {
              f = f * i;
       }
       return f;
}
