#include<stdio.h>
float circum(float);

float circum(float r)
{
  float circum;
  {
     circum = 2*r*3.14f;
  }
  return circum;
}
int main()
{
   float x,r;
   printf("Enter radius of Circle:\n");
   scanf("%f",&r);
   
   x=circum(r);
   printf("Circumference of Circle %f\n",x);
    
   return 0;
}
