#include<stdio.h>
float Simple_Int(int ,int ,int);

float Simple_Int(int a ,int b ,int c)
{
     float SI;
     
     SI = (a*b*c)/100;
     
     return SI;
}

int main()
{
   int principle,rate,time;
   float SI;
   
   printf("PRINCIPLE : \n");
   scanf("%d",&principle);
   
   printf("RATE : \n");
   scanf("%d",&rate);
   
   printf("TIME : \n");
   scanf("%d",&time);
   
   SI = Simple_Int( principle,  rate ,  time);
   printf("Simple Interest : %.2f",SI);
  
   return 0;
}
