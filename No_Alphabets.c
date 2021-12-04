#include<stdio.h>
#include <string.h>
int main()
{
       char str[1000];
       printf("Please Enter String\n");
       fgets(str, 1000, stdin);
       int i, count = 0, count1 = 0, count2 = 0;
       for (i = 0; str[i] != '\0'; i++)
       {
              if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
              {
                     count++;
              }
              if (str[i] >= ' ' && str[i] <= '/')
              {
                     count2++;
              }
              if (str[i] >= ':' && str[i] <= '@')
              {
                     count2++;
              }
              if (str[i] >= '[' && str[i] <= '`')
              {
                     count2++;
              }
              if (str[i] >= '{' && str[i] <= '~')
              {
                     count2++;
              }

              if (str[i] >= '0' && str[i] <= '9')
              {
                     count1++;
              }
       }
       printf("Number of alphabets:%d\n", count);
}