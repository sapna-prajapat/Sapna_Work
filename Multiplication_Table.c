#include <stdio.h>
void Multiplication_Table(int);
void Multiplication_Table(int n)
{
       int i;
       for (i = 1; i <= 10; ++i)
       {
              printf("%d * %d = %d \n", n, i, n * i);
       }
}

int main()
{
       int n;
       printf("Enter an integer: ");
       scanf("%d", &n);

       Multiplication_Table(n);

       return 0;
}