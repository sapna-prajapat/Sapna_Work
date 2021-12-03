#include <stdio.h>

int main()
{
       int i, n = 5, j;
       float temp = 0.0f;

       float a[5] = {1.01, 6.66, 3.3, 7.5, 2.2};

       printf("\nElement Before Sorting \n");

       for (i = 0; i <= 4; i++)
       {
              printf("%.2f  ", a[i]);
       }

       printf("\nElement After Sorting \n");

       for (i = 0; i < n; i++)
       {
              for (j = 0; j < n - i - 1; j++)
              {
                     if (a[j] > a[j + 1])
                     {
                            temp = a[j + 1];
                            a[j + 1] = a[j];
                            a[j] = temp;
                     }
              }
       }
       for (i = 0; i < 5; i++)
       {
              printf("%.2f \n ", a[i]);
       }
       return 0;
}
