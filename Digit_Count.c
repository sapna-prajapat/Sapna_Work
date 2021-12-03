#include <stdio.h>
void Digit_count(int);

void Digit_count(int n)
{
       int count = 0;
       do
       {
              n = n/10;
              ++count;
       } while (n != 0);
       printf("Number of digits: %d", count);
}

int main()
{
       long long n;

       printf("Enter an integer: ");
       scanf("%lld", &n);

       Digit_count(n);
       return 0;
}