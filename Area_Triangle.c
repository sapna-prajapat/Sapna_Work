#include<stdio.h>
void Area_Triangle(int , int);

void Area_Triangle(int b,int h)
{
      int Area;
      Area = (b*h)/2;
      printf("Area of Triangle is %d",Area);
}

int main()
{
   int b,h;
   
   printf("Enter the value of breadth\n");
   scanf("%d",&b);
   
   printf("Enter the value of height\n");
   scanf("%d",&h);
   
   Area_Triangle(b,h); 
   
   return 0;
}
