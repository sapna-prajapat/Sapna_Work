#include<stdio.h>
#include<stdlib.h>
int Greatest_Num(int , int , int );
int main()
{
   int a,b,c;
   printf("Enter three number\n");
   scanf("%d%d%d",&a,&b,&c);
   
   int result;
   result = Greatest_Num(a,b,c);
   printf("Biggest number is %d\n",result);
   return 0;
}
int Greatest_Num(int  a, int b , int c ){  
      if(a>b&&a>c){
         return a;
         }
      else if(b>c){
            return b;
            }
         else
            return c;
     
}

