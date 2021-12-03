#include <stdio.h>

int rightrotate(int *a, int n, int k)
{
       int i, j, temp;
       for (i = 0; i < k; i++)
       {
              temp = a[n - 1];
              for (j = n - 1; j > 0; j--)
              {
                     a[j] = a[j - 1];
              }
              a[j] = temp;
       }
}
print(int *a, int n)
{
       int i;
       for (i = 0; i < n; i++)
       {
              printf("%d ", a[i]);
       }
}
int main()
{
       int a[10000], i, n, j, k, temp;

       printf("Enter size of the  array : ");
       scanf("%d", &n);
       printf("Enter elements in array : ");
       for (i = 0; i < n; i++)
       {
              scanf("%d", &a[i]);
       }
       printf("how many times right rotate : ");
       scanf("%d", &k);
       rightrotate(a, n, k);
       printf("\narray elements after right rotate  : ");
       print(a, n);
       return 0;
}
