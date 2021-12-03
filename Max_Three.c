#include <stdio.h>
void Maxi_Three(int, int, int);

void Maxi_Three(int a, int b, int c)
{
       if (a > b && a > c)
              printf("%d is greater\n", a);
       else if (b > c)
              printf("%d is greater\n", b);
       else
              printf("%d is greater\n", c);
}

int main()
{
       int first, second, third;

       printf("Enter Numbers \n");
       scanf("%d%d%d", &first, &second, &third);

       Maxi_Three(first, second, third);

       return 0;
}