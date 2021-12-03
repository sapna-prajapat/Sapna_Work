#include <stdio.h>

void shell_sort(int[]);

int main()
{
       int arr_sort[5], i;

       printf("Simple Shell Sort Example - Functions and Array\n");
       printf("\nEnter %d Elements for Sorting\n", 5);
       for (i = 0; i < 5; i++)
              scanf("%d", &arr_sort[i]);

       printf("\nYour Data   :");
       for (i = 0; i < 5; i++)
       {
              printf("\t%d", arr_sort[i]);
       }

       shell_sort(arr_sort);
}

void shell_sort(int fn_arr[])
{
       int i, j, k, a, t;

       for (i = 5 / 2; i > 0; i = i / 2)
       {
              for (j = i; j < 5; j++)
              {
                     for (k = j - i; k >= 0; k = k - i)
                     {
                            if (fn_arr[k + i] >= fn_arr[k])
                                   break;
                            else
                            {
                                   // Swapping Values
                                   t = fn_arr[k];
                                   fn_arr[k] = fn_arr[k + i];
                                   fn_arr[k + i] = t;
                            }
                     }

                     printf("\nShell Sort Iteration [%d:%d] ", i, j);
                     for (a = 0; a < 5; a++)
                     {
                            printf("\t%d", fn_arr[a]);
                     }
              }
       }

       printf("\n\nSorted Data :");
       for (i = 0; i < 5; i++)
       {
              printf("\t%d", fn_arr[i]);
       }
}