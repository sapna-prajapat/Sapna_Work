#include<stdio.h>

void Posi_Neg(int);

void Posi_Neg(int Num)
{
    
     if(Num>0){
       printf("%d is Positive\n",Num);
       }
       else if(Num==0){
           printf("Zero\n");
           }
           else{ 
           printf("%d is Negative\n",Num);
           }    
}

int main()
{
    int Num,Value;
    
    printf("Enter a no. \n");
    scanf("%d",&Num);
    
    Posi_Neg(Num);
   
           return 0;
}
