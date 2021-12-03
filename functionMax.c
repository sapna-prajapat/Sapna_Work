#include<stdio.h>
float max(int,float);

float max(int x,float y)
{
   if(x>y)
   return x;
   else
   return y;
}

int main()
{
  int a,c,d;
  a=10;
  float b=20.0f,x;
  c=30;
  d=40;
  //x=max(a,b);
  x=max(max(a,b),max(c,d));
      printf("Maximum Value is %f\n",x);
  return 0;
}
