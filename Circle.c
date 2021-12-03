#include<stdio.h>
float Area_Circle(float);

float Area_Circle(float r)
{
  float Area ;
  {
     Area = 3.14f*r*r;
  }
  return Area;
}
int main()
{
   float x,r;
   printf("Enter radius of Circle:\n");
   scanf("%f",&r);
   
   x=Area_Circle(r);
   printf("Area of Circle %f\n",x);
    
   return 0;
}
