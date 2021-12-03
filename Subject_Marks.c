#include<stdio.h>
void Sub_Marks(int,int,int,int,int);

void Sub_Marks(int english,int hindi,int maths,int social,int science)
{
     int Total,Percentage;
     
     Total = hindi + english + maths + social + science;
   
     Percentage =  Total/5.0f;
     printf("Percentage : %d ",Percentage);
}

int main()
{
   int hindi,english,maths,social,science,Total,Percentage;
   
   printf("Hindi :");
   scanf("%d",&hindi);
   
   printf("English :");
   scanf("%d",&english);
   
   printf("Maths :");
   scanf("%d",&maths);
   
   printf("Social Science :");
   scanf("%d",&social);
   
   printf("Science :");
   scanf("%d",&science);
   
   Sub_Marks(english,hindi,maths,social,science);
   
   return 0;
}
