#include <stdio.h>
char *(a[7]) = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
void weekday(int *w);
int main()
{
       int w;
       printf("Enter the week day:");
       scanf("%d", &w);
       weekday(&w);
       return 0;
}
void weekday(int *w)
{
       if (*w > 7 || *w < 1)
       {
              printf("invalid input");
       }
       else
              printf("%s", a[*w - 1]);
}
