#include <stdio.h>
void Great_Two(int, int);

void Great_Two(int x, int y)
{

       if (x > y)
              printf("%d is greater\n", x);
       else
              printf("%d is greater\n", y);
}

int main()
{
       int a, b;
       printf("Enter of Two Number \n");
       scanf("%d%d", &a, &b);

       Great_Two(a, b);

       return 0;
}