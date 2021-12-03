#include<stdio.h>
int AreaOfTrangle(int ,int);
int AreaOfTrangle(int b ,int h)
{
    b,h;
    int Area;
    
    Area = (b*h)/2;
    
return Area;
}
int main()
{
   int b,h,x;
   
   printf("Enter the value of Breadth and height:\n");
   scanf("%d %d",&b,&h);
   
   x=AreaOfTrangle(b,h);
   
   printf("Area of Triangle is %d\n",x);

  return 0;
}
