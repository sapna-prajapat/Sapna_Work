//using return :
#include<stdio.h>
int add(int x,int y)
{
  int z;
  z=x+y;
  return z;
}
int main()
{
  int a=20,x;
  int b=10;
  x=add(a,b);
  printf("%d",x);
  return 0;
}
