#include <stdio.h>
int main()
{
       int *p1, *p2, a, b, add;

       printf("\n Enter Any Two Numbers To Add : ");
       scanf("%d%d", &a, &b);

       p1 = &a;
       p2 = &b;

       add = *p1 + *p2;

       printf("\n Addition = %d", add);

       return 0;
}