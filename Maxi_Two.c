#include<stdio.h>
void Maxi_Two(int , int);

void Maxi_Two(int a, int b)
{
     if(a>b)
       printf("First : %d .\nFirst is Greater than Second\n",a);
       else
         printf("Second : %d .\nSecond is Greater than First\n",b);
}

int main()
{
       int first,second;

       printf("Enter Numbers \n");
       scanf("%d%d",&first,&second);

       Maxi_Two(first,second);

       return 0;
}