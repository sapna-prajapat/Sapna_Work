#include <stdio.h>
void Armstrong(int);

void Armstrong(int num)
{
       int Num, remainder, result = 0;
       Num = num;
       while (Num != 0)
       {
              remainder = Num % 10;

              result = result + remainder * remainder * remainder;

              Num /= 10;
       }
       if (result == num)
              printf("%d is an Armstrong number.", num);
       else
              printf("%d is not an Armstrong number.", num);
}

int main()
{
       int num;
       printf("Enter a three-digit integer: ");
       scanf("%d", &num);

       Armstrong(num);

       return 0;
}