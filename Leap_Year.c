#include<stdio.h>
void Leap_Year(int);

void Leap_Year( int year)
{

       if(year%4==0)
       printf("%d :Year is Leap Year\n",year);

       else
         printf("%d : is not Leap Year\n",year);
}

int main()
{
       int year;

       printf("Enter Year :\n");
       scanf("%d",&year);

       Leap_Year(year);

       return 0;
}