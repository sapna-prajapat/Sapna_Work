#include<stdio.h>
int main()
{
  int r,c;
  int a[2][2]={{100,30},{50,60}};
  int b[2][2]={{50,20},{30,40}};
  int d[2][2];
      printf("Given Matrix 1---------\n");
       for(r=0;r<2;r++)
        {
          for(c=0;c<2;c++)
           printf("%4d \n",a[r][c]);
        }
      printf("\n");
  
      printf("Given Matrix 2---------\n");
        for(r=0;r<2;r++)
         {
           for(c=0;c<2;c++)
             printf("%4d \n",b[r][c]);
         }
      printf("\n");
  
      printf("After Subtraction---------\n");
        for(r=0;r<2;r++)
         {
            for(c=0;c<2;c++){
              d[r][c]=a[r][c]-b[r][c];
              printf("%4d \n",d[r][c]);
         }
     }
       printf("\n");
  return 0;
} 